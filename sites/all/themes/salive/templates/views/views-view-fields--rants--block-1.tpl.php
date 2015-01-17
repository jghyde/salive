<?php
$link = l($row->comment_subject, 'node/' . $row->node_comment_nid, array('fragment' => 'comment-' . $row->cid));
?>
<h4 class="comment-block"><?php print $link; ?></h4><span class="comment-author">by <?php print $fields['name']->content; ?></span>
<p class="comment-node">in <?php print $fields['title']->content; ?></p>

