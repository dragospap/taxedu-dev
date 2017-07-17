<?php

/**
 * @file
 *
 * Theme implementation: Template for forum topic header.
 *
 * - $node: Node object.
 * - $search: Search box to search this topic (Requires Node Comments)
 * - $reply_link: Text link / button to reply to topic.
 * - $total_posts_count: Number of posts in topic.
 * - $new_posts_count: Number of new posts in topic.
 * - $first_new_post_link: Link to first unread post.
 * - $last_post_link: Link to last post.
 * - $pager: Topic pager.
 */


?>
<div id="topic_header" class="pattern_blue_light_small">
    <div class="row top">
        <div class="row google">
        <?php
          $block = block_load('cc_blocks', 'google_translate_tab');
          $block = _block_get_renderable_array(_block_render_blocks(array($block)));
          print render($block);
        ?>
        </div>
        <div class="row page_title header_title"><?php echo $node->title; ?></div>
    </div>
</div>
<div class="row breadcrumb">
    <?php
      $breadcrumb = drupal_get_breadcrumb();
      $breadcrumb[]=$node->title;
      echo  theme('breadcrumb',array('breadcrumb'=>$breadcrumb));
    ?>
</div>
<div id="forum-topic-header" class="row forum-topic-header clearfix">
	<?php if (!empty($search)): ?>
	  <?php print $search; ?>
  <?php endif; ?>
    <?php if (!empty($last_post_link)): ?>
        <div class="last-post-link">
            <?php print $last_post_link; ?>
        </div>
    <?php endif; ?>

  <div class="topic-post-count">
  <?php print $total_posts_count-1; echo ' REPLY'; ?>
  <div class="new_post">
  <?php print t('!new NEW', array('!new' => $new_posts_count)); ?>
  </div>
  </div>


  <?php if (!empty($reply_link)): ?>
    <div class="topic-reply-link">
    <?php print $reply_link; ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($first_new_post_link)): ?>
    <div class="topic-new-post-link">
    <?php print $first_new_post_link; ?>
    </div>
  <?php endif; ?>




  <a id="forum-topic-top"></a>
</div>

