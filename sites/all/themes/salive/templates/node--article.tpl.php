<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
<?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>>
      <a href="<?php print $node_url; ?>"><?php print $title; ?></a>
    </h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

	<div class="node-content clearfix"<?php print $content_attributes; ?>>
	  <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
			print render($content['ssc']);
			print render($content['field_image']);
			print '<div class="node-author">' . $byline .'</div>';
		?>	
				<?php
					print render($content['body']);
				?>
	  </div>
	<?php print render($content['links']); ?>
	
	
  <footer>
    <?php print render($content['field_tags']); ?>
    <?php if ($display_submitted): ?>
    <div class="submitted well clearfix">
      <?php print $submitted; ?>
    </div>
    <?php endif; ?>
		<?php if (!empty($sell)) {
			print $sell;
		} ?>
    <div id="medianet">
      <script id="mNCC" language="javascript">
        var w = document.getElementById("medianet").offsetWidth;
        var bannerwidth = 300;
        if (w > 599) {
          bannerwidth=600;
        }
        medianet_width = bannerwidth;
        medianet_height = "250";
        medianet_crid = "148244274";
        medianet_versionId = "111299";
        (function() {
          var isSSL = 'https:' == document.location.protocol;
          var mnSrc = (isSSL ? 'https:' : 'http:') + '//contextual.media.net/nmedianet.js?cid=8CUFP6TTD' + (isSSL ? '&https=1' : '');
          document.write('<scr' + 'ipt type="text/javascript" id="mNSC" src="' + mnSrc + '"></scr' + 'ipt>');
        })();
      </script>
    </div>

  </footer>

  <div id="comments">
		<?php print render($content['comments']); ?>
  </div>
	
</div>