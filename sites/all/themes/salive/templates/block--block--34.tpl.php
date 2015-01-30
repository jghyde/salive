<div id="block-<?php print $block->module .'-'. $block->delta ?>" class="clearfix"<?php print $attributes; ?>>
      <?php print render($title_prefix); ?>
    <?php if ($block->subject): ?>
      <h3 class="block-title"<?php print $title_attributes; ?>><?php print $block->subject ?></h3>
    <?php endif;?>
      <?php print render($title_suffix); ?>
		
		<div class="clearfix" <?php print $content_attributes; ?>>
		  <?php print $content; ?>
		</div>
		<br />

</div> <!-- /.block -->