<?php
/**
 * @file
 * compro_tour.features.inc
 */

/**
 * Implements hook_views_api().
 */
function compro_tour_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function compro_tour_eck_bundle_info() {
  $items = array(
    'tour_step' => array(
      'machine_name' => 'tour_step',
      'entity_type' => 'tour',
      'name' => 'step',
      'label' => 'Step',
      'config' => array(),
    ),
    'tour_tour' => array(
      'machine_name' => 'tour_tour',
      'entity_type' => 'tour',
      'name' => 'tour',
      'label' => 'Tour',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function compro_tour_eck_entity_type_info() {
  $items = array(
    'tour' => array(
      'name' => 'tour',
      'label' => 'Tour',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
        'language' => array(
          'label' => 'Entity language',
          'type' => 'language',
          'behavior' => 'language',
        ),
      ),
    ),
  );
  return $items;
}
