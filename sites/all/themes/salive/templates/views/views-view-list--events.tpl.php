  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
<ul class="thumbnails clearfix">
<?php foreach ($rows as $id => $row): ?>
  <li class="col-md-3"><?php print $row; ?></li>
<?php endforeach; ?>
</ul>