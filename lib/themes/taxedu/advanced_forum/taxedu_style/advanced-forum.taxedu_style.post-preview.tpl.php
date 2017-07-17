<?php

/**
 * @file
 *
 * Theme implementation: Template the preview version of a post.
 *
 * All variables available in node.tpl.php and comment.tpl.php for your theme
 * are available here. In addition, Advanced Forum makes available the following
 * variables:
 *
 * - $top_post: TRUE if we are formatting the main post (ie, not a comment)
 * - $reply_link: Text link / button to reply to topic.
 * - $total_posts: Number of posts in topic (not counting first post).
 * - $new_posts: Number of new posts in topic, and link to first new.
 * - $links_array: Unformatted array of links.
 * - $account: User object of the post author.
 * - $name: User name of post author.
 * - $author_pane: Entire contents of advanced_forum-author-pane.tpl.php.

 */


?>
<div class="pattern_blue_light_small">
    <div class="row top">
        <div class="row google">
        <?php
        $block = block_load('cc_blocks', 'google_translate_tab');
        $block = _block_get_renderable_array(_block_render_blocks(array($block)));
        print render($block);
        ?>
        </div>
        <div class="row page_title header_title"><?php echo t('Post Reply'); ?></div>

    </div>
</div>
<div class="row breadcrumb">
    <?php
//    echo '<span>'.t('You are here: ').'</span>';
//    print('Home / Forums / '.$_SESSION['title_term'].' / '.$node->title);
    $breadcrumb = drupal_get_breadcrumb();
    $breadcrumb[]=$node->title;
    echo  theme('breadcrumb',array('breadcrumb'=>$breadcrumb));


    ?>
</div>
