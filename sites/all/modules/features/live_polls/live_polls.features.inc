<?php
/**
 * @file
 * live_polls.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function live_polls_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function live_polls_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function live_polls_node_info() {
  $items = array(
    'poll_item' => array(
      'name' => t('Poll Item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
