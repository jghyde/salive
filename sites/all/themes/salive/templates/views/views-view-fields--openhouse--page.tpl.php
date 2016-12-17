<?php
// custom template for open house page
?>

<?php
print $fields['field_property_images']->content;
?>

<div class="media-body">
    <h4 class="media-heading"><?php print $fields['title']->content; ?></h4>
    <p><strong>Asking</strong> <?php print $fields['field_asking']->content; ?></p>
    <p><?php print $fields['field_openhouse_date']->content; ?> <?php print $fields['view_node']->content; ?></p>
</div>
