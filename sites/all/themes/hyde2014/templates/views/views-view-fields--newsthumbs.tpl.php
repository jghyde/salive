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
// Figure out the image situation...
$vid = $row->field_field_image[0]['raw'];
if ($vid['filemime'] == 'video/youtube') {
  // It's a video. Let's try to render a video into a jpg.
  /*

    style_name: The name of the style to be used to alter the original image.
    path: The path of the image file relative to the Drupal files directory. This function does not work with images outside the files directory nor with remotely hosted images. This should be in a format such as 'images/image.jpg', or using a stream wrapper such as 'public://images/image.jpg'.
    width: The width of the source image (if known).
    height: The height of the source image (if known).
    alt: The alternative text for text-based browsers.
    title: The title text is displayed when the image is hovered in some popular browsers.
    attributes: Associative array of attributes to be placed in the img tag.

   */
  $wrapper = file_stream_wrapper_get_instance_by_uri($vid['uri']);
  //$valid_image_styles = image_style_options(FALSE);
  $vars = array(
    'style_name' => 'video_newsthumb',
    'path' => $wrapper->getLocalThumbnailPath(),
    'width' => 400,
    'height' => 300,
    'alt' => $fields['title']->raw,
    'title' => $fields['title']->raw,
    'attributes' => array(
      'class' => array(
        'field-image',
      ),
    ),
  );
  $img = theme('image_style', $vars);
  $video_callout = '<span class="halflings-icon facetime_video">&nbsp;</span> ';
  $fields['field_image']->content = l($img, $fields['path']->content, array('html' => TRUE,));
}
unset($vid);
?>
<div class="thumbnail">
  <?php print $fields['field_image']->content; ?>
  <h3><?php print $fields['title']->content; ?></h3>
  <p><?php (isset($video_callout) ? print $video_callout : ''); ?><?php print $fields['body']->content; ?>&hellip; <a href="<?php print $fields['path']->content; ?>">Read More</a></p>
  <?php
  if (isset($fields['field_radioactivity']->content)):
  ?>
  <ul class="story-motherhood">
    <?php
    if ($fields['field_radioactivity']->content == 0 || $fields['field_radioactivity']->content == '') {
      $fields['field_radioactivity']->content = 'Cool';
    }
    elseif ((int)$fields['field_radioactivity']->content > 10000) {
      $fields['field_radioactivity']->content = (int)$fields['field_radioactivity']->content/10000;
      $fields['field_radioactivity']->content = $fields['field_radioactivity']->content . ' x 10<sup>4</sup>';
    }
    ?>
    <li><i class="glyphicons glyphicon-icon fire"></i><span><?php print $fields['field_radioactivity']->content; ?></span></li>
    <li><a href="<?php print $fields['path']->content; ?>"><i class="glyphicons glyphicon-icon comments"></i></a><span><?php
    if ($fields['comment_count']->content == 0 || $fields['comment_count']->content == '') {
      print '<a href="' . $fields['path']->content . '#comments">0</a>';
    }
    else {
      print '<a href="' . $fields['path']->content . '#comments">'  . $fields['comment_count']->content . '</a>';
    }?></span></li>
  </ul>
  <?php
  endif; ?>
</div>