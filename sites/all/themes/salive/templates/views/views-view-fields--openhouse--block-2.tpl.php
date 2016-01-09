<?php
// custom template for open house page
?>
<tr valign="top">
  <td valign="top" width="195">
    <?php print $fields['field_property_images']->content; ?>
  </td>
  <td valign="top">
    <h4 class="media-heading"><?php print $fields['title']->content; ?></h4>
    <p style="margin: 0;"><strong>Asking</strong> <?php print $fields['field_asking']->content; ?></p>
    <p style="margin:0;"><?php print $fields['field_openhouse_date']->content; ?> <?php print $fields['view_node']->content; ?></p>
  </td>
</tr>
