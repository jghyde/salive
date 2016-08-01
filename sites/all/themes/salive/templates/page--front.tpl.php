
<?php include 'page.header.inc'; ?>
<div class="container messages">
	<div class="col-md-12">
  <?php if ($messages): ?>
  <div id="messages">
    <?php print $messages; ?>
  </div> <!-- /#messages -->
  <?php endif; ?>
	
	<?php if ($page['slider'] || $page['headlines'] || $page['headlines_ad']): ?>
		<div id="spotlight">
			<div class="row clearfix">
			<?php if ($page['slider']): ?>
				<div id="slider" class="col-md-9 col-sm-12 match">
					<?php print render($page['slider']); ?>
				</div> <!-- /#slider -->
			<?php endif; ?>

			<?php if ($page['headlines_ad']): ?>
				<div id="headlines_ads" class="col-md-3 col-sm-12 match">
					<?php print render($page['headlines_ad']); ?>
				</div> <!-- /#headlines -->
			<?php endif; ?>
			</div>
		</div><!-- /#spotlight -->
	<?php endif; ?>
	</div>
</div>
<?php if ($page['editorspick']): ?>
<div class="container editor">
	<div id="editorspick clearfix">
		<div class="col-md-12">
			<?php print render($page['editorspick']); ?>
		</div>
	</div> <!-- #editorspick -->
</div>
<?php endif; ?>
<div class="container page">
  <div id="content" class="<?php print $main_grid_class;?> clearfix">
    <div class="content-inner">
			<?php if ($breadcrumb): ?>
        <div id="breadcrumb"><?php print $breadcrumb; ?></div>
      <?php endif; ?>
      <?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="title" id="page-title">
          <?php print $title; ?>
        </h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php if ($tabs): ?>
        <div class="tabs">
          <?php print render($tabs); ?>
        </div>
      <?php endif; ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links">
          <?php print render($action_links); ?>
        </ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php if ($page['content_bottom']): ?>
      <div id="content-bottom">
	      <?php print render($page['content_bottom']); ?>
	    </div>
	    <?php endif; ?>
  	</div>
  </div><!-- /#content -->  
  <?php if ($page['sidebar'] || $page['sidebar_bottom']): ?>
  <div id="sidebar" class="<?php print $sidebar_grid_class; ?> clearfix">
    <?php if ($page['sidebar']): print render($page['sidebar']); endif; ?>
    <div class="clearfix">
      <?php if ($page['sidebar_col1']): ?>
        <div id="sidebar-col1">
          <?php print render($page['sidebar_col1']); ?>
        </div> <!-- /#sidebar-col1 -->
      <?php endif; ?>
      <?php if ($page['sidebar_col2']): ?>
        <div id="sidebar-col2">
          <?php print render($page['sidebar_col2']); ?>
        </div> <!-- /#sidebar-col2 -->
      <?php endif; ?>
    </div>
    <?php if ($page['sidebar_bottom']): print render($page['sidebar_bottom']); endif; ?>
  </div><!-- /#sidebar -->
  <?php endif; ?>
</div>

	<?php include 'page.footer.inc'; ?>

</div>
