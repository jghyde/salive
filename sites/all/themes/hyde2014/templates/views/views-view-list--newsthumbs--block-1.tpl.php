  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
<ul class="thumbnails">
<?php foreach ($rows as $id => $row): ?>
  <li class="span4"><?php print $row; ?></li>
<?php endforeach; ?>
</ul>

