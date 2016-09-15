<?php print $wrapper_prefix; ?>
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <ul >
	<?php 
		$group_nr = 1;
		$last_row = count($rows) -1;
		$wrapper  = 4;
	?>
	<?php foreach ($rows as $id => $row): ?>
      <li class="<?php print $classes_array[$id]; ?> col-md-6"><?php print $row; ?></li>
	<?php endforeach; ?>
  </ul>
<?php print $wrapper_suffix; ?>
