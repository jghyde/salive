<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <header>
    <?php
    if ($page) {
      if (!empty($byline)) {
        print $byline;
      }
    }
    ?>
    <?php if (!$page && $title): ?>
    <?php print render($title_prefix); ?>   
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php print render($title_suffix); ?>
    <?php endif; ?>
  </header>

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
    <?php print render($content['links']); ?>
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
  <?php print render($content['comments']); ?>
</article> <!-- /.node -->
