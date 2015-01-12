<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
$i = 1;
$items = array();
?>
<?php foreach ($rows as $id => $row): ?>
  <div class="slide">
    <?php print $row; ?>
  </div>
<?php endforeach; ?>