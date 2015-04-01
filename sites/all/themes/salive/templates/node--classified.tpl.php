<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <header>
    <?php if (!$page && $title): ?>
    <?php print render($title_prefix); ?>   
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php print render($title_suffix); ?>
    <?php endif; ?>
  </header>
  
  <div>
    <div class="class-image">
    <?php print render($content['field_ad_image']); ?>
    </div>
  </div>
  <div class="clearfix">
    <?php print render($content['body']); ?>
  </div>
  <?php if ($field_show_location[0]['value'] == 1): ?>
    <?php print render($content['field_address']); ?>
    <?php print render($content['field_map']); ?>
  <?php endif; ?>
  <div class="clearfix">
    <div class="col-md-6"><a href="/user/<?php print $node->uid; ?>/contact" class="btn btn-lg btn-success btn-block"><i class="fa fa-envelope-o fa-1x"></i> Contact Seller</a></div>
    <div class="col-md-3"></div>
    <div class="col-md-2 text-center classified-expires <?php echo $remaining_class; ?>">
      Expires On<br /> <?php print date('M. j, Y g:i a', $expires); ?>
    </div>
  </div>
  
  <?php if (!empty($content['field_tags']) || !empty($content['links'])): ?>
    <footer>
      <?php print render($content['field_tags']); ?>
      <?php print render($content['links']); ?>
    </footer>
  <?php endif; ?>

</article> <!-- /.node -->
