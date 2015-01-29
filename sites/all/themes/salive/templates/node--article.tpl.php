<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
	
	<?php print render($content['field_image']); ?>
	
	<div class="node-author">
		<?php print $byline; ?>
	</div>
	
	<?php print render($content['body']); ?>
	
  <footer>
    <?php print render($content['field_tags']); ?>
    <?php if ($display_submitted): ?>
    <div class="submitted well clearfix">
      <?php print $submitted; ?>
    </div>
    <?php endif; ?>
  </footer>
  
  <?php
  if (!empty($sell)) {
    print $sell;
  }
	?>
  
  <div id="comments">
  <?php print render($content['comments']); ?>
  </div>

</div>