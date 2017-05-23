<?php
/**
 * @file
 * compro_tour.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function compro_tour_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['compro_tour-add_tour'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'add_tour',
    'module' => 'compro_tour',
    'node_types' => array(),
    'pages' => 'admin/content/tours',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'compro_adminimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'compro_adminimal',
        'weight' => -43,
      ),
      'compro_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'compro_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['compro_tour-compro_tour'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'compro_tour',
    'module' => 'compro_tour',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'compro_adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'compro_adminimal',
        'weight' => 0,
      ),
      'compro_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'compro_theme',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
