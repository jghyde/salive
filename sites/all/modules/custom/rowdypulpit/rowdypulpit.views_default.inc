<?php
/**
 * @file
 * rowdypulpit.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rowdypulpit_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contrib';
  $view->description = 'RowdyPulpit Articles';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'rowdypulpit';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News from Around the Web';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_section',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Issue of Publication (field_issue_of_publication) */
  $handler->display->display_options['relationships']['field_issue_of_publication_tid']['id'] = 'field_issue_of_publication_tid';
  $handler->display->display_options['relationships']['field_issue_of_publication_tid']['table'] = 'field_data_field_issue_of_publication';
  $handler->display->display_options['relationships']['field_issue_of_publication_tid']['field'] = 'field_issue_of_publication_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Thumb Image */
  $handler->display->display_options['fields']['field_contrib_img']['id'] = 'field_contrib_img';
  $handler->display->display_options['fields']['field_contrib_img']['table'] = 'field_data_field_contrib_img';
  $handler->display->display_options['fields']['field_contrib_img']['field'] = 'field_contrib_img';
  $handler->display->display_options['fields']['field_contrib_img']['label'] = '';
  $handler->display->display_options['fields']['field_contrib_img']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contrib_img']['alter']['text'] = '[field_contrib_img-fid]';
  $handler->display->display_options['fields']['field_contrib_img']['element_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_img']['element_class'] = 'contrib-image';
  $handler->display->display_options['fields']['field_contrib_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_img']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_contrib_img']['settings'] = array(
    'image_style' => 'rowdywide',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_contrib_img']['group_column'] = 'fid';
  /* Field: Content: Share an Article */
  $handler->display->display_options['fields']['field_contrib_url']['id'] = 'field_contrib_url';
  $handler->display->display_options['fields']['field_contrib_url']['table'] = 'field_data_field_contrib_url';
  $handler->display->display_options['fields']['field_contrib_url']['field'] = 'field_contrib_url';
  $handler->display->display_options['fields']['field_contrib_url']['label'] = '';
  $handler->display->display_options['fields']['field_contrib_url']['alter']['text'] = '<a href="[field_contrib_url]" target="_blank">Read it here.</a>';
  $handler->display->display_options['fields']['field_contrib_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_url']['element_default_classes'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_contrib_teaser']['id'] = 'field_contrib_teaser';
  $handler->display->display_options['fields']['field_contrib_teaser']['table'] = 'field_data_field_contrib_teaser';
  $handler->display->display_options['fields']['field_contrib_teaser']['field'] = 'field_contrib_teaser';
  $handler->display->display_options['fields']['field_contrib_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_contrib_teaser']['element_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_teaser']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_teaser']['element_default_classes'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_section']['id'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['table'] = 'field_data_field_section';
  $handler->display->display_options['fields']['field_section']['field'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['label'] = '';
  $handler->display->display_options['fields']['field_section']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_section']['element_label_class'] = 'contrib-category';
  $handler->display->display_options['fields']['field_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_section']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'view-date-posted';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M j, Y';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more.';
  /* Field: Content: Issue of Publication */
  $handler->display->display_options['fields']['field_issue_of_publication']['id'] = 'field_issue_of_publication';
  $handler->display->display_options['fields']['field_issue_of_publication']['table'] = 'field_data_field_issue_of_publication';
  $handler->display->display_options['fields']['field_issue_of_publication']['field'] = 'field_issue_of_publication';
  $handler->display->display_options['fields']['field_issue_of_publication']['label'] = '';
  $handler->display->display_options['fields']['field_issue_of_publication']['element_type'] = '0';
  $handler->display->display_options['fields']['field_issue_of_publication']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue_of_publication']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_issue_of_publication']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_issue_of_publication']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Type of Posting */
  $handler->display->display_options['fields']['field_type_of_posting']['id'] = 'field_type_of_posting';
  $handler->display->display_options['fields']['field_type_of_posting']['table'] = 'field_data_field_type_of_posting';
  $handler->display->display_options['fields']['field_type_of_posting']['field'] = 'field_type_of_posting';
  $handler->display->display_options['fields']['field_type_of_posting']['label'] = '';
  $handler->display->display_options['fields']['field_type_of_posting']['element_type'] = '0';
  $handler->display->display_options['fields']['field_type_of_posting']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_posting']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_type_of_posting']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_posting']['type'] = 'list_key';
  /* Field: Content: Youtube */
  $handler->display->display_options['fields']['field_youtube']['id'] = 'field_youtube';
  $handler->display->display_options['fields']['field_youtube']['table'] = 'field_data_field_youtube';
  $handler->display->display_options['fields']['field_youtube']['field'] = 'field_youtube';
  $handler->display->display_options['fields']['field_youtube']['label'] = '';
  $handler->display->display_options['fields']['field_youtube']['element_type'] = '0';
  $handler->display->display_options['fields']['field_youtube']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_youtube']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_youtube']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_youtube']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_youtube']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_type'] = '0';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete';
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = 'Order';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  /* Field: Draggableviews: Parent */
  $handler->display->display_options['fields']['parent']['id'] = 'parent';
  $handler->display->display_options['fields']['parent']['table'] = 'draggableviews_structure';
  $handler->display->display_options['fields']['parent']['field'] = 'parent';
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'contrib:rowdysort_page';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'News: %1';
  $handler->display->display_options['arguments']['tid']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['breadcrumb'] = 'News: %1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['argument'] = 'all';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'issue' => 'issue',
  );
  $handler->display->display_options['arguments']['tid']['require_value'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contrib' => 'contrib',
  );

  /* Display: Rowdy Pulpit Page */
  $handler = $view->new_display('page', 'Rowdy Pulpit Page', 'page');
  $handler->display->display_options['display_description'] = 'Main page of Rowdy Pulpit articles feed';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Thumb Image */
  $handler->display->display_options['fields']['field_contrib_img']['id'] = 'field_contrib_img';
  $handler->display->display_options['fields']['field_contrib_img']['table'] = 'field_data_field_contrib_img';
  $handler->display->display_options['fields']['field_contrib_img']['field'] = 'field_contrib_img';
  $handler->display->display_options['fields']['field_contrib_img']['label'] = '';
  $handler->display->display_options['fields']['field_contrib_img']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contrib_img']['alter']['text'] = '[field_contrib_img-fid]';
  $handler->display->display_options['fields']['field_contrib_img']['element_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_img']['element_class'] = 'contrib-image';
  $handler->display->display_options['fields']['field_contrib_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_img']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_contrib_img']['settings'] = array(
    'image_style' => 'rowdywide',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_contrib_img']['group_column'] = 'fid';
  /* Field: Content: Share an Article */
  $handler->display->display_options['fields']['field_contrib_url']['id'] = 'field_contrib_url';
  $handler->display->display_options['fields']['field_contrib_url']['table'] = 'field_data_field_contrib_url';
  $handler->display->display_options['fields']['field_contrib_url']['field'] = 'field_contrib_url';
  $handler->display->display_options['fields']['field_contrib_url']['label'] = '';
  $handler->display->display_options['fields']['field_contrib_url']['alter']['text'] = '<a href="[field_contrib_url]" target="_blank">Read it here.</a>';
  $handler->display->display_options['fields']['field_contrib_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_url']['element_default_classes'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_contrib_teaser']['id'] = 'field_contrib_teaser';
  $handler->display->display_options['fields']['field_contrib_teaser']['table'] = 'field_data_field_contrib_teaser';
  $handler->display->display_options['fields']['field_contrib_teaser']['field'] = 'field_contrib_teaser';
  $handler->display->display_options['fields']['field_contrib_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_contrib_teaser']['element_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_teaser']['element_class'] = 'summary-body';
  $handler->display->display_options['fields']['field_contrib_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_teaser']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_teaser']['element_default_classes'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_section']['id'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['table'] = 'field_data_field_section';
  $handler->display->display_options['fields']['field_section']['field'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['label'] = '';
  $handler->display->display_options['fields']['field_section']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_section']['element_label_class'] = 'contrib-category';
  $handler->display->display_options['fields']['field_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_section']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'view-date-posted';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M j, Y';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more.';
  /* Field: Content: Issue of Publication */
  $handler->display->display_options['fields']['field_issue_of_publication']['id'] = 'field_issue_of_publication';
  $handler->display->display_options['fields']['field_issue_of_publication']['table'] = 'field_data_field_issue_of_publication';
  $handler->display->display_options['fields']['field_issue_of_publication']['field'] = 'field_issue_of_publication';
  $handler->display->display_options['fields']['field_issue_of_publication']['label'] = '';
  $handler->display->display_options['fields']['field_issue_of_publication']['element_type'] = '0';
  $handler->display->display_options['fields']['field_issue_of_publication']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue_of_publication']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_issue_of_publication']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_issue_of_publication']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Type of Posting */
  $handler->display->display_options['fields']['field_type_of_posting']['id'] = 'field_type_of_posting';
  $handler->display->display_options['fields']['field_type_of_posting']['table'] = 'field_data_field_type_of_posting';
  $handler->display->display_options['fields']['field_type_of_posting']['field'] = 'field_type_of_posting';
  $handler->display->display_options['fields']['field_type_of_posting']['label'] = '';
  $handler->display->display_options['fields']['field_type_of_posting']['element_type'] = '0';
  $handler->display->display_options['fields']['field_type_of_posting']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_posting']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_type_of_posting']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_posting']['type'] = 'list_key';
  /* Field: Content: Youtube */
  $handler->display->display_options['fields']['field_youtube']['id'] = 'field_youtube';
  $handler->display->display_options['fields']['field_youtube']['table'] = 'field_data_field_youtube';
  $handler->display->display_options['fields']['field_youtube']['field'] = 'field_youtube';
  $handler->display->display_options['fields']['field_youtube']['label'] = '';
  $handler->display->display_options['fields']['field_youtube']['element_type'] = '0';
  $handler->display->display_options['fields']['field_youtube']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_youtube']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_youtube']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_youtube']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_youtube']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_type'] = '0';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'contrib:rowdysort_page';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contrib' => 'contrib',
  );
  $handler->display->display_options['path'] = 'products-and-services/library/news/%';
  $handler->display->display_options['menu']['title'] = 'News from Around the Web';
  $handler->display->display_options['menu']['description'] = 'News from Around the Web Issue';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Admin Rowdy Contrib Drag Sort */
  $handler = $view->new_display('page', 'Admin Rowdy Contrib Drag Sort', 'rowdysort_page');
  $handler->display->display_options['display_description'] = 'Sort the issue';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_contrib_img' => 'field_contrib_img',
    'field_contrib_url' => 'field_contrib_url',
    'field_contrib_teaser' => 'field_contrib_teaser',
    'field_section' => 'field_section',
    'created' => 'created',
    'view_node' => 'view_node',
    'field_issue_of_publication' => 'field_issue_of_publication',
    'field_type_of_posting' => 'field_type_of_posting',
    'field_youtube' => 'field_youtube',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'draggableviews' => 'draggableviews',
    'parent' => 'parent',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contrib_img' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contrib_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contrib_teaser' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_section' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_of_publication' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_type_of_posting' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_youtube' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'parent' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = 'Order';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_section']['id'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['table'] = 'field_data_field_section';
  $handler->display->display_options['fields']['field_section']['field'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_section']['element_label_class'] = 'contrib-category';
  $handler->display->display_options['fields']['field_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date Added';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'view-date-posted';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M j, Y';
  /* Field: Content: Issue of Publication */
  $handler->display->display_options['fields']['field_issue_of_publication']['id'] = 'field_issue_of_publication';
  $handler->display->display_options['fields']['field_issue_of_publication']['table'] = 'field_data_field_issue_of_publication';
  $handler->display->display_options['fields']['field_issue_of_publication']['field'] = 'field_issue_of_publication';
  $handler->display->display_options['fields']['field_issue_of_publication']['label'] = 'Issue';
  $handler->display->display_options['fields']['field_issue_of_publication']['element_type'] = '0';
  $handler->display->display_options['fields']['field_issue_of_publication']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue_of_publication']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_issue_of_publication']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_issue_of_publication']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Type of Posting */
  $handler->display->display_options['fields']['field_type_of_posting']['id'] = 'field_type_of_posting';
  $handler->display->display_options['fields']['field_type_of_posting']['table'] = 'field_data_field_type_of_posting';
  $handler->display->display_options['fields']['field_type_of_posting']['field'] = 'field_type_of_posting';
  $handler->display->display_options['fields']['field_type_of_posting']['label'] = 'Type';
  $handler->display->display_options['fields']['field_type_of_posting']['element_type'] = '0';
  $handler->display->display_options['fields']['field_type_of_posting']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_posting']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_type_of_posting']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_posting']['type'] = 'list_key';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['element_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['element_type'] = '0';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete';
  $handler->display->display_options['path'] = 'admin/rowdy/sort/%';

  /* Display: Rowdy Pulpit Articles in Email Format */
  $handler = $view->new_display('page', 'Rowdy Pulpit Articles in Email Format', 'rowdyemail');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Thumb Image */
  $handler->display->display_options['fields']['field_contrib_img']['id'] = 'field_contrib_img';
  $handler->display->display_options['fields']['field_contrib_img']['table'] = 'field_data_field_contrib_img';
  $handler->display->display_options['fields']['field_contrib_img']['field'] = 'field_contrib_img';
  $handler->display->display_options['fields']['field_contrib_img']['label'] = '';
  $handler->display->display_options['fields']['field_contrib_img']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contrib_img']['alter']['text'] = '[field_contrib_img-fid]';
  $handler->display->display_options['fields']['field_contrib_img']['element_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_img']['element_class'] = 'contrib-image';
  $handler->display->display_options['fields']['field_contrib_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_img']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_contrib_img']['settings'] = array(
    'image_style' => 'rowdyvideowide',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_contrib_img']['group_column'] = 'fid';
  /* Field: Content: Share an Article */
  $handler->display->display_options['fields']['field_contrib_url']['id'] = 'field_contrib_url';
  $handler->display->display_options['fields']['field_contrib_url']['table'] = 'field_data_field_contrib_url';
  $handler->display->display_options['fields']['field_contrib_url']['field'] = 'field_contrib_url';
  $handler->display->display_options['fields']['field_contrib_url']['label'] = '';
  $handler->display->display_options['fields']['field_contrib_url']['alter']['text'] = '<a href="[field_contrib_url]" target="_blank">Read it here.</a>';
  $handler->display->display_options['fields']['field_contrib_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_url']['element_default_classes'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_contrib_teaser']['id'] = 'field_contrib_teaser';
  $handler->display->display_options['fields']['field_contrib_teaser']['table'] = 'field_data_field_contrib_teaser';
  $handler->display->display_options['fields']['field_contrib_teaser']['field'] = 'field_contrib_teaser';
  $handler->display->display_options['fields']['field_contrib_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_contrib_teaser']['element_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_teaser']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_teaser']['element_default_classes'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_section']['id'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['table'] = 'field_data_field_section';
  $handler->display->display_options['fields']['field_section']['field'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['label'] = '';
  $handler->display->display_options['fields']['field_section']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_section']['element_label_class'] = 'contrib-category';
  $handler->display->display_options['fields']['field_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_section']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'view-date-posted';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M j, Y';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more.';
  /* Field: Content: Issue of Publication */
  $handler->display->display_options['fields']['field_issue_of_publication']['id'] = 'field_issue_of_publication';
  $handler->display->display_options['fields']['field_issue_of_publication']['table'] = 'field_data_field_issue_of_publication';
  $handler->display->display_options['fields']['field_issue_of_publication']['field'] = 'field_issue_of_publication';
  $handler->display->display_options['fields']['field_issue_of_publication']['label'] = '';
  $handler->display->display_options['fields']['field_issue_of_publication']['element_type'] = '0';
  $handler->display->display_options['fields']['field_issue_of_publication']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue_of_publication']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_issue_of_publication']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_issue_of_publication']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Type of Posting */
  $handler->display->display_options['fields']['field_type_of_posting']['id'] = 'field_type_of_posting';
  $handler->display->display_options['fields']['field_type_of_posting']['table'] = 'field_data_field_type_of_posting';
  $handler->display->display_options['fields']['field_type_of_posting']['field'] = 'field_type_of_posting';
  $handler->display->display_options['fields']['field_type_of_posting']['label'] = '';
  $handler->display->display_options['fields']['field_type_of_posting']['element_type'] = '0';
  $handler->display->display_options['fields']['field_type_of_posting']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_posting']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_type_of_posting']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_posting']['type'] = 'list_key';
  /* Field: Content: Youtube */
  $handler->display->display_options['fields']['field_youtube']['id'] = 'field_youtube';
  $handler->display->display_options['fields']['field_youtube']['table'] = 'field_data_field_youtube';
  $handler->display->display_options['fields']['field_youtube']['field'] = 'field_youtube';
  $handler->display->display_options['fields']['field_youtube']['label'] = '';
  $handler->display->display_options['fields']['field_youtube']['element_type'] = '0';
  $handler->display->display_options['fields']['field_youtube']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_youtube']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_youtube']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_youtube']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_youtube']['settings'] = array(
    'file_view_mode' => 'preview',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_type'] = '0';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete';
  $handler->display->display_options['path'] = 'rowdy/email/%';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'rowdy/%/feed.xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'rowdyemail' => 'rowdyemail',
    'page_1' => 'page_1',
    'default' => 0,
    'rowdysort_page' => 0,
  );

  /* Display: Rowdy Pulpit MAIN Page */
  $handler = $view->new_display('page', 'Rowdy Pulpit MAIN Page', 'page_1');
  $handler->display->display_options['display_description'] = 'Main page of Rowdy Pulpit articles feed';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Youtube */
  $handler->display->display_options['fields']['field_youtube']['id'] = 'field_youtube';
  $handler->display->display_options['fields']['field_youtube']['table'] = 'field_data_field_youtube';
  $handler->display->display_options['fields']['field_youtube']['field'] = 'field_youtube';
  $handler->display->display_options['fields']['field_youtube']['label'] = '';
  $handler->display->display_options['fields']['field_youtube']['element_type'] = '0';
  $handler->display->display_options['fields']['field_youtube']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_youtube']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_youtube']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_youtube']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_youtube']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: Thumb Image */
  $handler->display->display_options['fields']['field_contrib_img']['id'] = 'field_contrib_img';
  $handler->display->display_options['fields']['field_contrib_img']['table'] = 'field_data_field_contrib_img';
  $handler->display->display_options['fields']['field_contrib_img']['field'] = 'field_contrib_img';
  $handler->display->display_options['fields']['field_contrib_img']['label'] = '';
  $handler->display->display_options['fields']['field_contrib_img']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contrib_img']['alter']['text'] = '[field_contrib_img-fid]';
  $handler->display->display_options['fields']['field_contrib_img']['element_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_img']['element_class'] = 'contrib-image';
  $handler->display->display_options['fields']['field_contrib_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_img']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_contrib_img']['settings'] = array(
    'image_style' => 'rowdywide',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_contrib_img']['group_column'] = 'fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_contrib_teaser']['id'] = 'field_contrib_teaser';
  $handler->display->display_options['fields']['field_contrib_teaser']['table'] = 'field_data_field_contrib_teaser';
  $handler->display->display_options['fields']['field_contrib_teaser']['field'] = 'field_contrib_teaser';
  $handler->display->display_options['fields']['field_contrib_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_contrib_teaser']['element_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_teaser']['element_class'] = 'summary-body';
  $handler->display->display_options['fields']['field_contrib_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_teaser']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_teaser']['element_default_classes'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_section']['id'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['table'] = 'field_data_field_section';
  $handler->display->display_options['fields']['field_section']['field'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['label'] = '';
  $handler->display->display_options['fields']['field_section']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_section']['element_class'] = 'contrib-category-title';
  $handler->display->display_options['fields']['field_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_section']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'view-date-posted';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M j, Y';
  /* Field: Content: Issue of Publication */
  $handler->display->display_options['fields']['field_issue_of_publication']['id'] = 'field_issue_of_publication';
  $handler->display->display_options['fields']['field_issue_of_publication']['table'] = 'field_data_field_issue_of_publication';
  $handler->display->display_options['fields']['field_issue_of_publication']['field'] = 'field_issue_of_publication';
  $handler->display->display_options['fields']['field_issue_of_publication']['label'] = '';
  $handler->display->display_options['fields']['field_issue_of_publication']['element_type'] = '0';
  $handler->display->display_options['fields']['field_issue_of_publication']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue_of_publication']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_issue_of_publication']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_issue_of_publication']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Type of Posting */
  $handler->display->display_options['fields']['field_type_of_posting']['id'] = 'field_type_of_posting';
  $handler->display->display_options['fields']['field_type_of_posting']['table'] = 'field_data_field_type_of_posting';
  $handler->display->display_options['fields']['field_type_of_posting']['field'] = 'field_type_of_posting';
  $handler->display->display_options['fields']['field_type_of_posting']['label'] = '';
  $handler->display->display_options['fields']['field_type_of_posting']['element_type'] = '0';
  $handler->display->display_options['fields']['field_type_of_posting']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_posting']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_type_of_posting']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_posting']['type'] = 'list_key';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more.';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_type'] = '0';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete';
  /* Field: Content: Share an Article */
  $handler->display->display_options['fields']['field_contrib_url']['id'] = 'field_contrib_url';
  $handler->display->display_options['fields']['field_contrib_url']['table'] = 'field_data_field_contrib_url';
  $handler->display->display_options['fields']['field_contrib_url']['field'] = 'field_contrib_url';
  $handler->display->display_options['fields']['field_contrib_url']['label'] = '';
  $handler->display->display_options['fields']['field_contrib_url']['alter']['text'] = '<a href="[field_contrib_url]" target="_blank">Read it here.</a>';
  $handler->display->display_options['fields']['field_contrib_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_url']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'contrib:rowdysort_page';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contrib' => 'contrib',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Issue of Publication (field_issue_of_publication) */
  $handler->display->display_options['filters']['field_issue_of_publication_tid']['id'] = 'field_issue_of_publication_tid';
  $handler->display->display_options['filters']['field_issue_of_publication_tid']['table'] = 'field_data_field_issue_of_publication';
  $handler->display->display_options['filters']['field_issue_of_publication_tid']['field'] = 'field_issue_of_publication_tid';
  $handler->display->display_options['filters']['field_issue_of_publication_tid']['value'] = array(
    244 => '244',
  );
  $handler->display->display_options['filters']['field_issue_of_publication_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_issue_of_publication_tid']['vocabulary'] = 'issue';
  $handler->display->display_options['path'] = 'products-and-services/library/news';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'News';
  $handler->display->display_options['menu']['description'] = 'News from Around the Web Issue';
  $handler->display->display_options['menu']['weight'] = '-30';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Rowdy Pulpit Topic Page */
  $handler = $view->new_display('page', 'Rowdy Pulpit Topic Page', 'page_2');
  $handler->display->display_options['display_description'] = 'Rowdy Pulpit By Topic';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Category (field_section) */
  $handler->display->display_options['relationships']['field_section_tid']['id'] = 'field_section_tid';
  $handler->display->display_options['relationships']['field_section_tid']['table'] = 'field_data_field_section';
  $handler->display->display_options['relationships']['field_section_tid']['field'] = 'field_section_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Thumb Image */
  $handler->display->display_options['fields']['field_contrib_img']['id'] = 'field_contrib_img';
  $handler->display->display_options['fields']['field_contrib_img']['table'] = 'field_data_field_contrib_img';
  $handler->display->display_options['fields']['field_contrib_img']['field'] = 'field_contrib_img';
  $handler->display->display_options['fields']['field_contrib_img']['label'] = '';
  $handler->display->display_options['fields']['field_contrib_img']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contrib_img']['alter']['text'] = '[field_contrib_img-fid]';
  $handler->display->display_options['fields']['field_contrib_img']['element_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_img']['element_class'] = 'contrib-image';
  $handler->display->display_options['fields']['field_contrib_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_img']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_contrib_img']['settings'] = array(
    'image_style' => 'rowdywide',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_contrib_img']['group_column'] = 'fid';
  /* Field: Content: Share an Article */
  $handler->display->display_options['fields']['field_contrib_url']['id'] = 'field_contrib_url';
  $handler->display->display_options['fields']['field_contrib_url']['table'] = 'field_data_field_contrib_url';
  $handler->display->display_options['fields']['field_contrib_url']['field'] = 'field_contrib_url';
  $handler->display->display_options['fields']['field_contrib_url']['label'] = '';
  $handler->display->display_options['fields']['field_contrib_url']['alter']['text'] = '<a href="[field_contrib_url]" target="_blank">Read it here.</a>';
  $handler->display->display_options['fields']['field_contrib_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_url']['element_default_classes'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_contrib_teaser']['id'] = 'field_contrib_teaser';
  $handler->display->display_options['fields']['field_contrib_teaser']['table'] = 'field_data_field_contrib_teaser';
  $handler->display->display_options['fields']['field_contrib_teaser']['field'] = 'field_contrib_teaser';
  $handler->display->display_options['fields']['field_contrib_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_contrib_teaser']['element_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_teaser']['element_class'] = 'summary-body';
  $handler->display->display_options['fields']['field_contrib_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_teaser']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_contrib_teaser']['element_default_classes'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_section']['id'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['table'] = 'field_data_field_section';
  $handler->display->display_options['fields']['field_section']['field'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['label'] = '';
  $handler->display->display_options['fields']['field_section']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_section']['element_label_class'] = 'contrib-category';
  $handler->display->display_options['fields']['field_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_section']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'view-date-posted';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M j, Y';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more.';
  /* Field: Content: Issue of Publication */
  $handler->display->display_options['fields']['field_issue_of_publication']['id'] = 'field_issue_of_publication';
  $handler->display->display_options['fields']['field_issue_of_publication']['table'] = 'field_data_field_issue_of_publication';
  $handler->display->display_options['fields']['field_issue_of_publication']['field'] = 'field_issue_of_publication';
  $handler->display->display_options['fields']['field_issue_of_publication']['label'] = '';
  $handler->display->display_options['fields']['field_issue_of_publication']['element_type'] = '0';
  $handler->display->display_options['fields']['field_issue_of_publication']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue_of_publication']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_issue_of_publication']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_issue_of_publication']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Type of Posting */
  $handler->display->display_options['fields']['field_type_of_posting']['id'] = 'field_type_of_posting';
  $handler->display->display_options['fields']['field_type_of_posting']['table'] = 'field_data_field_type_of_posting';
  $handler->display->display_options['fields']['field_type_of_posting']['field'] = 'field_type_of_posting';
  $handler->display->display_options['fields']['field_type_of_posting']['label'] = '';
  $handler->display->display_options['fields']['field_type_of_posting']['element_type'] = '0';
  $handler->display->display_options['fields']['field_type_of_posting']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_posting']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_type_of_posting']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_posting']['type'] = 'list_key';
  /* Field: Content: Youtube */
  $handler->display->display_options['fields']['field_youtube']['id'] = 'field_youtube';
  $handler->display->display_options['fields']['field_youtube']['table'] = 'field_data_field_youtube';
  $handler->display->display_options['fields']['field_youtube']['field'] = 'field_youtube';
  $handler->display->display_options['fields']['field_youtube']['label'] = '';
  $handler->display->display_options['fields']['field_youtube']['element_type'] = '0';
  $handler->display->display_options['fields']['field_youtube']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_youtube']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_youtube']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_youtube']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_youtube']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_type'] = '0';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'News by Topic: %1';
  $handler->display->display_options['arguments']['tid']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['breadcrumb'] = 'News by Topic: %1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['argument'] = 'all';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'section' => 'section',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid']['require_value'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contrib' => 'contrib',
  );
  $handler->display->display_options['path'] = 'products-and-services/library/news/topic/%';
  $handler->display->display_options['menu']['title'] = 'News from Around the Web';
  $handler->display->display_options['menu']['description'] = 'News from Around the Web Issue';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['contrib'] = $view;

  $view = new view();
  $view->name = 'rowdyblocks';
  $view->description = 'Blocks to view Rowdy Pulpit issues.';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'rowdyblocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our Library by Issue Month';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'contentlibrary_block_thumb',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Issue Date */
  $handler->display->display_options['fields']['field_issue_date']['id'] = 'field_issue_date';
  $handler->display->display_options['fields']['field_issue_date']['table'] = 'field_data_field_issue_date';
  $handler->display->display_options['fields']['field_issue_date']['field'] = 'field_issue_date';
  $handler->display->display_options['fields']['field_issue_date']['label'] = '';
  $handler->display->display_options['fields']['field_issue_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_issue_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_issue_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_issue_date']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['description']['element_type'] = 'p';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Term edit link */
  $handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['label'] = '';
  $handler->display->display_options['fields']['edit_term']['element_type'] = '0';
  $handler->display->display_options['fields']['edit_term']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_term']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['edit_term']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_term']['text'] = '[edit the issue summary]';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['element_type'] = '0';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Sort criterion: Taxonomy term: Issue Date (field_issue_date) */
  $handler->display->display_options['sorts']['field_issue_date_value']['id'] = 'field_issue_date_value';
  $handler->display->display_options['sorts']['field_issue_date_value']['table'] = 'field_data_field_issue_date';
  $handler->display->display_options['sorts']['field_issue_date_value']['field'] = 'field_issue_date_value';
  $handler->display->display_options['sorts']['field_issue_date_value']['order'] = 'DESC';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    3 => '3',
  );

  /* Display: Block - Rowdy Issues */
  $handler = $view->new_display('block', 'Block - Rowdy Issues', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Provider News: Recent Issues';
  $handler->display->display_options['display_description'] = 'A block of past issues of Rowdy Pulpit';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Block - Library Issues */
  $handler = $view->new_display('block', 'Block - Library Issues', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Our Library by Issue Month';
  $handler->display->display_options['display_description'] = 'A block of past issues of Library items';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['block_description'] = 'Library past Issues';

  /* Display: Rowdy Topics */
  $handler = $view->new_display('block', 'Rowdy Topics', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News By Topic';
  $handler->display->display_options['display_description'] = 'A summary fo topics covered by Rowdy Pulpit';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['block_description'] = 'Rowdy Pulpit By Topic Block';
  $export['rowdyblocks'] = $view;

  return $export;
}
