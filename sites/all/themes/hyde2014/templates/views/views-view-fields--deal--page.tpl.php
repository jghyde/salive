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
?>
<?php
 print l($fields['field_image']->content, 'node/' . $fields['nid']->content, array('html' => TRUE, 'attributes' => array('class' => array('pull-left', 'deal-image', 'img-polaroid'))));
?>
<div class="media-body">
  <h3><?php print $fields['title']->content; ?></h3>
  <p><label class="deal deal-start">Launched:</label> <?php print $fields['field_deal_start_date']->content; ?> <label class="deal deal-left">Coupons Left:</label> <?php print $fields['field_number_of_coupons_left']->content; ?></p>
  <p><?php print $fields['body']->content; ?></p>
  <?php global $user; ?>
  <?php print livedeals_button($fields['nid']->content, $user->uid); ?>
</div>