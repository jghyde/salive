<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

<?php
if ($view_mode == 'teaser'):
?>
  <header>
    <?php
    hide($content['field_image']);
    hide($content['field_map']);
    if (!empty($content['field_image']['#items'][0]['fid'])) {
      print render($content['field_image']);
    }
    ?>
    <div class="address">
      <?php print render($title_prefix); ?>
      <h2<?php print $title_attributes; ?>><?php print l($title, $node_url, array('attributes' => array('title' => $title))); ?></h2>
      <?php print render($title_suffix); ?>
      <?php print render($content); ?>
    </div>
    <?php print render($content['field_map']); ?>
  </header>
<?php
else:
?>

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
    </footer>
  <?php endif; ?>

  <?php print render($content['comments']); ?>
<?php
endif;
?>
</article> <!-- /.node -->
