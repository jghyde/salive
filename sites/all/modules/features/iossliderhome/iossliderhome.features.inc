<?php
/**
 * @file
 * iossliderhome.features.inc
 */

/**
 * Implements hook_views_api().
 */
function iossliderhome_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function iossliderhome_image_default_styles() {
  $styles = array();

  // Exported image style: iosslider_home.
  $styles['iosslider_home'] = array(
    'name' => 'iosslider_home',
    'label' => 'iosSlider_home',
    'effects' => array(
      13 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1170,
          'height' => 380,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
