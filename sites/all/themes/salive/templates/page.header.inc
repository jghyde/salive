<div id="header" class="clearfix">
  <div class="container clearfix">
    <?php if ($logo): ?>
      <div id="logo" class="col-md-4">
        <a href="<?php print $front_page; ?>" title="<?php print $site_name; ?>" rel="home">
          <img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>" />
        </a>
        <br />
        <?php if ($site_slogan): ?>
          <span class="slogan">
            <h1><?php print $site_name; ?><br /><?php print $site_slogan; ?></h1>
            <noscript><h2>#WRSA</h2></noscript>
          </span>
        <?php endif; ?>
      </div>
    <?php endif; ?>

    <?php if (!empty($page['header_ads'])): ?>
        <div class="col-md-7 header-ads">
          <?php print render($page['header_ads']);?>
        </div>
    <?php endif; ?>
  </div>

    <div id="nav">
      <div class="container">
				<?php if (!empty($page['superfish'])): print render($page['superfish']); endif; ?>
      </div><!-- /.wrap -->
      <?php if (!empty($page['superfish'])): ?><div class="subnav"></div><?php endif; ?>        
    </div><!-- /#nav -->

  <?php
		if (!empty($page['breaking'])) {
			print render($page['breaking']);
		}
	?>
</div><!-- /#header -->