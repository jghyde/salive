<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
	<?php print $byline; ?>
	
  <?php
    // Hide comments, tags, and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_tags']);
    print render($content);
  ?>
	
	<?php if (!empty($content['field_tags']) || !empty($content['links'])): ?>
  <footer>
    <?php print render($content['field_tags']); ?>
    <?php if ($display_submitted): ?>
    <div class="submitted well clearfix">
      <?php print $submitted; ?>
    </div>
    <?php endif; ?>
  </footer>
  <?php endif; ?>
  
  <?php
  if (!empty($sell)) {
    print $sell;
  }
  ?>
  
  <div id="comments">
  <?php print render($content['comments']); ?>
  </div>

</div>