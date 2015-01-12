
<?php
if ($view_mode == 'teaser'):
/*
  <div class="accordion-group">
    <div class="accordion-heading">
      <a class="accordion-toggle" data-toggle="collapse" data-parent="#accordion2" href="#collapseOne">
        Collapsible Group Item #1
      </a>
    </div>
    <div id="collapseOne" class="accordion-body collapse in">
      <div class="accordion-inner">
        Anim pariatur cliche...
      </div>
    </div>
  </div>
*/
?>
    <h3 itemprop="name" class="title-artist" rel="<?php print $rdf_mapping['title']['predicates'][0]; ?>"><?php print l($title, 'node/' . $node->nid); ?></h2>
    <?php
    hide($content['field_image']);
    if (!empty($content['field_image']['#items'][0]['fid'])) {
      print render($content['field_image']);
    }
    ?>
    <?php
    // mod the link a little:
    $field_artist_website[0]['attributes']['class'] = array(
      'btn',
      'btn-primary',
      'btn-large',
    );
    $field_artist_website[0]['options']['attributes']['class'] = array(
      'btn',
      'btn-primary',
      'btn-large',
    );
    $field_artist_website[0]['title'] = 'Artist Website';
    ?>
    <?php print render($content); ?>
<?php
else:
?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

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
</article> <!-- /.node -->
<?php
endif;
?>
