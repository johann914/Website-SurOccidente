<?php
/**
	kpr(get_defined_vars());
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<?php //print_r($node); ?>
<h2 class="titulo-nodox"> <?php print drupal_strtoupper(render($content['field_pi_modalidad_proceso']['0']['#markup'])) . " #" . $title; ?> </h2>

<div id=<?php print '"nodo-contenido-'.$type.'"'?>>
  
  <table class="pure-table pure-table-bordered" style="width: 100%;">
    <thead>
      <tr>
        <th colspan="2">Información General del Proceso</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td class="celdaTitulo"><?php print render($content['field_pi_modalidad_proceso']["#title"]); ?></td>
        <td><?php print render($content['field_pi_modalidad_proceso'][0]['#markup']); ?></td>
      </tr>
      <tr>
        <td class="celdaTitulo"><?php print render($content['field_pi_numero_proceso']["#title"]); ?></td>
        <td><?php print render($content['field_pi_numero_proceso'][0]['#markup']); ?></td>
      </tr>
      <tr>
        <td class="celdaTitulo"><?php print render($content['field_pi_estado']["#title"]); ?></td>
        <td><?php print render($content['field_pi_estado'][0]['#markup']); ?></td>
      </tr>
      <tr>
        <td class="celdaTitulo"><?php print render($content['field_pi_regimen_contratacion']["#title"]); ?></td>
        <td><?php print render($content['field_pi_regimen_contratacion'][0]['#markup']); ?></td>
      </tr>
      <tr>
        <td class="celdaTitulo"><?php print render($content['body']["#title"]); ?></td>
        <td><?php print render($content['body'][0]['#markup']); ?></td>
      </tr>
      <tr>
        <td class="celdaTitulo"><?php print render($content['field_pi_valor_cuantia']["#title"]); ?></td>
        <td>COP$<?php print number_format(render($content['field_pi_valor_cuantia'][0]['#markup']), 2, ',', '.'); ?></td>
      </tr>
      <tr>
        <td class="celdaTitulo"><?php print render($content['field_pi_tipo_contrato']["#title"]); ?></td>
        <td><?php print render($content['field_pi_tipo_contrato'][0]['#markup']); ?></td>
      </tr>
    </tbody>
    <thead>
      <tr>
        <th colspan="2">Respaldos Presupuestales Asociados al Proceso</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td class="celdaTitulo"><?php print render($content['field_pi_presupuesto']["#title"]); ?></td>
        <td><?php print render($content['field_pi_presupuesto'][0]['#markup']); ?></td>
      </tr>
      <tr>
        <td class="celdaTitulo"><?php print render($content['field_pi_presupuesto_numero']["#title"]); ?></td>
        <td><?php print render($content['field_pi_presupuesto_numero'][0]['#markup']); ?></td>
      </tr>
      <tr>
        <td class="celdaTitulo"><?php print render($content['field_pi_presupuesto_fecha']["#title"]); ?></td>
        <td><?php print render($content['field_pi_presupuesto_fecha'][0]['#markup']); ?></td>
      </tr>
      <tr>
        <td class="celdaTitulo"><?php print render($content['field_pi_presupuesto_valor']["#title"]); ?></td>
        <td>COP$<?php print number_format(render($content['field_pi_presupuesto_valor'][0]['#markup']), 2, ',', '.'); ?></td>
      </tr>
    </tbody>
    <thead>
      <tr>
        <th colspan="2">Cronograma del Proceso</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td class="celdaTitulo"><?php print render($content['field_pi_fecha_hora_apertura']["#title"]); ?></td>
        <td><?php print render($content['field_pi_fecha_hora_apertura'][0]['#markup']); ?></td>
      </tr>
      <tr>
        <td class="celdaTitulo"><?php print render($content['field_pi_visita_instalaciones']["#title"]); ?></td>
        <td><?php print render($content['field_pi_visita_instalaciones'][0]['#markup']); ?></td>
      </tr>
      <tr>
        <td class="celdaTitulo"><?php print render($content['field_pi_direccion']["#title"]); ?></td>
        <td><?php print render($content['field_pi_direccion'][0]['#markup']); ?></td>
      </tr>
      <tr>
        <td class="celdaTitulo"><?php print render($content['field_pi_fecha_hora_cierre']["#title"]); ?></td>
        <td><?php print render($content['field_pi_fecha_hora_cierre'][0]['#markup']); ?></td>
      </tr>
    </tbody>
    <thead>
      <tr>
        <th colspan="2">Datos de Contacto del Proceso</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td class="celdaTitulo"><?php print render($content['field_pi_correo_electronico']["#title"]); ?></td>
        <td><?php print render($content['field_pi_correo_electronico'][0]['#markup']); ?></td>
      </tr>
    </tbody>
   <?php if (isset($content['documento_adjunto_invitaciones_cotizar_entity_view_1'])): ?>
    <thead>
      <tr>
        <th colspan="2">Documentos del Proceso</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td class="documentos-proceso" colspan="2">
          <?php print render($content["documento_adjunto_invitaciones_cotizar_entity_view_1"]); ?>
        </td>
      </tr>
    </tbody>
    <?php endif; ?>
  </table>
  <hr>
   <?php
     $url = url('transparencia/invitacion-a-cotizar/', array('absolute' => TRUE));
     $link = '<a class="pure-button"" href="'.$url.'" rel="'.$url.'">Volver al listado de invitaciones a cotizar</a>';
     print $link;
     global $user;
     if (node_access('create', $node, $user)) {
       $field_name = 'field_ref_proceso_invitacion';
       $type_name = 'proceso_invitacion_documento';
       $attributes = array('class'=>'button-success pure-button');
       print nodereference_url_create_link($node, $field_name, $type_name, $attributes);
     }
   ?>
<?php //print var_dump($content); ?>
</div>
