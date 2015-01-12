<?php
/**
 * Live Breaking Block template
 * Variables:
 * array $breaking_items
 * An array of breaking items to scoll
 */
?>
<?php
if (isset($breaking_items) && count($breaking_items) > 0) {
  $i = 0;
  $first = '';
  print '<div class="breaking" id="fade">';
  foreach ($breaking_items as $item) {
    if ($i == 0) {
      $first = ' first';
    }
    print '<div class="livebreaking-item ' . $item['type'] . $first;
    print '"><div class="container"><div class="col-md-9">';
    print '<i class="glyphicons ' . $item['type'] . ' white"></i>';
    print $item['title'];
    print '</div><div class="col-md-3"><script type="text/javascript">broadstreet.zone(35189);</script></div></div></div>';
    $i++;
    $first = '';
  }
  print '</div>';
}
