<?php
if ($field->original_value == 0 || $field->original_value == '') {
  $fields['field_radioactivity']->content = 'Cool';
}
elseif ((int)$field->original_value > 10000) {
  $field->original_value = (int)$field->original_value/10000;
  $field->original_value = $field->original_value . ' x 10<sup>4</sup>';
}
?>
<div class="text-center"><h4><small><i class="glyphicons fire iconFix"></i><?php print $field->original_value; ?></small></h4></div>