<div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <h3<?php print $title_attributes; ?>><?php print $title; ?></h3>
  <?php endif;?>
  <?php print render($title_suffix); ?>
	<div class="blcontent clearfix">
  <?php print $content ?>
  <div id="jobnetwork-buttons">
    <a class="btn btn-danger active pull-left" href="http://jobs.sanangelolive.com/adminnet/employer/marketing/2881" target="_blank">Post a Job</a>
    <a class="btn btn-default active pull-right" href="http://jobs.sanangelolive.com/register/step1" target="_blank">Find a Job</a>
  </div>
	</div>
  
</div> <!-- /.block -->
