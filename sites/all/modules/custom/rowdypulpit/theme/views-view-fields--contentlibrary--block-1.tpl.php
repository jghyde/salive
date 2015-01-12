<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
$contrib_url = l('Read more', $fields['field_contrib_url']->content, array('attributes' => array('target' => '_blank', 'class' => array('read-more'))));
$cl = '';
global $user;
if ($user->uid == 1) {
  if (isset($fields['edit_node']) && isset($fields['delete_node'])) {
    $cl =  '<div class="contrib-admin-links-wrapper">';
    $cl .=  '<ul class="contrib-admin-links">';
    $cl .=  '<li class="first">' . $fields['edit_node']->content . '</li>';
    $cl .=  '<li class="last">' . $fields['delete_node']->content . '</li>';
    $cl .=  '</ul>';
    $cl .=  '</div>';
  }
}
if (!empty($fields['field_youtube']->content)) {
  $fields['field_type_of_posting']->content = 'youtube';
}
// Determine and format for each custom view mode
switch ($fields['field_type_of_posting']->content) {
  case 'short':
    $content = l($fields['title']->content, $fields['field_contrib_url']->content, array('attributes' => array('target' => '_blank')));
  break;
  case 'long':
    if (empty($fields['field_contrib_img']->content)) {
      //@TODO add default image?
      $img = '';      
    }
    else {
      $img = _rowdypulpit_format_image($fields['field_contrib_img']->content, 'contentlibrary_addl_stories', $fields['title']->content);
    }
    $content =  '<h2 class="content-title">' . l($fields['title']->content, $fields['field_contrib_url']->content) . '</h2>' . $cl;
    if (!empty($img)): $content .= $img; endif; 
    $content .= '<div class="rowdy-more">' . $fields['field_contrib_teaser']->content . ' ' . $contrib_url . '</div>';
    
  break;
  case 'youtube':
    $content =  '<h2 class="content-title">' . l($fields['title']->content, $fields['field_contrib_url']->content) . '</h2>' . $cl;
    $content .= '<p>' . $fields['field_youtube']->content . '</p>';
    $content .= '<p>' . $fields['field_contrib_teaser']->content . ' ' . $contrib_url . '</p>';    
  break;
  case 'related':
    $content = '<div class="rowdy-related">Related: ' .  l($fields['title']->content, $fields['field_contrib_url']->content, array('html' => TRUE, 'attributes' => array('target' => '_blank'))) . '.</div>';
    $content .= $cl;
  break;
  default:
    if (empty($fields['field_contrib_img']->content)) {
      //@TODO add default image?
      $img = '';      
    }
    else {
      $img = _rowdypulpit_format_image($fields['field_contrib_img']->content, 'contentlibrary_addl_stories', $fields['title']->content);
    }
    $content =  '<h2 class="content-title">' . l($fields['title']->content, $fields['field_contrib_url']->content) . '</h2>' . $cl;    
    if (!empty($img)): $content .= $img; endif;
    $content .= '<div class="rowdy-related">' . $fields['field_contrib_teaser']->content . ' ' . $contrib_url . '</div>';
  break;
}
print $content;
?>
