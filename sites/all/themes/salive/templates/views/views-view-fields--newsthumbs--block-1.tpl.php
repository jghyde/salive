<div class="image-wrapper">
  <div class="thumbnail"><?php print $fields['field_image']->content; ?></div>

  <?php if (!empty($fields['field_date']->content)):
  //strip out <div> and </div>
    $fields['field_date']->content = strip_tags($fields['field_date']->content);
  endif; ?>  
  <p class="bottom-wrapper"><?php print $fields['field_date']->content; ?></p>
</div>
<div class="text-center date"><h6><?php print $fields['field_date_1']->content; ?></h6></div>
<h4><?php print $fields['title']->content; ?></h4>  
<?php if (!empty($fields['field_venue']->content)): ?>
 <?php print $fields['field_venue']->content; ?></p>
<?php endif; ?>