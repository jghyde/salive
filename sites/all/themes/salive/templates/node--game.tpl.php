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
if (isset($field_evrybit[0]['value'])) {
  $evrybit = l(' <em><strong>LIVE!</strong> Stream</em> <span class="glyphicons facetime_video"></span>', 'node/' . $node->nid, array('html' => TRUE));
}
else {
  $evrybit = '';
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
  <?php
  $quarter = $content['field_game_quarter'][0]['#markup'];
  if (empty($content['field_game_quarter'][0]['#markup']) || !isset($content['field_game_quarter'][0]['#markup'])) {
    $quarter = 'Before Kickoff';
  }
  ?>

<table class="table table-striped">
<tr>
<th class="game-team">Team (<?php print $quarter; ?>)<?php print  ' ' . $evrybit; ?></th>
<?php if ($content['field_final_score'][0]['#markup'] == 1) {
  $tclass= 'success';
}
else {
  $tclass = 'info';
}

  //create the ad slots
  $ad_visitor = strtolower($content['field_visiting_team'][0]['#markup']);
  $ad_home = strtolower($content['field_home_team'][0]['#markup']);
  $ad_visitor = preg_replace('/\s+/', '', $ad_visitor);
  $ad_home = preg_replace('/\s+/', '', $ad_home);
?>
<th class="<?php print $tclass; ?>"><?php print $total; ?></th>
</tr>
<tr>
<td class="game-visitor"><?php print $content['field_visiting_team'][0]['#markup']; ?> (Visitor)</td>
<td class="<?php print $tclass; ?>" width="30%"><?php print (($vscore == '' || $vscore === 0) ? '0' :$vscore); ?></td
</tr>
<tr>
<td class="game-home"><?php print $content['field_home_team'][0]['#markup']; ?> (Home)</td>
<td class="<?php print $tclass; ?>" width="30%"><?php print (($hscore == '' || $hscore === 0) ? '0' :$hscore); ?></td>
</tr>
  <tr>
    <td colspan="2">
      <div class="football-home pull-left">
        <?php
        $block = module_invoke('dfp', 'block_view', 'fb_' . $ad_home);
        print render($block['content']);
        ?>
      </div>
      <div class="football-visitor pull-left">
        <?php
        $block = module_invoke('dfp', 'block_view', 'fb_' . $ad_visitor);
        print render($block['content']);
        ?>
      </div>
    </td>
  </tr>
</table>
<div class="status">
This score last updated at <?php print date('M j, Y \a\t h:i', $node->revision_timestamp) . ' '; ?>
<?php if ($is_admin): ?>
<?php
$revision_author = user_load($revision_uid);
print  ' by ' . $revision_author->name;

if (!$page) {
  print ' ' . l('Edit', 'node/' . $node->nid . '/edit', array('query' => array('destination' => 'scores-new' )));
}
endif;
?>
</div>
<?php
if ($page) {
  if (isset($field_evrybit[0]['value']) && !empty($field_evrybit[0]['value'])) {
    print '<h3>LIVE! Stream of Game</h3>';
    print $field_evrybit[0]['value'];
  }
}
?>

</article> <!-- /.node -->


