<?php

/**
 * @file
 * This template is used to print a single grouping in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $grouping: The grouping instruction.
 * - $grouping_level: Integer indicating the hierarchical level of the grouping.
 * - $rows: The rows contained in this grouping.
 * - $title: The title of this grouping.
 * - $content: The processed content output that will normally be used.
 */
?>

<fieldset class="collapsible form-wrapper collapsed">
	<!--<div class="view-grouping">
  		<div class="view-grouping-header">-->
  			<legend class="collapse"> 
	    		<span class="fieldset-legend"><?php print $title; ?></span>
			</legend>
  		<!--</div>-->
  		<div class="fieldset-wrapper">
 			<div class="view-grouping-content">
    			<?php print $content; ?>
  			</div>
  		</div>
	<!--</div>-->
</fieldset>