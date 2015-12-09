  <div class="media-left media-top">
    <?php print $fields['field_image']->content; ?>
  </div>
  <div class="media-body">
    <h4 class="media-heading"><?php print $fields['title']->content; ?></h4>
    <p>
    <?php if (!empty($fields['field_date']->content)):
    //strip out <div> and </div>
      $fields['field_date_1']->content = strip_tags($fields['field_date_1']->content);
      print '<strong>When:</strong> ' . $fields['field_date_1']->content;
    endif; ?> 
    </p>
    <p><strong>Where:</strong> <?php print $fields['field_venue']->content; ?></p>
    <p><?php print $fields['nothing']->content; ?></p>
  </div>
  