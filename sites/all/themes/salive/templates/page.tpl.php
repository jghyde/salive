<div class="layout">
	
	<?php if ($page['pushmenu']): ?>
	  <?php print render($page['pushmenu']); ?>
	<?php endif; ?>
	
	<?php include 'page.header.inc'; ?>
	
	<div id="main-content" class="container messages">
		<div class="row clearfix">
		
	  	<?php if ($messages): ?>
	      <div id="messages">
	        <?php print $messages; ?>
	      </div> <!-- /#messages -->
	    <?php endif; ?>
      <?php if ($breadcrumb): ?>
        <div id="breadcrumb"><?php print $breadcrumb; ?></div>
      <?php endif; ?>
	    <div id="content" class="<?php print $main_grid_class;?>">

		    <div class="content-inner">
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
		      <?php if ($page['content_top']): ?>
		      <div id="content-top">
			      <?php print render($page['content_top']); ?>
			    </div>
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
      <div id="sidebar" class="<?php print $sidebar_grid_class; ?>">
        <?php if ($page['sidebar']): print render($page['sidebar']); endif; ?>
	   	  <?php if ($page['sidebar_bottom']): print render($page['sidebar_bottom']); endif; ?>
      </div><!-- /#sidebar -->
	    <?php endif; ?>
	    
		</div>

	</div>

</div>
<?php include 'page.footer.inc'; ?>