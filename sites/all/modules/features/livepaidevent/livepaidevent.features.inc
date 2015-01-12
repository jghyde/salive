<?php
/**
 * @file
 * livepaidevent.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function livepaidevent_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function livepaidevent_node_info() {
  $items = array(
    'paid_event' => array(
      'name' => t('Paid Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title of Event'),
      'help' => '',
    ),
  );
  return $items;
}
