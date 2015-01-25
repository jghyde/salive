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
  print '<div id="breakingFade" class="breaking cycle-slideshow" 
    data-cycle-timeout="4500"
    data-cycle-slides="> div"
    >';
  foreach ($breaking_items as $item) {
    if ($i == 0) {
      $first = ' first';
    }
    print '<div class="livebreaking-item ' . $item['type'] . $first;
    print '"><div class="container"><div class="col-md-9">';
    print '<i class="glyphicons ' . $item['type'] . ' white"></i>';
    print $item['title'];
    print '</div><div class="col-md-3 ads"><a href="//ad.broadstreetads.com/zone_static/40362/click/0"><img src="//ad.broadstreetads.com/zone_static/40362/image/0"/></a></div></div></div>';
    $i++;
    $first = '';
  }
  print '</div>';
}


