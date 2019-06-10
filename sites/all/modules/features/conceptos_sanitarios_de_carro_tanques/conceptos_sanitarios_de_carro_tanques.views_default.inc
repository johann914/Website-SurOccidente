<?php
/**
 * @file
 * conceptos_sanitarios_de_carro_tanques.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function conceptos_sanitarios_de_carro_tanques_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'carrotanques';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Carro Tanques';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Conceptos Sanitarios de Carro Tanques';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_carrotanques_clasificacion',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Encabezado: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'A continuación se relacionan los conceptos sanitarios de carrotanques publicados.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Pie de página: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Campo: Contenido: Descripcion */
  $handler->display->display_options['fields']['field_carrotanques_descripcion']['id'] = 'field_carrotanques_descripcion';
  $handler->display->display_options['fields']['field_carrotanques_descripcion']['table'] = 'field_data_field_carrotanques_descripcion';
  $handler->display->display_options['fields']['field_carrotanques_descripcion']['field'] = 'field_carrotanques_descripcion';
  $handler->display->display_options['fields']['field_carrotanques_descripcion']['label'] = 'Descripción';
  $handler->display->display_options['fields']['field_carrotanques_descripcion']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_carrotanques_descripcion']['settings'] = array(
    'trim_length' => '400',
  );
  /* Campo: Contenido: Periodicidad */
  $handler->display->display_options['fields']['field_carrotanques_periodicidad']['id'] = 'field_carrotanques_periodicidad';
  $handler->display->display_options['fields']['field_carrotanques_periodicidad']['table'] = 'field_data_field_carrotanques_periodicidad';
  $handler->display->display_options['fields']['field_carrotanques_periodicidad']['field'] = 'field_carrotanques_periodicidad';
  $handler->display->display_options['fields']['field_carrotanques_periodicidad']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Contenido: Tipo de recurso */
  $handler->display->display_options['fields']['field_carrotanques_recurso']['id'] = 'field_carrotanques_recurso';
  $handler->display->display_options['fields']['field_carrotanques_recurso']['table'] = 'field_data_field_carrotanques_recurso';
  $handler->display->display_options['fields']['field_carrotanques_recurso']['field'] = 'field_carrotanques_recurso';
  $handler->display->display_options['fields']['field_carrotanques_recurso']['exclude'] = TRUE;
  /* Campo: Contenido: Enlace */
  $handler->display->display_options['fields']['field_carrotanques_enlace']['id'] = 'field_carrotanques_enlace';
  $handler->display->display_options['fields']['field_carrotanques_enlace']['table'] = 'field_data_field_carrotanques_enlace';
  $handler->display->display_options['fields']['field_carrotanques_enlace']['field'] = 'field_carrotanques_enlace';
  $handler->display->display_options['fields']['field_carrotanques_enlace']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_carrotanques_enlace']['alter']['text'] = 'Ir al documento';
  $handler->display->display_options['fields']['field_carrotanques_enlace']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_carrotanques_enlace']['alter']['path'] = '[field_carrotanques_enlace]';
  $handler->display->display_options['fields']['field_carrotanques_enlace']['alter']['alt'] = 'Ir al documento';
  $handler->display->display_options['fields']['field_carrotanques_enlace']['alter']['link_class'] = 'colorbox-load pure-button ';
  $handler->display->display_options['fields']['field_carrotanques_enlace']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_carrotanques_enlace']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_carrotanques_enlace']['type'] = 'link_plain';
  /* Campo: Contenido: Archivo adjunto */
  $handler->display->display_options['fields']['field_carrotanques_adjunto']['id'] = 'field_carrotanques_adjunto';
  $handler->display->display_options['fields']['field_carrotanques_adjunto']['table'] = 'field_data_field_carrotanques_adjunto';
  $handler->display->display_options['fields']['field_carrotanques_adjunto']['field'] = 'field_carrotanques_adjunto';
  $handler->display->display_options['fields']['field_carrotanques_adjunto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_carrotanques_adjunto']['alter']['text'] = 'Ir al Documento';
  $handler->display->display_options['fields']['field_carrotanques_adjunto']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_carrotanques_adjunto']['alter']['path'] = '[field_carrotanques_adjunto]?width=800&height=800&iframe=true';
  $handler->display->display_options['fields']['field_carrotanques_adjunto']['alter']['alt'] = 'Ir al documento';
  $handler->display->display_options['fields']['field_carrotanques_adjunto']['alter']['link_class'] = 'colorbox-load pure-button ';
  $handler->display->display_options['fields']['field_carrotanques_adjunto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_carrotanques_adjunto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carrotanques_adjunto']['type'] = 'file_url_plain';
  /* Campo: Contenido: Clasificación */
  $handler->display->display_options['fields']['field_carrotanques_clasificacion']['id'] = 'field_carrotanques_clasificacion';
  $handler->display->display_options['fields']['field_carrotanques_clasificacion']['table'] = 'field_data_field_carrotanques_clasificacion';
  $handler->display->display_options['fields']['field_carrotanques_clasificacion']['field'] = 'field_carrotanques_clasificacion';
  $handler->display->display_options['fields']['field_carrotanques_clasificacion']['label'] = '';
  $handler->display->display_options['fields']['field_carrotanques_clasificacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_carrotanques_clasificacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carrotanques_clasificacion']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'carrotanques' => 'carrotanques',
  );

  /* Display: Conceptos Sanitarios de Carro Tanques */
  $handler = $view->new_display('page', 'Conceptos Sanitarios de Carro Tanques', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'salud-urbana/vigilancia-en-salud-publica/conceptos-sanitarios/carrotanques';
  $translatables['carrotanques'] = array(
    t('Master'),
    t('Conceptos Sanitarios de Carro Tanques'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('A continuación se relacionan los conceptos sanitarios de carrotanques publicados.'),
    t('Nombre'),
    t('Descripción'),
    t('Periodicidad'),
    t('Tipo de recurso'),
    t('Enlace'),
    t('Ir al documento'),
    t('Archivo adjunto'),
    t('Ir al Documento'),
  );
  $export['carrotanques'] = $view;

  return $export;
}
