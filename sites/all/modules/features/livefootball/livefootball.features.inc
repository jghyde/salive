<?php
/**
 * @file
 * livefootball.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function livefootball_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function livefootball_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function livefootball_node_info() {
  $items = array(
    'game' => array(
      'name' => t('Game'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'team' => array(
      'name' => t('Team'),
      'base' => 'node_content',
      'description' => t('A team for the football scores.'),
      'has_title' => '1',
      'title_label' => t('School Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
