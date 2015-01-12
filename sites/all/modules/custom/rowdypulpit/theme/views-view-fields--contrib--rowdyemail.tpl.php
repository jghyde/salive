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
$view_url = l('Watch now', $fields['field_contrib_url']->content, array('attributes' => array('target' => '_blank', 'class' => array('read-more'))));

if (!empty($fields['field_youtube']->content)) {
  $fields['field_type_of_posting']->content = 'youtube';
}
// Determine and format for each custom view mode
switch ($fields['field_type_of_posting']->content) {
  case 'short':
    $content = l($fields['title']->content, $fields['field_contrib_url']->content, array('html' => TRUE, 'attributes' => array('target' => '_blank')));
  break;
  case 'long':
    if (empty($fields['field_contrib_img']->content)) {
      //@TODO add default image?
      $img = '';      
    }
    else {
      $img = _rowdypulpit_format_image($fields['field_contrib_img']->content, 'rowdythumb', $fields['title']->content);
    }
    $content =  '<h3>' . l($fields['title']->content, $fields['field_contrib_url']->content, array('html' => TRUE,)) . '</h3>';
    if (!empty($img)): $content .= l($img, $fields['field_contrib_url']->content, array('html' => TRUE)); endif; 
    $content .= '<p>' . $fields['field_contrib_teaser']->content . ' ' . $contrib_url . '</p>';
    
  break;
  case 'youtube':
    $content =  '<h3>' .  l($fields['title']->content, $fields['field_contrib_url']->content, array('html' => TRUE,)) . '</h3>';
    $content .= '<p>' . l($fields['field_youtube']->content, $fields['field_contrib_url']->content, array('html' => TRUE, )) . '</p>';
    //$content .= '<p><a href="' . $fields['field_contrib_url']->content . '" target="_blank">' . $fields['field_youtube']->content . '</a></p>';
    $content .= '<p>' . $fields['field_contrib_teaser']->content . ' ' . $contrib_url . '</p>';    
  break;
  case 'related':
    $content = '<div class="rowdy-related" style="text-indent: 10px;"><strong>Related:</strong> ' .  l($fields['title']->content, $fields['field_contrib_url']->content, array('html' => TRUE, 'attributes' => array('target' => '_blank'))) . '.</div>';
  break;
  default:
    if (empty($fields['field_contrib_img']->content)) {
      //@TODO add default image?
      $img = '';      
    }
    else {
      $img = _rowdypulpit_format_image($fields['field_contrib_img']->content, 'rowdywide', $fields['title']->content);
    }
    $content =  '<h3>' . l($fields['title']->content, $fields['field_contrib_url']->content, array('html' => TRUE)) . '</h3>';    
    if (!empty($img)): $content .= l($img, $fields['field_contrib_url']->content, array('html' => TRUE)); endif;
    $content .= '<p>';
    $content .= $fields['field_contrib_teaser']->content . ' ' . $contrib_url . '</p>';
  break;
}
print '<div style="clear: both; margin-bottom: 1em;">' . $content . '</div>';
?>
