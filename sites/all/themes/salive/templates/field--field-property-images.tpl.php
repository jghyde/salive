<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
  <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>
  <div class="field-items"<?php print $content_attributes; ?>>
	  <?php $class=''; ?>
	<?php if ($element['#bundle'] == 'openhouse'): ?>
		<?php if (count($items > 0)) {
			$class = ' multiple';
		}
		?>
		<a id="next"><span class="glyphicon glyphicon-chevron-right<?php print $class; ?>"  aria-hidden="true"></span></a>
		<a id="prev"><span class="glyphicon glyphicon-chevron-left<?php print $class; ?>"  aria-hidden="true"></span></a>
	  <div id="openhouseSlide" class="iosslider">
<div class="slider">
		<?php foreach ($items as $delta => $item): ?>
			<div class="slide">
				<?php print render($item); ?>
				<p class="caption"><?php print $item['#item']['alt']; ?></p>
			</div>
		<?php endforeach; ?>
</div>
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

