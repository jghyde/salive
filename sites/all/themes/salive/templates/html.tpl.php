<!DOCTYPE html>
<html lang="<?php print $language->language; ?>">
<head>
  <meta charset="utf-8">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
<<<<<<< HEAD
  <!--[if lt IE 8]>
    <meta http-equiv="refresh" content="0;URL=http://sanangelolive.com/ie.php">
  <![endif]-->
  <!--[if lt IE 9]>
=======
	<!--[if lt IE 8]>
    <meta http-equiv="refresh" content="0;URL=http://sanangelolive.com/ie.php">
  <![endif]-->
  <!--[if lt IE 9]>
    <meta http-equiv="refresh" content="0;URL=http://sanangelolive.com/ie.php">
>>>>>>> c7dd4bf274688cce58a47432142ed4be8e864fb3
    <script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->
  <?php print $scripts; ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
