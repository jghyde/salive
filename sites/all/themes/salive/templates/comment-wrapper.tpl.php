<div id="comments" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if ($content['comments'] && $node->type != 'forum'): ?>
    <?php print render($title_prefix); ?>
    <h2 class="title"><?php print t('Rants'); ?></h2>
    <?php print render($title_suffix); ?>
  <?php endif; ?>
  <?php print render($content['comments']); ?>
  <h2 class="title comment-form"><?php print t('Post a Rant'); ?></h2>
  <?php if ($content['comment_form']): ?>
    <?php print render($content['comment_form']); ?>
  <?php endif; ?>
</div>
