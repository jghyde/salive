<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="motherhood">
    <div class="picture pull-left thumbnail">
      <?php print $picture ?>
    </div>
    <div class="comment-title-block">
      <?php print render($title_prefix); ?>
      <h4<?php print $title_attributes; ?>><?php print $title ?></h4>
      <?php if ($new): ?>
        <span class="new"><?php print $new ?></span>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
        <?php print $submitted; ?>
        <?php print $permalink; ?>
    </div>
  </div>
  <div class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['links']);
      print render($content);
    ?>
  </div>
  <?php print render($content['links']) ?>
</div>
