<?php
/**
 * @file
 * liveprofile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function liveprofile_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'administration_profiles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Administration Profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'About Blurb';
  $handler->display->display_options['header']['area']['content'] = 'San Angelo LIVE! is an award-winning local Internet online news service for the San Angelo, Tx region. We are independently owned and operated by San Angelo\'s digital experts at <a href="http://hydeinteractive.com/" target="_blank">Hyde Interactive</a>. 
<h3>Address</h3>
<p>36 W. Beauregard Ave. Ste 603<br />
San Angelo, Tx 76903<br />
</p>
<h3>News:</h3>
<p>(325) 340-1239</p>
<h3>Sales:</h3>
<p>(325) 340-1233</p>
<h3>Fax:</h3>
<p>(325) 340-1235</p>
<h3>Web Support:</h3>
<p>(325) 340-1236</p>';
  $handler->display->display_options['header']['area']['format'] = 'master';
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Field: Profile: Profile Picture */
  $handler->display->display_options['fields']['field_profile_picture']['id'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['table'] = 'field_data_field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['field'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_profile_picture']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_picture']['settings'] = array(
    'image_style' => 'staff_profile',
    'image_link' => '',
  );
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_first_name']['element_default_classes'] = FALSE;
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_last_name']['element_default_classes'] = FALSE;
  /* Field: Profile: Short Bio */
  $handler->display->display_options['fields']['field_short_bio']['id'] = 'field_short_bio';
  $handler->display->display_options['fields']['field_short_bio']['table'] = 'field_data_field_short_bio';
  $handler->display->display_options['fields']['field_short_bio']['field'] = 'field_short_bio';
  $handler->display->display_options['fields']['field_short_bio']['label'] = '';
  $handler->display->display_options['fields']['field_short_bio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_short_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_bio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_short_bio']['element_default_classes'] = FALSE;
  /* Field: Profile: Facebook URL */
  $handler->display->display_options['fields']['field_facebook_url']['id'] = 'field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['table'] = 'field_data_field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['field'] = 'field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['label'] = '';
  $handler->display->display_options['fields']['field_facebook_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_facebook_url']['alter']['text'] = '<a href="[field_facebook_url-value]" class="social facebook">Facebook</a>';
  $handler->display->display_options['fields']['field_facebook_url']['alter']['path'] = '[field_facebook_url]';
  $handler->display->display_options['fields']['field_facebook_url']['alter']['link_class'] = 'social facebook';
  $handler->display->display_options['fields']['field_facebook_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_facebook_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_facebook_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_facebook_url']['settings'] = array(
    'trim_length' => '1',
    'nofollow' => 0,
  );
  /* Field: Profile: Twitter URL */
  $handler->display->display_options['fields']['field_twitter_url']['id'] = 'field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['table'] = 'field_data_field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['field'] = 'field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['label'] = '';
  $handler->display->display_options['fields']['field_twitter_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_twitter_url']['alter']['text'] = '<a href="[field_twitter_url-value]" class="social twitter">Twitter</a>';
  $handler->display->display_options['fields']['field_twitter_url']['alter']['path'] = '[field_twitter_url]';
  $handler->display->display_options['fields']['field_twitter_url']['alter']['link_class'] = 'social twitter';
  $handler->display->display_options['fields']['field_twitter_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_twitter_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_twitter_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_twitter_url']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Profile: LinkedIn URL */
  $handler->display->display_options['fields']['field_linkedin_url']['id'] = 'field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['table'] = 'field_data_field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['field'] = 'field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_url']['alter']['text'] = '<a href="[field_linkedin_url-value]" class="social linked_in">LinkedIn</a>';
  $handler->display->display_options['fields']['field_linkedin_url']['alter']['path'] = '[field_linkedin_url-value]';
  $handler->display->display_options['fields']['field_linkedin_url']['alter']['link_class'] = 'social linked_in';
  $handler->display->display_options['fields']['field_linkedin_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_linkedin_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_linkedin_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_url']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Profile: Google Plus URL */
  $handler->display->display_options['fields']['field_google_plus_url']['id'] = 'field_google_plus_url';
  $handler->display->display_options['fields']['field_google_plus_url']['table'] = 'field_data_field_google_plus_url';
  $handler->display->display_options['fields']['field_google_plus_url']['field'] = 'field_google_plus_url';
  $handler->display->display_options['fields']['field_google_plus_url']['label'] = '';
  $handler->display->display_options['fields']['field_google_plus_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_google_plus_url']['alter']['text'] = '<a href="[field_google_plus_url-value]" class="social google_plus">LinkedIn</a>';
  $handler->display->display_options['fields']['field_google_plus_url']['alter']['path'] = '[field_google_plus_url-value]';
  $handler->display->display_options['fields']['field_google_plus_url']['alter']['link_class'] = 'social google_plus';
  $handler->display->display_options['fields']['field_google_plus_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_google_plus_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_google_plus_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_google_plus_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_google_plus_url']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Sort criterion: User: Uid */
  $handler->display->display_options['sorts']['uid']['id'] = 'uid';
  $handler->display->display_options['sorts']['uid']['table'] = 'users';
  $handler->display->display_options['sorts']['uid']['field'] = 'uid';
  $handler->display->display_options['sorts']['uid']['relationship'] = 'user';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main' => 'main',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Profile: Admin (field_admin) */
  $handler->display->display_options['filters']['field_admin_value']['id'] = 'field_admin_value';
  $handler->display->display_options['filters']['field_admin_value']['table'] = 'field_data_field_admin';
  $handler->display->display_options['filters']['field_admin_value']['field'] = 'field_admin_value';
  $handler->display->display_options['filters']['field_admin_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'user';
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
  );

  /* Display: About Us */
  $handler = $view->new_display('block', 'About Us', 'block');
  $handler->display->display_options['display_description'] = 'Abous Us Block';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Profile Picture */
  $handler->display->display_options['fields']['field_profile_picture']['id'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['table'] = 'field_data_field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['field'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_profile_picture']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_picture']['settings'] = array(
    'image_style' => 'staff_profile',
    'image_link' => '',
  );
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_first_name']['element_default_classes'] = FALSE;
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_last_name']['element_default_classes'] = FALSE;
  /* Field: Profile: Short Bio */
  $handler->display->display_options['fields']['field_short_bio']['id'] = 'field_short_bio';
  $handler->display->display_options['fields']['field_short_bio']['table'] = 'field_data_field_short_bio';
  $handler->display->display_options['fields']['field_short_bio']['field'] = 'field_short_bio';
  $handler->display->display_options['fields']['field_short_bio']['label'] = '';
  $handler->display->display_options['fields']['field_short_bio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_short_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_bio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_short_bio']['element_default_classes'] = FALSE;
  /* Field: Profile: Facebook URL */
  $handler->display->display_options['fields']['field_facebook_url']['id'] = 'field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['table'] = 'field_data_field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['field'] = 'field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['label'] = '';
  $handler->display->display_options['fields']['field_facebook_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_facebook_url']['alter']['text'] = '<a href="[field_facebook_url-value]" class="social facebook">Facebook</a>';
  $handler->display->display_options['fields']['field_facebook_url']['alter']['path'] = '[field_facebook_url]';
  $handler->display->display_options['fields']['field_facebook_url']['alter']['link_class'] = 'social facebook';
  $handler->display->display_options['fields']['field_facebook_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_facebook_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_facebook_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_facebook_url']['settings'] = array(
    'trim_length' => '1',
    'nofollow' => 0,
  );
  /* Field: Profile: Twitter URL */
  $handler->display->display_options['fields']['field_twitter_url']['id'] = 'field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['table'] = 'field_data_field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['field'] = 'field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['label'] = '';
  $handler->display->display_options['fields']['field_twitter_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_twitter_url']['alter']['text'] = '<a href="[field_twitter_url-value]" class="social twitter">Twitter</a>';
  $handler->display->display_options['fields']['field_twitter_url']['alter']['path'] = '[field_twitter_url]';
  $handler->display->display_options['fields']['field_twitter_url']['alter']['link_class'] = 'social twitter';
  $handler->display->display_options['fields']['field_twitter_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_twitter_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_twitter_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_twitter_url']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Profile: LinkedIn URL */
  $handler->display->display_options['fields']['field_linkedin_url']['id'] = 'field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['table'] = 'field_data_field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['field'] = 'field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_url']['alter']['text'] = '<a href="[field_linkedin_url-value]" class="social linked_in">LinkedIn</a>';
  $handler->display->display_options['fields']['field_linkedin_url']['alter']['path'] = '[field_linkedin_url-value]';
  $handler->display->display_options['fields']['field_linkedin_url']['alter']['link_class'] = 'social linked_in';
  $handler->display->display_options['fields']['field_linkedin_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_linkedin_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_linkedin_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_url']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Profile: Google Plus URL */
  $handler->display->display_options['fields']['field_google_plus_url']['id'] = 'field_google_plus_url';
  $handler->display->display_options['fields']['field_google_plus_url']['table'] = 'field_data_field_google_plus_url';
  $handler->display->display_options['fields']['field_google_plus_url']['field'] = 'field_google_plus_url';
  $handler->display->display_options['fields']['field_google_plus_url']['label'] = '';
  $handler->display->display_options['fields']['field_google_plus_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_google_plus_url']['alter']['text'] = '<a href="[field_google_plus_url-value]" class="social google_plus">LinkedIn</a>';
  $handler->display->display_options['fields']['field_google_plus_url']['alter']['path'] = '[field_google_plus_url-value]';
  $handler->display->display_options['fields']['field_google_plus_url']['alter']['link_class'] = 'social google_plus';
  $handler->display->display_options['fields']['field_google_plus_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_google_plus_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_google_plus_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_google_plus_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_google_plus_url']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main' => 'main',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'user';
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
    4 => '4',
  );
  /* Filter criterion: Profile: Admin (field_admin) */
  $handler->display->display_options['filters']['field_admin_value']['id'] = 'field_admin_value';
  $handler->display->display_options['filters']['field_admin_value']['table'] = 'field_data_field_admin';
  $handler->display->display_options['filters']['field_admin_value']['field'] = 'field_admin_value';
  $handler->display->display_options['filters']['field_admin_value']['value'] = array(
    1 => '1',
  );
  $export['administration_profiles'] = $view;

  return $export;
}
