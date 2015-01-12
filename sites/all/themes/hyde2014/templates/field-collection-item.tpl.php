<?php

/**
 * @file
 * Default theme implementation for field collection items.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) field collection item label.
 * - $url: Direct url of the current entity if specified.
 * - $page: Flag for the full page state.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-field-collection-item
 *   - field-collection-item-{field_name}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
// modify the image if a link address exists
if (isset($content['field_image_link'][0]['#markup']) && !empty($content['field_image_link'][0]['#markup'])) {
  // Make the image link.
  $content['field_offer_image'][0]['#item']['#link'] = $content['field_image_link'][0]['#markup'];
}
hide($content['field_image_link']);
?>
<div class="clearfix field-insert-master <?php print $classes; ?>"<?php print $attributes; ?>>
  <?php print render($content); ?>
</div>
