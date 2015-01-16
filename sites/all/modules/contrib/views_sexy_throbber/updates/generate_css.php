<?php

/**
 * @file
 * Views Sexy Throbber generate css file.
 */

// Include the views sexy throbber variables.
include drupal_get_path('module', 'views_sexy_throbber') . '/variables.inc';

// Get image info.
$image_info = image_get_info($user_directory . "/" . variable_get('views_sexy_throbber_image'));

// Shuld we add the "div.view" css prefix?
$css_views_prefix = (variable_get('views_sexy_throbber_use_in_other_modules') == TRUE ? '' : 'div.view ');

// Should we perpend !important?
$css_important = (variable_get('views_sexy_throbber_append_important') == TRUE ? ' !important' : NULL);

// Generate the CSS file.
$css = '' . $css_views_prefix . 'div.ajax-progress {
  background: rgba(' . variable_get('views_sexy_throbber_background') . ',' . variable_get('views_sexy_throbber_opacity') . ')' . $css_important . ';
  -pie-background: rgba(' . variable_get('views_sexy_throbber_background') . ',' . variable_get('views_sexy_throbber_opacity') . ')' . $css_important . ';
  height: 100%' . $css_important . ';
  left: 0' . $css_important . ';
  position: fixed' . $css_important . ';
  top: 0' . $css_important . ';
  width: 100%' . $css_important . ';
  z-index: 9998' . $css_important . ';
}

' . $css_views_prefix . 'div.throbber {
  background: url("' . variable_get('views_sexy_throbber_image') . '") no-repeat scroll 50% 50%' . $css_important . ';
  background-color: ' . (variable_get('views_sexy_throbber_image_background') ? 'rgb(' . variable_get('views_sexy_throbber_background') . ')' : 'transparent') . '' . $css_important . ';
  border-radius: ' . (variable_get('views_sexy_throbber_image_background_use_border_radius') ? variable_get('views_sexy_throbber_image_background_border_radius') : '0') . 'px' . $css_important . ';
  height: ' . $image_info['height'] . 'px' . $css_important . ';
  left: 50%' . $css_important . ';
  margin-left: -' . $image_info['width'] * 0.5 . 'px' . $css_important . ';
  margin-top: -' . $image_info['height'] * 0.5 . 'px' . $css_important . ';
  padding: 10px' . $css_important . ';
  position: fixed' . $css_important . ';
  top: 50%' . $css_important . ';
  width: ' . $image_info['width'] . 'px' . $css_important . ';
  z-index: 9999' . $css_important . ';
}
';

// Format the css code output and remove some unnecessary spaces.
$css = str_replace("  ", " ", $css);

// Write the final formated css file.
file_unmanaged_save_data($css, $user_css_uri, FILE_EXISTS_REPLACE);
