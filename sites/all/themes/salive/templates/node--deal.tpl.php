<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <header>
    <?php if (!$page && $title): ?>
    <?php print render($title_prefix); ?>   
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php print render($title_suffix); ?>
    <?php endif; ?>
    <?php if ($page): ?>
      <div id="coupon-header">
        <div class="span6 header-image">
          <?php print render($content['field_image']); ?>
        </div>
        <div class="span6 header-title">
          <h2><?php print $title; ?></h2>
          <?php if (!empty($content['field_subtitle'])): ?>
          <h4 class="deal-subtitle"><?php print render($content['field_subtitle']); ?></h4>
          <?php endif; ?>
          <?php print render($content['livedeal_button']); ?>
          <p class="coupons-left"><?php print $field_number_of_coupons_left[0]['value']; ?> coupons left</p>
        </div>
      </div>
    <?php endif; ?>
  </header>
  <?php if ($page): ?>
    <h4>To redeem this coupon, click on the red "claim" button above.</h4>
    <p></p>When you do, this webpage will email you the coupon. Present the email with the coupon
    at the store by showing the cashier or salesperson the email on your smartphone. Or, you may print the email and present the printed coupon at the point-of-purchase. If the button above is grayed-out, you have previously redeemed the coupon.</p>
    <?php print render($content['field_deal_end_date']); ?>
    <?php print render($content['body']); ?>
    <?php print render($content['field_terms_and_conditions']); ?>
    <?php print render($content['field_venue']); ?>
  <?php else: ?>
  <?php
    // Hide comments, tags, and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_tags']);
    print render($content);
  ?>
  <?php endif; ?>
  <?php if (!empty($content['field_tags']) || !empty($content['links'])): ?>
    <footer>
      <?php print render($content['field_tags']); ?>
      <?php print render($content['links']); ?>
    </footer>
  <?php endif; ?>

</article> <!-- /.node -->
