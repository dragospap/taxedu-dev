<?php

/**
 * @file
 * Theme implementation to show forum legend.
 *
 */
?>

<div class="row">
<div class="forum-list-icon-legend clearfix">
  <div class="forum-list-legend-item">
    <span class="forum-list-icon-wrapper">
      <span class="forum-list-icon-new-posts">
      </span>
    </span>

    <span class="forum-list-text-legend-new-posts">
      <?php print t('Forum contains new posts'); ?>
    </span>
  </div>

  <div class="forum-list-legend-item">
    <span class="forum-list-icon-wrapper">
      <span class="forum-list-icon-default">
      </span>
    </span>

    <span class="forum-list-text-legend-default">
      <?php print t('Forum contains no new posts'); ?>
    </span>
  </div>
</div>
</div>
