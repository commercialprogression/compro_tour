
(function ($) {
  Drupal.behaviors.comproTour = {
    attach: function (context, settings) {
      var steps = Drupal.settings.compro_tour.steps;
      var title = Drupal.settings.compro_tour.tour;
      var link = Drupal.settings.compro_tour.link;
      // Check for takeover cookie.
      var takeover_cookie = $.cookie('takeover');

      // Create empty tour.
      Drupal.settings.tour = {
        id: title,
        steps: []
      };

      // Add steps to tour.
      for (var i = 0; i < steps.length; i++) {
        Drupal.settings.tour.steps.push({
          title: steps[i].title,
          content: steps[i].content,
          target: document.querySelector(steps[i].target),
          placement: steps[i].placement
        });
      }

      // Rev it up!
      if (link == false && takeover_cookie == null) {
        hopscotch.startTour(Drupal.settings.tour);

        // Set cookie so takeover doesn't takeover no more.
        $.cookie('takeover', true, {
          expires: 60
        });
      }
    }
  };
}(jQuery));

// Function to start tour.
function startTour() {
  hopscotch.startTour(Drupal.settings.tour);
}
