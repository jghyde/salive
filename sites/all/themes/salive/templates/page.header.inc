<div id="header" class="clearfix">
	<?php
	if (!empty($page['breaking'])) {
		print render($page['breaking']);
	}
	?>
  <div class="container clearfix">
    <?php if ($logo): ?>
      <div id="logo" class="col-md-2 col-sm-12">
        <h1 id="site-title"><?php print $site_name; ?></h1>
        <a href="<?php print $front_page; ?>" title="<?php print $site_name; ?>" rel="home">
          <img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>" />
        </a>
        <?php if ($site_slogan): ?>
          <p class="slogan">
            <?php print $site_slogan; ?>
          </p>
        <?php endif; ?>
      </div>
    <?php endif; ?>

    <?php if (!empty($page['header_ads'])): ?>
        <div class="col-md-10 col-sm-12 header-ads">
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
</div><!-- /#header -->