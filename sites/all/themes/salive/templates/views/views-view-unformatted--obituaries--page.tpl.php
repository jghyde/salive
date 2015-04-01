<?php if (!empty($title)) : ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>

<?php 
  $group_nr = 1;
  $last_row = count($rows) -1;
  $wrapper  = 6;
?>

<?php foreach ($rows as $id => $row): ?>
  <?php if ($id % $wrapper == 0) {print '<div class="group-'.$group_nr.' clearfix">'; $i = 0; $group_nr++; } ?>
  <div class="views-row-<?php print $id+1; ?>">
    <div class="<?php if ($classes_array[$id]) { print $classes_array[$id];  } ?>"><?php print $row; ?></div>
  </div>
  <?php $i++; if ($i == $wrapper || $id == $last_row) print '</div><div class="col-md-12 news-insert"><div class="ads"><!-- SALive_BL_Obit --><div id="div-gpt-ad-1425500431462-30'.$group_nr.'"><script type="text/javascript">googletag.display("div-gpt-ad-1425500431462-30'.$group_nr.'");</script></div></div></div>'; ?>
<?php endforeach; ?>
