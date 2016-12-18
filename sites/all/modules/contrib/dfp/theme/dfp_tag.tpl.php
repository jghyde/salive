<?php
  /**
   * @file
   * Default template for dfp tags.
   */
?>

<div <?php print drupal_attributes($placeholder_attributes) ?>>
  <?php if (isset($slug)):
    print drupal_render($slug);
  endif; ?>
  <?php
  if (!empty($variables['ezoic_wrapper']['#prefix'])) {
      print $variables['ezoic_wrapper']['#prefix'];
  }
  ?>
  <script type="text/javascript">
    googletag.cmd.push(function() {
      googletag.display("<?php print $tag->placeholder_id ?>");
    });
  </script>
  <?php
  if(!empty($variables['ezoic_wrapper']['#prefix']) && !empty($variables['ezoic_wrapper']['#suffix'])) {
      print $variables['ezoic_wrapper']['#suffix'];
  }
  ?>
</div>
