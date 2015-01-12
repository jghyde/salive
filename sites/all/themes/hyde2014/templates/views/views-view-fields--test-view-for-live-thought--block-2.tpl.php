<div class="thumbnail">
  <?php print $fields['field_image']->content; ?>
</div>
  <h3><?php print $fields['node-title']->content; ?></h3>
<div class="views-list-words" style="margin-bottom:3em;">
  <?php print $fields['title']->content; ?>
  <div class="authorship">
    <p class="author">by <?php print l($fields['field_first_name']->content . ' ' . $fields['field_last_name']->content, 'user/' . $fields['uid']->content); ?></p>
    <p class="published-date"><?php print $fields['created']->content; ?></p>
  </div>
  <?php print $fields['body']->content; ?>
  <?php
  $items = array(
    $fields['view_node']->content,
    $fields['edit_node']->content,
    $fields['delete_node']->content,
  );
  print '<div class="views-list-links">' . theme('item_list', array('items' => $items)) . '</div>';

  ?>