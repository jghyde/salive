<?php

/**
 * @file
 * Views Sexy Throbber Update file 7200.
 */

// Include the views sexy throbber variables.
include drupal_get_path('module', 'views_sexy_throbber') . '/variables.inc';

// Copy the default thobber images to the user directory.
foreach ($throbber_images_default as $throbber_image) {

  $throbber_copy_source = $throbber_image->uri;
  $throbber_copy_target = $user_directory . '/' . $throbber_image->filename;
  file_unmanaged_copy($throbber_copy_source, $throbber_copy_target, FILE_EXISTS_REPLACE);

}

// Create the user css file if not exists.
if (!file_exists($user_css_uri)) {

  // Create the user css file by cloning the original.
  file_unmanaged_copy($default_css_uri, $user_css_uri, FILE_EXISTS_REPLACE);

}

// Make the user css file writable.
drupal_chmod($user_css_uri, $mode = 664);

// Set the old css file to be removed.
$remove_css_file = $module_directory . '/css/views_sexy_throbber.css';

// Check if file exists and delete it.
if (file_exists($remove_css_file)) {

  file_unmanaged_delete($remove_css_file);

}

// Read the old thobber image setting from DataBase.
$old_throbber_image_setting = variable_get('views_sexy_throbber_image');

// Clean up the image variable so it can work with the new directory.
$new_throbber_image_setting = str_replace($module_directory . '/images/', "", $old_throbber_image_setting);

// Save the new setting to the DataBase.
variable_set('views_sexy_throbber_image', $new_throbber_image_setting);
