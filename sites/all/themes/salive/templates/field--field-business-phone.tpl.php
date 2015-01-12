<div class="<?php print $classes; ?>" <?php print $attributes; ?>>
<?php foreach ($items as $delta => $item) : ?>
<div class="field-item pull-right"><a href="tel:<?php print render($item); ?>" class="btn btn-default btn-lg active"><i class="glyphicons phone_alt" style="margin-top: -25px;"></i><?php print render($item); ?></a></div>
<?php endforeach; ?>
</div>
