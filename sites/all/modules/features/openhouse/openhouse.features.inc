<?php
/**
 * @file
 * openhouse.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openhouse_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function openhouse_image_default_styles() {
  $styles = array();

  // Exported image style: nodewide.
  $styles['nodewide'] = array(
    'label' => 'nodeWide',
    'effects' => array(
      136 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 970,
          'height' => 728,
          'retinafy' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: openhouse.
  $styles['openhouse'] = array(
    'label' => 'openhouse',
    'effects' => array(
      134 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 750,
          'height' => 563,
          'retinafy' => 0,
        ),
        'weight' => 1,
      ),
      135 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'top',
          'alpha' => 80,
          'path' => 'public://salive-openhouse-overlay.png',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function openhouse_node_info() {
  $items = array(
    'openhouse' => array(
      'name' => t('Open House'),
      'base' => 'node_content',
      'description' => t('An open house event.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
