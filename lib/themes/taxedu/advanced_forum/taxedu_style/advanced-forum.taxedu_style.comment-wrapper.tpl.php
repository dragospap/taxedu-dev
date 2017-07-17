<?php
/**
 * @file
 * Default theme implementation to wrap comments.
 *
 * Available variables:
 * - $content: All comments for a given page. Also contains sorting controls
 *   and comment forms if the site is configured for it.
 *
 * The following variables are provided for contextual information.
 * - $node: Node object the comments are attached to.
 * The constants below the variables show the possible values and should be
 * used for comparison.
 * - $display_mode
 *   - COMMENT_MODE_FLAT_COLLAPSED
 *   - COMMENT_MODE_FLAT_EXPANDED
 *   - COMMENT_MODE_THREADED_COLLAPSED
 *   - COMMENT_MODE_THREADED_EXPANDED
 * - $display_order
 *   - COMMENT_ORDER_NEWEST_FIRST
 *   - COMMENT_ORDER_OLDEST_FIRST
 * - $comment_controls_state
 *   - COMMENT_CONTROLS_ABOVE
 *   - COMMENT_CONTROLS_BELOW
 *   - COMMENT_CONTROLS_ABOVE_BELOW
 *   - COMMENT_CONTROLS_HIDDEN
 *
 * @see template_preprocess_comment_wrapper()
 * @see advanced_forum_preprocess_comment_wrapper()
 */

$content['comment_form']['actions']['submit']['#value'] = t('Save');


if(isset($content['comments']['pager'])) {
    unset($content['comments']['pager']['#theme']);
    $cc_pager = theme('pager');
   if($cc_pager) {
       $content['comments']['pager']['#markup']='
    <div class="cc_pagination_wrapper">
    '.$cc_pager.'
        <div class="previous_pager"></div>
        <div class="next_pager"></div>

</div>
    ';
   }

}

?>


<div class="row">
<div id="forum-comments" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php print render($content['comments']); ?>
  <?php if (isset($content['comment_form']['author'])): ?>
    <h2 class="title comment-form"><?php print t('Quick reply'); ?></h2>
      <div class="replay">
    <?php print render($content['comment_form']); ?>
      </div>
  <?php else: ?>
    <?php print $reply_link; ?>
  <?php endif; ?>
</div>
</div>
