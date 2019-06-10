<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php //dsm($view->field['title']); ?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<table class="pure-table">
  <thead>
    <tr>
        <th>
      <?php print $view->field['title']->options['label']; ?>
        </th>
	
		    <th>
			<?php print $view->field['field_documento_descripcion']->options['label']; ?>
		    </th>
        <th>
      <?php print $view->field['field_documento_tipo_recurso']->options['label']; ?>
        </th>
    </tr>
  </thead>
  <tbody>
    <?php foreach ($rows as $id => $row): ?>
        <?php print $row; ?>
    <?php endforeach; ?>
   </tbody>
</table>
<hr>
