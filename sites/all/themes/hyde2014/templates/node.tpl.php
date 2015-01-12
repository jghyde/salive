<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <header>
    <?php
    if ($page) {
      if (!empty($byline)) {
        print $byline;
        if (!empty($field_image[0]['uri'])) {
          $og_img = image_style_url('open_graph', $field_image[0]['uri']);
        }
        else {
          $og_img = 'http://sanangelolive.com/sites/all/themes/hyde2014/images/new-logo_0.png';
        }
        // Prepare body text for OG sharing.
        $alter = array(
          'max_length' => 300,
          'word_boundary' => TRUE,
          'ellipsis' => TRUE,
          'html' => TRUE,
        );      
        $desc = views_trim_text($alter, $content['body']['#items'][0]['value']);
        $desc = strip_tags($desc);
        print '<ul class="sharebar">';
        print '<li><a class="fb-share" data-url="http://sanangelolive.com' . $node_url . '" data-name="'
        . $title . '" data-caption="San Angelo LIVE! Breaking News" data-img="' . $og_img .'" data-desc="' . $desc . '">
        <span class="social facebook icon-white"></span><span class="bigshare">Share on Facebook</span></a></li>';
        print '<li><a class="twitter-popup" href="http://twitter.com/share?text=' . urlencode($title) .'&url=http://sanangelolive.com' . $node_url .'&hashtags=SanAngelo"><span class="social twitter icon-white"></span><span class="bigshare">Tweet</span></a></li>';
        print '</ul>';
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
  <div id="comments">
  <?php print render($content['comments']); ?>
  </div>
</article> <!-- /.node -->
