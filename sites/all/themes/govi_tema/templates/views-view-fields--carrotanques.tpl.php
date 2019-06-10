<?php //dsm($fields['field_carrotanques_enlace']->content);?>
<?php //dsm($fields['field_carrotanques_adjunto']->content);?>
<?php //hide($fields['field_legal_expedicion']); ?>
<?php
  //$key_enlace = $fields['field_carrotanques_enlace']->content;
  //$key_adjunto = $fields['field_carrotanques_adjunto']->content;
  $adjunto = !empty($fields['field_carrotanques_adjunto']) ? true : false;
  $enlace = !empty($fields['field_carrotanques_enlace']) ? true : false;

  //if($key_enlace=='<div class="field-content"></div>'){$enlace=false;}else{$enlace=true;}
  //if($key_adjunto=='<div class="field-content"></div>'){$adjunto=false;}else{$adjunto=true;}
  /*
  $field_content = '<div class="field-content"></div>';
  $adjunto = $key_adjunto == $field_content ? false : true;
  $enlace = $key_enlace == $field_content ? false : true;
  */
  if($adjunto && $enlace) {
  	unset($fields['field_carrotanques_adjunto']);
  }

?>

<tr>
  <?php foreach ($fields as $id => $field): ?>
  	<td>
      <?php print $field->content; ?>
    </td>
  <?php endforeach; ?>
</tr>
