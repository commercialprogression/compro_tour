<?php
/**
 * @file
 * compro_tour.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function compro_tour_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'tour-step-field_step_body'.
  $field_instances['tour-step-field_step_body'] = array(
    'bundle' => 'step',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'small' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'tour',
    'fences_wrapper' => 'div',
    'field_name' => 'field_step_body',
    'label' => 'Body',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'tour-step-field_step_css_selector'.
  $field_instances['tour-step-field_step_css_selector'] = array(
    'bundle' => 'step',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Example: #header or .this-unique-class',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'small' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'tour',
    'fences_wrapper' => 'div',
    'field_name' => 'field_step_css_selector',
    'label' => 'CSS Selector',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'tour-step-field_step_placement'.
  $field_instances['tour-step-field_step_placement'] = array(
    'bundle' => 'step',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Specifies where the bubble should appear in relation to the target.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'small' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'tour',
    'fences_wrapper' => 'div',
    'field_name' => 'field_step_placement',
    'label' => 'Placement',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'tour-tour-field_tour_link'.
  $field_instances['tour-tour-field_tour_link'] = array(
    'bundle' => 'tour',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If you would like the tour to only start after clicking a link, provide the link text here. Otherwise, the tour will start when the block is loaded, and will set a cookie to stop appearing after first view.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'small' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'tour',
    'fences_wrapper' => 'div',
    'field_name' => 'field_tour_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'tour-tour-field_tour_page'.
  $field_instances['tour-tour-field_tour_page'] = array(
    'bundle' => 'tour',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Page(s) on which this tour will show. Can either output the node ID path (i.e. node/6) or the human readable path (admin/content/tours).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'small' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'tour',
    'field_name' => 'field_tour_page',
    'label' => 'Page',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'tour-tour-field_tour_steps'.
  $field_instances['tour-tour-field_tour_steps'] = array(
    'bundle' => 'tour',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => TRUE,
          'use_content_language' => TRUE,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 1,
      ),
      'small' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'tour',
    'fences_wrapper' => 'div',
    'field_name' => 'field_tour_steps',
    'label' => 'Steps',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 1,
          'allow_new' => 1,
          'delete_references' => 0,
          'label_plural' => 'Steps',
          'label_singular' => 'Step',
          'match_operator' => 'CONTAINS',
          'override_labels' => 1,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('CSS Selector');
  t('Example: #header or .this-unique-class');
  t('If you would like the tour to only start after clicking a link, provide the link text here. Otherwise, the tour will start when the block is loaded, and will set a cookie to stop appearing after first view.');
  t('Link');
  t('Page');
  t('Page(s) on which this tour will show. Can either output the node ID path (i.e. node/6) or the human readable path (admin/content/tours).');
  t('Placement');
  t('Specifies where the bubble should appear in relation to the target.');
  t('Steps');

  return $field_instances;
}
