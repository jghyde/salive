
<?php
if ($view_mode == 'teaser'):?>

<?php
else:
?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php
    // Hide comments, tags, and links now so that we can render them later.
    hide($content['field_portrait_content']);
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_tags']);
    hide($content['field_date_of_birth']);
    hide($content['field_date_of_death']);
    hide($content['field_obit_fname']);
    hide($content['field_obit_lname']);
    
    print render($content['field_portrait_content']);
    print render($content);
  ?>

  <?php if (!empty($content['field_tags']) || !empty($content['links'])): ?>
    <footer>
      <?php print render($content['field_tags']); ?>
      <?php print render($content['links']); ?>
    </footer>
  <?php endif; ?>
  <?php print render($content['comments']); ?>
</article> <!-- /.node -->
<?php
endif;
?>
