<?php
/**
 * @file
 * livevehicles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function livevehicles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function livevehicles_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function livevehicles_node_info() {
  $items = array(
    'vehicle' => array(
      'name' => t('vehicle'),
      'base' => 'node_content',
      'description' => t('A car, truck, or motorcycle for sale.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Post a car, truck or motorcycle for sale with this form.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
