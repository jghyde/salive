<div class="<?php print $classes; ?> clearfix" <?php print $attributes; ?>>
<?php foreach ($items as $delta => $item): ?>
<div class="field-item">
<a href="<?php print render($item); ?>" target="_blank" class="clearfix pull-right btn-lg btn btn-success"><i class="white glyphicons pen" style="margin-top:-25px;padding-left:35px;margin-left:-5px;"></i>Write Your Tribute</a>
</div>
<?php endforeach; ?>
</div>
