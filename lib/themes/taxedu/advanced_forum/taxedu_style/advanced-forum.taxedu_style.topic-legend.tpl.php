<?php

/**
 * @file
 * Theme implementation to show forum legend.
 *
 */
$menu_item = menu_get_item();
if (!empty($menu_item) && $menu_item['access']) {
if (($menu_item['map'][0] == 'forum') && (!empty($menu_item['map'][1]))) {

    $forum = $menu_item['map'][1];
    $node_create_list = theme('advanced_forum_node_type_create_list', array('forum_id' => $forum->tid));
}}
?>
<div class="row legend">
<div class="forum-topic-legend clearfix">
  <div class="topic-icon-new"><?php print t('New Posts'); ?></div>
  <div class="topic-icon-default"><?php print t('No New Posts'); ?></div>
  <div class="topic-icon-hot-new"><?php print t('Hot Topic with New Posts'); ?></div>
  <div class="topic-icon-hot"><?php print t('Hot Topic without New Posts'); ?></div>
  <div class="topic-icon-sticky"><?php print t('Sticky Topic'); ?></div>
  <div class="topic-icon-closed"><?php print t('Locked Topic'); ?></div>
</div>
    <div class="forum-node-create-links"><?php print $node_create_list; ?></div>

</div>
