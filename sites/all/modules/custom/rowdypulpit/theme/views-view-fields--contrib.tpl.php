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
$comment_url = l($fields['comment_count']->content, 'node/' . $fields['nid']->content, array('attributes' => array('class' => array('halflings', 'after', 'comments'))));
$contrib_url = l('Read more', $fields['field_contrib_url']->content, array('attributes' => array('target' => '_blank', 'class' => array('halflings', 'share', 'after'))));
$cl = '';
global $user;
if ($user->uid == 1 || (node_access('edit', 'contrib') && node_access('delete', 'contrib'))) {
  if (isset($fields['edit_node']) && isset($fields['delete_node'])) {
    $cl =  '<div class="contrib-admin-links-wrapper">';
    $cl .=  '<ul class="contrib-admin-links">';
    $cl .=  '<li class="first">' . $fields['edit_node']->content . '</li>';
    $cl .=  '<li class="last">' . $fields['delete_node']->content . '</li>';
    $cl .=  '</ul>';
    $cl .=  '</div>';
  }
}
if (!empty($fields['field_rowdy_youtube']->content)) {
  $fields['field_type_of_posting']->content = 'youtube';
}
// Determine and format for each custom view mode
$content = '';
switch ($fields['field_type_of_posting']->content) {
  case 'short':
    $content = l($fields['title']->content, $fields['field_contrib_url']->content, array('attributes' => array('target' => '_blank'))) . $cl;
  break;
  case 'long':
    if (empty($fields['field_contrib_img']->content)) {
      //@TODO add default image?
      $img = '';      
    }
    else {
      $img = _rowdypulpit_format_image($fields['field_contrib_img']->raw, 'rowdythumb', $fields['title']->content);
    }
    if (!empty($img)): $content .= $img; endif;
    if (!empty($img)): $content .= '<div class="rowdy-teaser">'; endif;
    $content .=  '<h3>' . l($fields['title']->content, $fields['field_contrib_url']->content, array('attributes' => array('target' => '_blank'))) . '</h3>' . $cl;
     
    $content .= '<p>' . $fields['field_contrib_teaser']->content;
    $content .= '<ul class="item-list"><li> ' . $contrib_url . '</li>';
    $content .= '<li>' . $comment_url . '</li></ul>';
    if (!empty($img)): $content .= '</div>'; endif;
  break;
  case 'youtube':
    $content =  '<h3>' . l($fields['title']->content, $fields['field_contrib_url']->content, array('attributes' => array('target' => '_blank'))) . '</h3>' . $cl;
    $content .= '<p>' . $fields['field_rowdy_youtube']->content . '</p>';
    $content .= '<p>' . $fields['field_contrib_teaser']->content . '</p>';
    $content .= '<ul class="item-list"><li> ' . 
    l('Watch here', $fields['field_contrib_url']->content, array('attributes' => array('target' => '_blank', 'class' => array('halflings', 'after', 'facetime-video', 'Watch on YouTube.com')))). '</li>';
    $content .= '<li>' . $comment_url . '</li></ul>';
  break;
  case 'related':
    $content = '<div class="rowdy-related">Related: ' .  l($fields['title']->content, $fields['field_contrib_url']->content, array('html' => TRUE, 'attributes' => array('target' => '_blank'))) . '.</div> . $cl';
  break;
  default:
    if (empty($fields['field_contrib_img']->content)) {
      //@TODO add default image?
      $img = '';      
    }
    else {
      $img = _rowdypulpit_format_image($fields['field_contrib_img']->raw, 'rowdywide', $fields['title']->content);
    }
    $content =  '<h3>' . l($fields['title']->content, $fields['field_contrib_url']->content) . '</h3>' . $cl;    
    if (!empty($img)): $content .= $img; endif;
    $content .= '<p>';
    $content .= $fields['field_contrib_teaser']->content . '</p>';
    $content .= '<ul class="item-list"><li> ' . $contrib_url . '</li>';
    $content .= '<li>' . $comment_url . '</li></ul>';
  break;
}
print $content;
?>
