<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>><?php print render($title_prefix); ?>  <?php if (!$page): ?>    <h2<?php print $title_attributes; ?>>      <a href="<?php print $node_url; ?>"><?php print $title; ?></a>    </h2>  <?php endif; ?>  <?php print render($title_suffix); ?>    <div class="node-content clearfix"<?php print $content_attributes; ?>>    <?php      // We hide the comments and links now so that we can render them later.      hide($content['comments']);      hide($content['links']);      print render($content);    ?>  </div>      <?php if ($display_submitted): ?>    <div class="meta submitted clearfix">      <?php print $submitted; ?>    </div>  <?php endif; ?>  <div id="medianet">    <script id="mNCC" language="javascript">      var w = document.getElementById("medianet").offsetWidth;      var bannerwidth = 300;      if (w > 599) {        bannerwidth=600;      }      medianet_width = bannerwidth;      medianet_height = "250";      medianet_crid = "148244274";      medianet_versionId = "111299";      (function() {        var isSSL = 'https:' == document.location.protocol;        var mnSrc = (isSSL ? 'https:' : 'http:') + '//contextual.media.net/nmedianet.js?cid=8CUFP6TTD' + (isSSL ? '&https=1' : '');        document.write('<scr' + 'ipt type="text/javascript" id="mNSC" src="' + mnSrc + '"></scr' + 'ipt>');      })();    </script>  </div>  <?php    // Remove the "Add new comment" link on the teaser page or if the comment    // form is being displayed on the same page.    if ($teaser || !empty($content['comments']['comment_form'])) {      unset($content['links']['comment']['#links']['comment-add']);    }    // Only display the wrapper div if there are links.    $links = render($content['links']);    if ($links):  ?>    <div class="link-wrapper">      <?php print $links; ?>    </div>  <?php endif; ?>  <?php print render($content['comments']); ?></div>