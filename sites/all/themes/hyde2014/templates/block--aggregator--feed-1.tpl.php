<section id="<?php print $block_html_id; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
  <?php endif;?>
  <?php print render($title_suffix); ?>

  <?php print $content ?>
  <div id="jobnetwork-buttons">
    <a class="btn btn-danger pull-left" href="http://jobs.sanangelolive.com/adminnet/employer/marketing/2881" target="_blank">Post a Job</a>
    <a class="btn btn-inverse pull-left" href="http://jobs.sanangelolive.com/register/step1" target="_blank">Find a Job</a>
  </div>
  
</section> <!-- /.block -->
