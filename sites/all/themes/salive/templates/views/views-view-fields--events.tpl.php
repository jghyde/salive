<div class="thumbnail">
  <div class="image-wrapper">
    <?php print $fields['field_image']->content; ?>

    <?php if (!empty($fields['field_date']->content)):
    //strip out <div> and </div>
      $fields['field_date_1']->content = strip_tags($fields['field_date_1']->content);
    endif; ?>  
    <p class="bottom-wrapper"><?php print $fields['field_date_1']->content; ?></p>
  </div>
  <h4><?php print $fields['title']->content; ?></h4>  
  <?php if (!empty($fields['field_venue']->content)): ?>
   <?php print $fields['field_venue']->content; ?></p>
  <?php endif; ?>
</div>