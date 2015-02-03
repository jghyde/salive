<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
  <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>
  <div class="field-items"<?php print $content_attributes; ?>>
		<div id="nodeSlide" class="cycle-slideshow" 
    data-cycle-fx="carousel"
    data-cycle-timeout="4000"
    data-cycle-carousel-visible="1"
    data-cycle-carousel-fluid="true"
    data-cycle-caption="#alt-caption"
    data-cycle-caption-template="{{title}}"
    data-cycle-slides="> a"
    >
	  <?php foreach ($items as $delta => $item): ?>
      <?php print render($item); ?>
    <?php endforeach; ?>
	  </div>
<div id="alt-caption" class="text-center"></div>
  </div>
</div>

