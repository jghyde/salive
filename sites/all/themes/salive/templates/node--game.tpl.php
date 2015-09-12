<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <header>
  <?php if (!$page): ?>
  <h3><?php print l($title, 'node/' . $node->nid); ?></h3>
  <?php endif; ?>
  </header>
<?php
$total = 'Total';
if ($content['field_final_score'][0]['#markup'] == 1) {
  $total = 'Final';
}
$home_override = '';
$visitor_override = '';
if ($content['field_home_override'][0]['#markup'] > 0) {
  $home_override = ' override';
  $hscore = $content['field_home_override'][0]['#markup'];
}
else {
  $hscore = $content['field_home_total'][0]['#markup'];
}
if ($content['field_visit_override'][0]['#markup'] > 0) {
  $visitor_override = ' override';
  $vscore = $content['field_visit_override'][0]['#markup'];
}
else {
  $vscore = $content['field_visitors_total'][0]['#markup'];
}

?>
<?php if ($page): ?>
<?php foreach ((array)$field_image as $item) { ?>
<div class="game-image text-center">
<?php $file = file_load($node->field_image['und'][0]['fid']); ?>
<img alt="<?php print $title; ?>" src="<?php print file_create_url($file->uri); ?>" />
</div>
<?php } ?>
<?php endif; ?>
<table class="table table-striped">
<tr>
<th class="game-team">Team in <?php print $content['field_game_quarter'][0]['#markup']; ?></th>
<th class="success"><?php print $total; ?></th>
</tr>
<tr>
<td class="game-visitor"><?php print $content['field_visiting_team'][0]['#markup']; ?></td>
<td class="success" width="30%"><?php print (($vscore == '' || $vscore === 0) ? '0' :$vscore); ?></td
</tr>
<tr>
<td class="game-home"><?php print $content['field_home_team'][0]['#markup']; ?></td>
<td class="success" width="30%"><?php print (($hscore == '' || $hscore === 0) ? '0' :$hscore); ?></td>
</tr>
</table>
<?php if ($is_admin): ?>
<?php
$revision_author = user_load($revision_uid);
?>
<div class="status">
Last revised at <?php print date('M j, Y \a\t h:i', $node->revision_timestamp); ?> by <?php print $revision_author->name; ?>
</div>
<?php
if (!$page) {
  print l('Edit', 'node/' . $node->nid . '/edit', array('query' => array('destination' => 'scores-new' )));
}
?>
<?php endif; ?>
</article> <!-- /.node -->


