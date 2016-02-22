<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
  <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>
  <div class="field-items"<?php print $content_attributes; ?>>
	<?php if ($element['#bundle'] == 'article'): ?>
	  <div id="nodeSlide" class="owl-carousel">
		<?php foreach ($items as $delta => $item): ?>
			<div class="item">
				<?php print render($item); ?>
				<?php
				if (!empty($item['#item']['field_file_image_alt_text'][LANGUAGE_NONE][0]['safe_value'])) {
				  $alt = $item['#item']['field_file_image_alt_text'][LANGUAGE_NONE][0]['safe_value'];
				}
				else {
				  $alt = $item['#item']['alt'];
				}
				?>
				<p class="caption"><?php print $alt; ?></p>
			</div>
		<?php endforeach; ?>
	  </div>
	  <?php elseif ($element['#bundle'] == 'event_paid' || 'event' || 'event_free'): ?>
		<div id="nodeSlide" class="owl-carousel">
		  <?php foreach ($items as $delta => $item): ?>
			  <div class="item">
				  <?php print render($item); ?>
			  </div>
		  <?php endforeach; ?>
		</div>
		
	  <?php else: ?>
	  <?php foreach ($items as $delta => $item): ?>
		<?php print render($item); ?>
	  <?php endforeach; ?>
	<?php endif; ?>
  </div>
</div>

