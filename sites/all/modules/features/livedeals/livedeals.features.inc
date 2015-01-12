<?php
/**
 * @file
 * livedeals.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function livedeals_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function livedeals_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function livedeals_node_info() {
  $items = array(
    'deal' => array(
      'name' => t('Deal'),
      'base' => 'node_content',
      'description' => t('A daily deal, assigned to a company.'),
      'has_title' => '1',
      'title_label' => t('Title of the Deal'),
      'help' => '',
    ),
    'venue' => array(
      'name' => t('Venue'),
      'base' => 'node_content',
      'description' => t('A place where events are held.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
