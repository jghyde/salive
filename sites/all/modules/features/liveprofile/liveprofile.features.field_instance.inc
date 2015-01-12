<?php
/**
 * @file
 * liveprofile.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function liveprofile_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'profile2-main-field_facebook_url'
  $field_instances['profile2-main-field_facebook_url'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'account' => array(
        'label' => 'inline',
        'module' => 'url',
        'settings' => array(
          'nofollow' => FALSE,
          'trim_length' => 80,
        ),
        'type' => 'url_default',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'url',
        'settings' => array(
          'nofollow' => FALSE,
          'trim_length' => 80,
        ),
        'type' => 'url_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_facebook_url',
    'label' => 'Facebook URL',
    'required' => 0,
    'settings' => array(
      'title_fetch' => 1,
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'url',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'url_external',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'profile2-main-field_first_name'
  $field_instances['profile2-main-field_first_name'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'account' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_first_name',
    'label' => 'First Name',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'profile2-main-field_google_plus_url'
  $field_instances['profile2-main-field_google_plus_url'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'account' => array(
        'label' => 'inline',
        'module' => 'url',
        'settings' => array(
          'nofollow' => FALSE,
          'trim_length' => 80,
        ),
        'type' => 'url_default',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'url',
        'settings' => array(
          'nofollow' => FALSE,
          'trim_length' => 80,
        ),
        'type' => 'url_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_google_plus_url',
    'label' => 'Google Plus URL',
    'required' => 0,
    'settings' => array(
      'title_fetch' => 1,
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'url',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'url_external',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'profile2-main-field_last_name'
  $field_instances['profile2-main-field_last_name'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'account' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_last_name',
    'label' => 'Last Name',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'profile2-main-field_linkedin_url'
  $field_instances['profile2-main-field_linkedin_url'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Your LinkedIn Profile URL, eg http://www.linkedin.com/in/yourname',
    'display' => array(
      'account' => array(
        'label' => 'inline',
        'module' => 'url',
        'settings' => array(
          'nofollow' => FALSE,
          'trim_length' => 80,
        ),
        'type' => 'url_default',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'url',
        'settings' => array(
          'nofollow' => FALSE,
          'trim_length' => 80,
        ),
        'type' => 'url_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_linkedin_url',
    'label' => 'LinkedIn URL',
    'required' => 0,
    'settings' => array(
      'title_fetch' => 1,
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'url',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'url_external',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'profile2-main-field_profile_picture'
  $field_instances['profile2-main-field_profile_picture'] = array(
    'bundle' => 'main',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'account' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'staff_profile',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'media_thumbnail',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_picture',
    'label' => 'Profile Picture',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'profiles',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 'media_internet',
          'upload' => 'upload',
          'youtube' => 0,
        ),
        'caption_from_title' => 1,
        'insert' => 0,
        'insert_absolute' => FALSE,
        'insert_class' => '',
        'insert_default' => array(
          0 => 'auto',
        ),
        'insert_styles' => array(
          0 => 'auto',
        ),
        'insert_width' => '',
        'manualcrop_crop_info' => TRUE,
        'manualcrop_default_crop_area' => TRUE,
        'manualcrop_enable' => FALSE,
        'manualcrop_filter_insert' => TRUE,
        'manualcrop_inline_crop' => FALSE,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => TRUE,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'exclude',
        'manualcrop_thumblist' => FALSE,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'profile2-main-field_short_bio'
  $field_instances['profile2-main-field_short_bio'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'account' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_short_bio',
    'label' => 'Short Bio',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 1,
        'insert_plugin' => 'html_link',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'profile2-main-field_twitter_url'
  $field_instances['profile2-main-field_twitter_url'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'e.g. http://twitter.com/your-twitter-handle',
    'display' => array(
      'account' => array(
        'label' => 'inline',
        'module' => 'url',
        'settings' => array(
          'nofollow' => FALSE,
          'trim_length' => 80,
        ),
        'type' => 'url_default',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'url',
        'settings' => array(
          'nofollow' => FALSE,
          'trim_length' => 80,
        ),
        'type' => 'url_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_twitter_url',
    'label' => 'Twitter URL',
    'required' => 0,
    'settings' => array(
      'title_fetch' => 1,
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'url',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'url_external',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Facebook URL');
  t('First Name');
  t('Google Plus URL');
  t('Last Name');
  t('LinkedIn URL');
  t('Profile Picture');
  t('Short Bio');
  t('Twitter URL');
  t('Your LinkedIn Profile URL, eg http://www.linkedin.com/in/yourname');
  t('e.g. http://twitter.com/your-twitter-handle');

  return $field_instances;
}
