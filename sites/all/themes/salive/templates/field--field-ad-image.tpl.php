<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
  <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>
  <div class="field-items"<?php print $content_attributes; ?>>
	  <div id="nodeClass" class="owl-carousel node-class">
		<?php foreach ($items as $delta => $item): ?>
			<div class="item">
				<?php print render($item); ?>
			</div>
    <?php endforeach; ?>
	  </div>
  </div>
</div>
