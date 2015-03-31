<!DOCTYPE html>
<html lang="<?php print $language->language; ?>">
<head>
  <title>Performing Maintenance | San Angelo LIVE!</title>
  <meta name="viewport" content="width=device-width, initial-scale=1" />
  <link href="/sites/all/themes/salive/css/maintenance.css" rel="stylesheet" type="text/css">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.4/css/bootstrap.min.css">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.4/css/bootstrap-theme.min.css">
  <link rel="stylesheet" href="//maxcdn.bootstrapcdn.com/font-awesome/4.3.0/css/font-awesome.min.css">
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.4/js/bootstrap.min.js"></script>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>

  <div id="header">
	<div class="section">
	  <div id="site-logo-and-name">
		<?php if ($logo): ?>
		  <img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>" />
		<?php endif; ?>
	  </div> <!-- /#site-logo-and-name -->
	</div> <!-- /.section -->
  </div> <!-- /#header -->
  
  <div id="page-wrapper">
    <div id="page">
      <div id="main">
        <?php print $messages; ?>
        <div id="content">
          <?php print render($page['help']); ?>
          <?php print $content; ?>
        </div> <!-- /#content -->
      </div> <!-- /#main -->
    </div> <!-- /#page -->
  </div> <!-- /#page-wrapper -->
  <div id="footer">
    <div id="footerleft">
      San Angelo LIVE! &bull; Hyde Interactive <br /> &copy; <?php print date('Y'); ?> Copyright &bull; All Rights Reserved
    </div>
  </div>

</body>
</html>
