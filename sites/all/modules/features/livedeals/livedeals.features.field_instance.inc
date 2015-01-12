<?php
/**
 * @file
 * livedeals.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function livedeals_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-deal-body'
  $field_instances['node-deal-body'] = array(
    'bundle' => 'deal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-deal-field_deal_end_date'
  $field_instances['node-deal-field_deal_end_date'] = array(
    'bundle' => 'deal',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'small_date_time',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_deal_end_date',
    'label' => 'Coupon Expires',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-deal-field_deal_start_date'
  $field_instances['node-deal-field_deal_start_date'] = array(
    'bundle' => 'deal',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_deal_start_date',
    'label' => 'Deal Start Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-deal-field_image'
  $field_instances['node-deal-field_image'] = array(
    'bundle' => 'deal',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'dailydeal',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'deals',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'caption_from_title' => 1,
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'icon_link' => 0,
          'image' => 0,
          'image_cinema_thumb' => 0,
          'image_large' => 0,
          'image_linkit_thumb' => 0,
          'image_media_thumbnail' => 0,
          'image_medium' => 0,
          'image_panopoly_image_featured' => 0,
          'image_panopoly_image_full' => 0,
          'image_panopoly_image_half' => 0,
          'image_panopoly_image_quarter' => 0,
          'image_panopoly_image_spotlight' => 0,
          'image_panopoly_image_square' => 0,
          'image_panopoly_image_thumbnail' => 0,
          'image_panopoly_image_video' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
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

  // Exported field_instance: 'node-deal-field_number_of_coupons_left'
  $field_instances['node-deal-field_number_of_coupons_left'] = array(
    'bundle' => 'deal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_number_of_coupons_left',
    'label' => 'Number of Coupons Left',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'numberfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-deal-field_subtitle'
  $field_instances['node-deal-field_subtitle'] = array(
    'bundle' => 'deal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_subtitle',
    'label' => 'Subtitle',
    'required' => 0,
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-deal-field_terms_and_conditions'
  $field_instances['node-deal-field_terms_and_conditions'] = array(
    'bundle' => 'deal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_terms_and_conditions',
    'label' => 'Terms and Conditions',
    'required' => 0,
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-deal-field_user_that_redeemed'
  $field_instances['node-deal-field_user_that_redeemed'] = array(
    'bundle' => 'deal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_user_that_redeemed',
    'label' => 'User that Redeemed',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'test_instance_behavior' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-deal-field_venue'
  $field_instances['node-deal-field_venue'] = array(
    'bundle' => 'deal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_venue',
    'label' => 'Redeem this Coupon at',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'test_instance_behavior' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-venue-body'
  $field_instances['node-venue-body'] = array(
    'bundle' => 'venue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-venue-field_address'
  $field_instances['node-venue-field_address'] = array(
    'bundle' => 'venue',
    'default_value' => array(
      0 => array(
        'element_key' => 'node|venue|field_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'locality' => '',
        'administrative_area' => 'TX',
        'postal_code' => '',
        'country' => 'US',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            'address' => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            'address' => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 2,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            'address' => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 1,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            'address' => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            'address' => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'US' => 'US',
        ),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-venue-field_business_phone'
  $field_instances['node-venue-field_business_phone'] = array(
    'bundle' => 'venue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_business_phone',
    'label' => 'Business Phone',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'telwidget',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-venue-field_hours_of_operation_'
  $field_instances['node-venue-field_hours_of_operation_'] = array(
    'bundle' => 'venue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hours_of_operation_',
    'label' => 'Hours of Operation ',
    'required' => 0,
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-venue-field_image'
  $field_instances['node-venue-field_image'] = array(
    'bundle' => 'venue',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'profile',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'artist_venue_image',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'panopoly_image_spotlight',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'funeralhome',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'panopoly_image_spotlight',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'panopoly_image_spotlight',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'images/venues',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 0,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'caption_from_title' => 1,
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'image_panopoly_image_spotlight',
        'insert_styles' => array(
          'auto' => 0,
          'colorbox__artist_venue_image' => 0,
          'colorbox__cinema_thumb' => 0,
          'colorbox__comment_thumb' => 0,
          'colorbox__dailydeal' => 0,
          'colorbox__dailydeal_pic' => 0,
          'colorbox__event_feed_image' => 0,
          'colorbox__funeralhome' => 0,
          'colorbox__iosslider_home' => 0,
          'colorbox__iosslider_node' => 0,
          'colorbox__large' => 0,
          'colorbox__linkit_thumb' => 0,
          'colorbox__media_thumb_video' => 0,
          'colorbox__media_thumbnail' => 0,
          'colorbox__medium' => 0,
          'colorbox__news_thumbs__144x108_' => 0,
          'colorbox__open_graph' => 0,
          'colorbox__panopoly_image_featured' => 0,
          'colorbox__panopoly_image_full' => 0,
          'colorbox__panopoly_image_half' => 0,
          'colorbox__panopoly_image_original' => 0,
          'colorbox__panopoly_image_quarter' => 0,
          'colorbox__panopoly_image_spotlight' => 0,
          'colorbox__panopoly_image_square' => 0,
          'colorbox__panopoly_image_thumbnail' => 0,
          'colorbox__panopoly_image_video' => 0,
          'colorbox__profile' => 0,
          'colorbox__staff_profile' => 0,
          'colorbox__thumbnail' => 0,
          'colorbox__top_stories' => 0,
          'colorbox__venue_thumb' => 0,
          'colorbox__video_email' => 0,
          'colorbox__video_newsthumb' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_artist_venue_image' => 0,
          'image_cinema_thumb' => 'image_cinema_thumb',
          'image_comment_thumb' => 0,
          'image_dailydeal' => 0,
          'image_dailydeal_pic' => 0,
          'image_event_feed_image' => 0,
          'image_funeralhome' => 0,
          'image_iosslider_home' => 0,
          'image_iosslider_node' => 0,
          'image_large' => 0,
          'image_linkit_thumb' => 0,
          'image_media_thumb_video' => 0,
          'image_media_thumbnail' => 0,
          'image_medium' => 0,
          'image_news_thumbs__144x108_' => 0,
          'image_open_graph' => 0,
          'image_panopoly_image_featured' => 0,
          'image_panopoly_image_full' => 'image_panopoly_image_full',
          'image_panopoly_image_half' => 'image_panopoly_image_half',
          'image_panopoly_image_original' => 0,
          'image_panopoly_image_quarter' => 'image_panopoly_image_quarter',
          'image_panopoly_image_spotlight' => 'image_panopoly_image_spotlight',
          'image_panopoly_image_square' => 0,
          'image_panopoly_image_thumbnail' => 0,
          'image_panopoly_image_video' => 0,
          'image_profile' => 0,
          'image_staff_profile' => 0,
          'image_thumbnail' => 0,
          'image_top_stories' => 0,
          'image_venue_thumb' => 0,
          'image_video_email' => 0,
          'image_video_newsthumb' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 0,
        'manualcrop_filter_insert' => 0,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_require_cropping' => array(
          'panopoly_image_featured' => 0,
          'panopoly_image_square' => 0,
          'panopoly_image_thumbnail' => 0,
        ),
        'manualcrop_styles_list' => array(
          'panopoly_image_featured' => 0,
          'panopoly_image_square' => 0,
          'panopoly_image_thumbnail' => 0,
        ),
        'manualcrop_styles_mode' => 'exclude',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-venue-field_map'
  $field_instances['node-venue-field_map'] = array(
    'bundle' => 'venue',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'geofield_map',
        'settings' => array(
          'geofield_map_baselayers_hybrid' => 1,
          'geofield_map_baselayers_map' => 1,
          'geofield_map_baselayers_physical' => 0,
          'geofield_map_baselayers_satellite' => 1,
          'geofield_map_controltype' => 'default',
          'geofield_map_draggable' => 0,
          'geofield_map_height' => '300px',
          'geofield_map_maptype' => 'map',
          'geofield_map_mtc' => 'standard',
          'geofield_map_overview' => 0,
          'geofield_map_overview_opened' => 0,
          'geofield_map_pancontrol' => 1,
          'geofield_map_scale' => 0,
          'geofield_map_scrollwheel' => 0,
          'geofield_map_streetview_show' => 0,
          'geofield_map_width' => '100%',
          'geofield_map_zoom' => 15,
        ),
        'type' => 'geofield_map_map',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'geofield_map',
        'settings' => array(
          'geofield_map_baselayers_hybrid' => 1,
          'geofield_map_baselayers_map' => 1,
          'geofield_map_baselayers_physical' => 0,
          'geofield_map_baselayers_satellite' => 1,
          'geofield_map_controltype' => 'default',
          'geofield_map_draggable' => 0,
          'geofield_map_height' => '300px',
          'geofield_map_maptype' => 'map',
          'geofield_map_mtc' => 'standard',
          'geofield_map_overview' => 0,
          'geofield_map_overview_opened' => 0,
          'geofield_map_pancontrol' => 1,
          'geofield_map_scale' => 0,
          'geofield_map_scrollwheel' => 0,
          'geofield_map_streetview_show' => 0,
          'geofield_map_width' => '100%',
          'geofield_map_zoom' => 15,
        ),
        'type' => 'geofield_map_map',
        'weight' => 6,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'geofield_map',
        'settings' => array(
          'geofield_map_baselayers_hybrid' => 1,
          'geofield_map_baselayers_map' => 1,
          'geofield_map_baselayers_physical' => 0,
          'geofield_map_baselayers_satellite' => 1,
          'geofield_map_controltype' => 'default',
          'geofield_map_draggable' => 0,
          'geofield_map_height' => '300px',
          'geofield_map_maptype' => 'map',
          'geofield_map_mtc' => 'standard',
          'geofield_map_overview' => 0,
          'geofield_map_overview_opened' => 0,
          'geofield_map_pancontrol' => 1,
          'geofield_map_scale' => 0,
          'geofield_map_scrollwheel' => 0,
          'geofield_map_streetview_show' => 0,
          'geofield_map_width' => '100%',
          'geofield_map_zoom' => 8,
        ),
        'type' => 'geofield_map_map',
        'weight' => 2,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'geofield_map',
        'settings' => array(
          'geofield_map_baselayers_hybrid' => 1,
          'geofield_map_baselayers_map' => 1,
          'geofield_map_baselayers_physical' => 0,
          'geofield_map_baselayers_satellite' => 1,
          'geofield_map_controltype' => 'default',
          'geofield_map_draggable' => 0,
          'geofield_map_height' => '300px',
          'geofield_map_maptype' => 'map',
          'geofield_map_mtc' => 'standard',
          'geofield_map_overview' => 0,
          'geofield_map_overview_opened' => 0,
          'geofield_map_pancontrol' => 1,
          'geofield_map_scale' => 0,
          'geofield_map_scrollwheel' => 0,
          'geofield_map_streetview_show' => 0,
          'geofield_map_width' => '100%',
          'geofield_map_zoom' => 8,
        ),
        'type' => 'geofield_map_map',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'geofield_map',
        'settings' => array(
          'geofield_map_baselayers_hybrid' => 1,
          'geofield_map_baselayers_map' => 1,
          'geofield_map_baselayers_physical' => 0,
          'geofield_map_baselayers_satellite' => 1,
          'geofield_map_controltype' => 'default',
          'geofield_map_draggable' => 0,
          'geofield_map_height' => '300px',
          'geofield_map_maptype' => 'map',
          'geofield_map_mtc' => 'standard',
          'geofield_map_overview' => 0,
          'geofield_map_overview_opened' => 0,
          'geofield_map_pancontrol' => 1,
          'geofield_map_scale' => 0,
          'geofield_map_scrollwheel' => 0,
          'geofield_map_streetview_show' => 0,
          'geofield_map_width' => '100%',
          'geofield_map_zoom' => 15,
        ),
        'type' => 'geofield_map_map',
        'weight' => 4,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'geofield_map',
        'settings' => array(
          'geofield_map_baselayers_hybrid' => 1,
          'geofield_map_baselayers_map' => 1,
          'geofield_map_baselayers_physical' => 0,
          'geofield_map_baselayers_satellite' => 1,
          'geofield_map_controltype' => 'default',
          'geofield_map_draggable' => 0,
          'geofield_map_height' => '300px',
          'geofield_map_maptype' => 'map',
          'geofield_map_mtc' => 'standard',
          'geofield_map_overview' => 0,
          'geofield_map_overview_opened' => 0,
          'geofield_map_pancontrol' => 1,
          'geofield_map_scale' => 0,
          'geofield_map_scrollwheel' => 0,
          'geofield_map_streetview_show' => 0,
          'geofield_map_width' => '100%',
          'geofield_map_zoom' => 8,
        ),
        'type' => 'geofield_map_map',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_map',
    'label' => 'Map',
    'required' => 0,
    'settings' => array(
      'local_solr' => array(
        'enabled' => FALSE,
        'lat_field' => 'lat',
        'lng_field' => 'lng',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geocoder',
      'settings' => array(
        'delta_handling' => 'default',
        'geocoder_field' => 'field_address',
        'geocoder_handler' => 'google',
        'handler_settings' => array(
          'google' => array(
            'all_results' => 0,
            'geometry_type' => 'point',
            'reject_results' => array(
              'APPROXIMATE' => 0,
              'GEOMETRIC_CENTER' => 0,
              'RANGE_INTERPOLATED' => 0,
              'ROOFTOP' => 0,
            ),
          ),
        ),
      ),
      'type' => 'geocoder',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-venue-field_venue_website'
  $field_instances['node-venue-field_venue_website'] = array(
    'bundle' => 'venue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'url',
        'settings' => array(
          'nofollow' => FALSE,
          'trim_length' => 80,
        ),
        'type' => 'url_default',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'url',
        'settings' => array(
          'nofollow' => FALSE,
          'trim_length' => 80,
        ),
        'type' => 'url_default',
        'weight' => 4,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'url',
        'settings' => array(
          'nofollow' => 0,
          'trim_length' => 80,
        ),
        'type' => 'url_default',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'url',
        'settings' => array(
          'nofollow' => FALSE,
          'trim_length' => 80,
        ),
        'type' => 'url_default',
        'weight' => 2,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_venue_website',
    'label' => 'Venue Website',
    'required' => 0,
    'settings' => array(
      'title_fetch' => 0,
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
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Body');
  t('Business Phone');
  t('Coupon Expires');
  t('Deal Start Date');
  t('Hours of Operation ');
  t('Image');
  t('Map');
  t('Number of Coupons Left');
  t('Redeem this Coupon at');
  t('Subtitle');
  t('Terms and Conditions');
  t('User that Redeemed');
  t('Venue Website');

  return $field_instances;
}
