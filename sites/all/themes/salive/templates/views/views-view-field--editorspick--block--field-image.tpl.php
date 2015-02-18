<?php
if ($row->node_updated == 1) {
  $image = array(
		'style_name' => 'i640x360_updated',
		'path' => $row->field_field_image[0]['raw']['uri'],
		'width' => $row->field_field_image[0]['raw']['width'],
		'height' => $row->field_field_image[0]['raw']['height'],
		'alt' => $row->field_field_image[0]['raw']['alt'],
		'title' => $row->field_field_image[0]['raw']['title'],
	);
} else {
  $image = array(
		'style_name' => 'i640x360',
		'path' => $row->field_field_image[0]['raw']['uri'],
		'width' => $row->field_field_image[0]['raw']['width'],
		'height' => $row->field_field_image[0]['raw']['height'],
		'alt' => $row->field_field_image[0]['raw']['alt'],
		'title' => $row->field_field_image[0]['raw']['title'],
	);
}
$styled = theme('image_style', $image);
print l($styled, 'node/'. $row->nid, Array('html' =>TRUE,));
?>