<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
  <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>
  <div class="field-items"<?php print $content_attributes; ?>>
		<div id="nodeSlide" class="cycle-slideshow" 
    data-cycle-fx="scrollHorz" 
    data-cycle-timeout="2000"
		data-cycle-swipe="true"
    data-cycle-slides="> a"
    >
	  <?php foreach ($items as $delta => $item): ?>
      <?php print render($item); ?>
    <?php endforeach; ?>
	  </div>
  </div>
</div>

