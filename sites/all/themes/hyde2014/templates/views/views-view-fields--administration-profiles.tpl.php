<div class="pull-left img-polaroid">
  <?php print $fields['field_profile_picture']->content; ?>
</div>
<div class="media-body">
  <h2 class="media-heading"><?php print $fields['field_first_name']->content; ?> <?php print $fields['field_last_name']->content; ?></h2>
  <p><?php print $fields['field_short_bio']->content; ?></p>
  <ul class="inline social-icons">
    <?php (!empty($fields['field_facebook_url']->content) ? print '<li>' . $fields['field_facebook_url']->content . '</li>' : null); ?>
    <?php (!empty($fields['field_twitter_url']->content) ? print '<li>' . $fields['field_twitter_url']->content . '</li>': null); ?>
    <?php (!empty($fields['field_linkedin_url']->content) ? print '<li>' . $fields['field_linkedin_url']->content . '</li>': null); ?>
    <?php (!empty($fields['field_google_plus_url']->content) ? print '<li>' . $fields['field_google_plus_url']->content . '</li>': null); ?>   
  </ul>
</div>