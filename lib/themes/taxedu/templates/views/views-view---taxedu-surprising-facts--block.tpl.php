<?php

  /**
   * @file
   * Default simple view template to display a list of rows.
   *
   * - $title : The title of this group of rows.  May be empty.
   * - $options['type'] will either be ul or ol.
   * @ingroup views_templates
   */
?>
<div class="container">
    <div class="row ">
        <div class="col-md-12 eu-map">
            <h3><?php print t('Surprising </br>facts');?></h3>
            <br/><br/><br/><br/><br/>
            <div class="col-md-4 book">
                <div id="content_map">
                    <div class="book">
                        <img src="<?php print base_path() . path_to_theme(); ?>/images/book_kids.png">
                        <span><?php print t('choose a country');?></span>
                    </div>
                </div>
            </div>
            <div class="col-md-8 europa">
                <!-- CSSMap - Europe -->
                <div id="map-europe">
                        <?php if ($rows): ?>
                            <?php print $rows; ?>
                        <?php elseif ($empty): ?>
                        <div class="view-empty">
                            <?php print $empty; ?>
                        </div>
                        <?php endif; ?>
                    <?php if ($footer): ?>
                        <div class="view-footer">
                            <?php print $footer; ?>
                        </div>
                    <?php endif; ?>
                </div>

            </div>
            <img src="<?php print base_path() . path_to_theme(); ?>/images/brain.png">
        </div>
    </div>
</div>
