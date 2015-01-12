<?php
if (count($title_suffix) > 0) {
  $classt = ' subhead';
}
else {
  $classt = '';
}
?>
<header id="navbar" role="banner" class="navbar navbar-inverse">
  <?php if (!empty($page['navigation'])): ?>
    <?php print render($page['navigation']); ?>
  <?php endif; ?>
  <div class="navbar-inner">
    <div class="container">
      <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
      <a class="btn btn-navbar" data-toggle="collapse" data-target=".nav-collapse">
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </a>

      <?php if (!empty($logo)): ?>
        <a class="logo pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
        </a>
      <?php endif; ?>

      <?php if (!empty($site_name)): ?>
        <h1 id="site-name">
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="brand"><?php print $site_name; ?></a>
        </h1>
      <?php endif; ?>

      <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
        <div class="nav-collapse collapse">
          <nav role="navigation">
            <?php if (!empty($primary_nav)): ?>
              <?php print render($primary_nav); ?>
            <?php endif; ?>
            <?php if (!empty($secondary_nav)): ?>
              <?php print render($secondary_nav); ?>
            <?php endif; ?>
          </nav>
        </div>
      <?php endif; ?>
    </div>
  </div>
</header>
<?php
if ($is_front == 1) {
  if (!empty($page['home_slider'])) {
?>
<div class="iosSlider-wrapper clearfix">
  <?php print render($page['home_slider']); ?>
</div> 
<?php   
  }
}
?>
<div class="main-container-wrapper">
  <div class="main-container container">
    <div class="inner">
      <header role="banner" id="page-header">
        <?php if (!empty($site_slogan)): ?>
          <p class="lead"><?php print $site_slogan; ?></p>
        <?php endif; ?>
    
        <?php print render($page['header']); ?>
      </header> <!-- /#header -->
    
      <div class="row-fluid">
<?php
// If there is a form for the right rail, modify the Bootstrap classes
$right_rail = render($page['right_form']);
if (!empty($right_rail)) {
  $content_class = 'span9';
}
else {
  $content_class = 'span12';
}
?>
        <section class="<?php print $content_class; ?>">  
          <?php if (!empty($page['highlighted'])): ?>
            <div class="highlighted hero-unit"><?php print render($page['highlighted']); ?></div>
          <?php endif; ?>
          <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
          <a id="main-content"></a>
          <?php print render($title_prefix); ?>
          <?php if (!empty($title)): ?>
            <h1 class="page-header<?php print $classt; ?>"><?php print $title; ?></h1>
          <?php endif; ?>
          <?php print render($title_suffix); ?>
          <?php print $messages; ?>
          <?php if (!empty($tabs)): ?>
            <?php print render($tabs); ?>
          <?php endif; ?>
          <?php if (!empty($page['help'])): ?>
            <div class="well"><?php print render($page['help']); ?></div>
          <?php endif; ?>
          <?php if (!empty($action_links)): ?>
            <ul class="action-links"><?php print render($action_links); ?></ul>
          <?php endif; ?>
          <?php print render($page['content']); ?>
        </section>
        <?php if (!empty($page['form-below-content'])): ?>
        <div class="form-below-content">
          <?php print render($page['form-below-content']); ?>
        </div>
        <?php endif; ?>
<?php
if ($content_class == 'span9'):
?>
        <section class="span3">
          <?php print $right_rail; ?>
        </section>
<?php  endif; ?>
      </div>
    </div>
  </div>
  <?php if (!empty($page['bottom_leaderboard'])): ?>
    <div class="region bottom-leader">
      <?php print render($page['bottom_leaderboard']); ?>
    </div>
  <?php endif; ?>
</div>
<div class="footer-wrapper clearfix">
  <footer class="footer container">
    <?php
    if (!empty($page['postscript1'])): ?>
    <section class="row postscript">
      <div class="span3 region region-postscript1">
        <?php print render($page['postscript1']); ?>
      </div>
      <div class="span6 region region-postscript2">
        <?php print render($page['postscript2']); ?>
      </div>
      <div class="span3 region region-postscript3">
        <?php print render($page['postscript3']); ?>
      </div>
    </section>  
    <?php endif; ?>
    <?php print render($page['footer']); ?>
  </footer>
</div>
