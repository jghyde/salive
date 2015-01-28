<?php
/**
 * @file
 * classified_advertising_ad.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function classified_advertising_ad_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function classified_advertising_ad_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function classified_advertising_ad_flag_default_flags() {
  $flags = array();
  // Exported flag: "Node Favorite".
  $flags['node_favorite'] = array(
    'entity_type' => 'node',
    'title' => 'Node Favorite',
    'global' => 0,
    'types' => array(
      0 => 'classified',
    ),
    'flag_short' => 'Mark as Favorite',
    'flag_long' => 'Mark as Favorite',
    'flag_message' => '',
    'unflag_short' => 'Remove from favorites',
    'unflag_long' => 'Remove from favorites',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'classified_advertising_ad',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function classified_advertising_ad_node_info() {
  $items = array(
    'classified' => array(
      'name' => t('Classified'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Ad Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
