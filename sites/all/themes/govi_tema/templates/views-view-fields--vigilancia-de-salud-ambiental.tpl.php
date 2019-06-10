<?php //dsm('views-view-fields'); ?>

<?php //hide($fields['field_legal_expedicion']); ?>
<tr>
    <?php foreach($fields as $field): ?>
	<td>
	    <?php print $field->content; ?>
	</td>
    <?php endforeach; ?>
</tr>
