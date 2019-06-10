<fieldset class="collapsible form-wrapper collapsed">
  <?php if (!empty($title)): ?>
  	<legend class="collapse">
  	    <span class="fieldset-legend"><?php print $title; ?></span>
  	</legend>
  <?php endif; ?>
  <div class="fieldset-wrapper">
  	<table class="pure-table">
      <thead>
    		<tr>
          <th>
            <?php print $view->field['title']->options['label']; ?>
          </th>
          <th>
            <?php print $view->field['field_pc_modalidad_proceso']->options['label']; ?>
          </th>
          <th>
            <?php print $view->field['field_pc_regimen_contratacion']->options['label']; ?>
          </th>
	<th>
            <?php print $view->field['created']->options['label']; ?>
          </th>
    		</tr>
      </thead>
      <tbody>
    		<?php foreach ($rows as $id => $row): ?>
    		    <?php print $row; ?>
    		<?php endforeach; ?>
      </tbody>
  	</table>
  </div>
</fieldset>
