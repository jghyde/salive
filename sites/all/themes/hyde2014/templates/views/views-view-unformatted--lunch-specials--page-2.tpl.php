<?php foreach ($rows as $id => $row): ?>
  <div id="node-<?php print $view->result[$id]->nid; ?>" class="clearfix">
    <?php print $row; ?>
  </div>
<?php endforeach; ?>

