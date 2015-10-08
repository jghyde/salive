<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
<?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>>
      <a href="<?php print $node_url; ?>"><?php print $title; ?></a>
    </h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

	<div class="node-content clearfix"<?php print $content_attributes; ?>>
	  <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
			print render($content['ssc']);
			print render($content['field_image']);
			print '<div class="node-author">' . $byline .'</div>';
		?>	
			<div class="p402_premium">
				<?php
					print render($content['body']);
				?>
      </div>
	  </div>
	<?php print render($content['links']); ?>
	
	
  <footer>
    <?php print render($content['field_tags']); ?>
    <?php if ($display_submitted): ?>
    <div class="submitted well clearfix">
      <?php print $submitted; ?>
    </div>
    <?php endif; ?>
		<?php if (!empty($sell)) {
			print $sell;
		} ?>
  </footer>
	
  <div id="comments">
		<?php print render($content['comments']); ?>
  </div>
	
</div>