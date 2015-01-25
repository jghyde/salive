<?php print $wrapper_prefix; ?>
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <ul >
	<?php 
		$group_nr = 1;                  // first group number
		$last_row = count($rows) -1;    // last row
		$wrapper  = 4;                  // put a wrapper around every 3 rows
	?>
	<?php foreach ($rows as $id => $row): ?>
		<?php if ($id % $wrapper == 0) {print '<div class="group-'.$group_nr.' clearfix">'; $i = 0; $group_nr++; } ?>
    <div class="views-row-<?php print $id+1; ?>">
      <li class="<?php print $classes_array[$id]; ?>"><?php print $row; ?></li>
    </div>
		<?php $i++; if ($i == $wrapper || $id == $last_row) print '</div><div class="col-md-12 news-insert"><div class="ads"><script type="text/javascript">broadstreet.zone(40354);</script></div></div>'; ?>
	<?php endforeach; ?>
  </ul>
<?php print $wrapper_suffix; ?>
