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
            <?php print $view->field['field_carrotanques_descripcion']->options['label']; ?>
          </th>
          <th>
            <?php print $view->field['field_carrotanques_periodicidad']->options['label']; ?>
          </th>
          <th>
            <?php print $view->field['field_carrotanques_recurso']->options['label']; ?>
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
