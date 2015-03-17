<li class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <h4 class="title"<?php print $title_attributes; ?>>
    <a href="<?php print $url; ?>"><?php print $title; ?></a>
  </h4>
  <?php print render($title_suffix); ?>
  <div class="search-snippet-info">
    <?php
      $ntype = $result['type'];
      $author = $result['node']->uid;
      if (in_array('administrator', $author->roles)) {
        $account = profile2_load_by_user($result['node']->uid, 'main_profile_admin');
      } else {
        $account = profile2_load_by_user($result['node']->uid, 'main');
      }
      $name = ($account->field_first_name[LANGUAGE_NONE][0]['safe_value'] ? $account->field_first_name[LANGUAGE_NONE][0]['safe_value'] . ' ': '');
      $name .= ($account->field_last_name[LANGUAGE_NONE][0]['safe_value'] ? $account->field_last_name[LANGUAGE_NONE][0]['safe_value'] : '');
      if (in_array('administrator', $author->roles)) {
        $title = ($account->field_job_title[LANGUAGE_NONE][0]['safe_value'] ? $account->field_job_title[LANGUAGE_NONE][0]['safe_value'] : '');
      } elseif (in_array('Past Employee', $author->roles)) {
        $title = t('Former Correspondent');
      } else {
        $title = t('Contributor');
      }
      $date = date('M. j, Y g:i a', $result['node']->created);
      ?>
    <p class="search-info"><?php print '<h4><small>' . $ntype . ' - ' . $name . ' - ' . $date .'</small></h4>'; ?></p>
  </div>
</li>