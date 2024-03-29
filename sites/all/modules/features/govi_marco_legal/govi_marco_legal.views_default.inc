<?php
/**
 * @file
 * govi_marco_legal.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_marco_legal_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'marco_legal';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Marco Legal';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Marco Legal';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_legal_normatividad',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_legal_descripcion']['id'] = 'field_legal_descripcion';
  $handler->display->display_options['fields']['field_legal_descripcion']['table'] = 'field_data_field_legal_descripcion';
  $handler->display->display_options['fields']['field_legal_descripcion']['field'] = 'field_legal_descripcion';
  $handler->display->display_options['fields']['field_legal_descripcion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_legal_descripcion']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_legal_descripcion']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_legal_descripcion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_legal_descripcion']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Enlace */
  $handler->display->display_options['fields']['field_legal_enlace']['id'] = 'field_legal_enlace';
  $handler->display->display_options['fields']['field_legal_enlace']['table'] = 'field_data_field_legal_enlace';
  $handler->display->display_options['fields']['field_legal_enlace']['field'] = 'field_legal_enlace';
  $handler->display->display_options['fields']['field_legal_enlace']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_legal_enlace']['alter']['text'] = 'Ir al documento';
  $handler->display->display_options['fields']['field_legal_enlace']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_legal_enlace']['alter']['path'] = '[field_legal_enlace-url]';
  $handler->display->display_options['fields']['field_legal_enlace']['alter']['alt'] = 'Ir a la localización del documento';
  $handler->display->display_options['fields']['field_legal_enlace']['alter']['link_class'] = 'pure-button';
  $handler->display->display_options['fields']['field_legal_enlace']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_legal_enlace']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_legal_enlace']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_legal_enlace']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_legal_enlace']['type'] = 'link_plain';
  /* Field: Content: Archivo adjunto */
  $handler->display->display_options['fields']['field_legal_adjunto']['id'] = 'field_legal_adjunto';
  $handler->display->display_options['fields']['field_legal_adjunto']['table'] = 'field_data_field_legal_adjunto';
  $handler->display->display_options['fields']['field_legal_adjunto']['field'] = 'field_legal_adjunto';
  $handler->display->display_options['fields']['field_legal_adjunto']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_legal_adjunto']['alter']['text'] = 'Descargar documento';
  $handler->display->display_options['fields']['field_legal_adjunto']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_legal_adjunto']['alter']['path'] = '[field_legal_adjunto]';
  $handler->display->display_options['fields']['field_legal_adjunto']['alter']['alt'] = 'Descargar documento';
  $handler->display->display_options['fields']['field_legal_adjunto']['alter']['link_class'] = 'pure-button';
  $handler->display->display_options['fields']['field_legal_adjunto']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_legal_adjunto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_legal_adjunto']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_legal_adjunto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_legal_adjunto']['type'] = 'file_url_plain';
  /* Field: Content: Clasificación del marco legal */
  $handler->display->display_options['fields']['field_legal_clasificacion']['id'] = 'field_legal_clasificacion';
  $handler->display->display_options['fields']['field_legal_clasificacion']['table'] = 'field_data_field_legal_clasificacion';
  $handler->display->display_options['fields']['field_legal_clasificacion']['field'] = 'field_legal_clasificacion';
  $handler->display->display_options['fields']['field_legal_clasificacion']['label'] = 'Clasificación';
  $handler->display->display_options['fields']['field_legal_clasificacion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_legal_clasificacion']['element_label_colon'] = FALSE;
  /* Field: Content: Entidad que expide la norma */
  $handler->display->display_options['fields']['field_legal_lugar_expedicion']['id'] = 'field_legal_lugar_expedicion';
  $handler->display->display_options['fields']['field_legal_lugar_expedicion']['table'] = 'field_data_field_legal_lugar_expedicion';
  $handler->display->display_options['fields']['field_legal_lugar_expedicion']['field'] = 'field_legal_lugar_expedicion';
  $handler->display->display_options['fields']['field_legal_lugar_expedicion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_legal_lugar_expedicion']['element_label_colon'] = FALSE;
  /* Field: Content: Fecha de expedición de la norma */
  $handler->display->display_options['fields']['field_legal_expedicion']['id'] = 'field_legal_expedicion';
  $handler->display->display_options['fields']['field_legal_expedicion']['table'] = 'field_data_field_legal_expedicion';
  $handler->display->display_options['fields']['field_legal_expedicion']['field'] = 'field_legal_expedicion';
  $handler->display->display_options['fields']['field_legal_expedicion']['label'] = '';
  $handler->display->display_options['fields']['field_legal_expedicion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_legal_expedicion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_legal_expedicion']['settings'] = array(
    'format_type' => 'anho',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Tipo de recurso */
  $handler->display->display_options['fields']['field_legal_recurso']['id'] = 'field_legal_recurso';
  $handler->display->display_options['fields']['field_legal_recurso']['table'] = 'field_data_field_legal_recurso';
  $handler->display->display_options['fields']['field_legal_recurso']['field'] = 'field_legal_recurso';
  $handler->display->display_options['fields']['field_legal_recurso']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_legal_recurso']['element_label_colon'] = FALSE;
  /* Field: Content: Tipos de normatividad */
  $handler->display->display_options['fields']['field_legal_normatividad']['id'] = 'field_legal_normatividad';
  $handler->display->display_options['fields']['field_legal_normatividad']['table'] = 'field_data_field_legal_normatividad';
  $handler->display->display_options['fields']['field_legal_normatividad']['field'] = 'field_legal_normatividad';
  $handler->display->display_options['fields']['field_legal_normatividad']['label'] = '';
  $handler->display->display_options['fields']['field_legal_normatividad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_legal_normatividad']['element_label_colon'] = FALSE;
  /* Field: Content: Tipos de lineamientos */
  $handler->display->display_options['fields']['field_legal_lineamientos']['id'] = 'field_legal_lineamientos';
  $handler->display->display_options['fields']['field_legal_lineamientos']['table'] = 'field_data_field_legal_lineamientos';
  $handler->display->display_options['fields']['field_legal_lineamientos']['field'] = 'field_legal_lineamientos';
  $handler->display->display_options['fields']['field_legal_lineamientos']['label'] = '';
  $handler->display->display_options['fields']['field_legal_lineamientos']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_legal_lineamientos']['element_label_colon'] = FALSE;
  /* Field: Content: Tipos de planes */
  $handler->display->display_options['fields']['field_legal_planes']['id'] = 'field_legal_planes';
  $handler->display->display_options['fields']['field_legal_planes']['table'] = 'field_data_field_legal_planes';
  $handler->display->display_options['fields']['field_legal_planes']['field'] = 'field_legal_planes';
  $handler->display->display_options['fields']['field_legal_planes']['label'] = '';
  $handler->display->display_options['fields']['field_legal_planes']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_legal_planes']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'marco_legal' => 'marco_legal',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    18 => '18',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'marco_legal_clasificacion';

  /* Display: Normatividad */
  $handler = $view->new_display('page', 'Normatividad', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Marco Legal Normatividad';
  $handler->display->display_options['display_description'] = 'Clasificación de los documentos normativos del marco legal ';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Esta sección presenta la normatividad que rige a la Entidad, la que determina su competencia y la que es aplicable a su actividad o producida por la misma. De igual forma se deben publicar las políticas, manuales o lineamientos que produzca la Entidad. Este criterio aplica a sitios web adicionales según el contexto del propósito del sitio web (en este caso es válido hacer el enlace al sitio web principal, siempre y cuando sea clara la relación de la norma con la temática desarrollada por el sitio web adicional).

En estra sección podrá encontrar la siguiene clasificación de <i>normatividad</i>: Acuerdos distritales, Decretos, Directivas, Jurisprudencia, Leyes, Normas constitucionales, Resoluciones y Tratados internacionales.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'marco_legal' => 'marco_legal',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    17 => '17',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'marco_legal_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/marco-legal/normatividad';

  /* Display: Lineamientos */
  $handler = $view->new_display('page', 'Lineamientos', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Marco Legal Lineamientos';
  $handler->display->display_options['display_description'] = 'Clasificación de los documentos que definen lineamientos del marco legal';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_legal_lineamientos',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Esta sección presenta la normatividad que rige a la Entidad, la que determina su competencia y la que es aplicable a su actividad o producida por la misma. De igual forma se deben publicar las políticas, manuales o lineamientos que produzca la Entidad. Este criterio aplica a sitios web adicionales según el contexto del propósito del sitio web (en este caso es válido hacer el enlace al sitio web principal, siempre y cuando sea clara la relación de la norma con la temática desarrollada por el sitio web adicional).

En estra sección podrá encontrar la siguiene clasificación de <i>lineamientos</i>: Actas, Circulares, Conceptos.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['path'] = 'transparencia/marco-legal/lineamientos';

  /* Display: Planes */
  $handler = $view->new_display('page', 'Planes', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Marco Legal Planes';
  $handler->display->display_options['display_description'] = 'Clasificación de los documentos que definen planes del marco legal de la entidad';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_legal_planes',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Esta sección presenta la normatividad que rige a la Entidad, la que determina su competencia y la que es aplicable a su actividad o producida por la misma. De igual forma se deben publicar las políticas, manuales o lineamientos que produzca la Entidad. Este criterio aplica a sitios web adicionales según el contexto del propósito del sitio web (en este caso es válido hacer el enlace al sitio web principal, siempre y cuando sea clara la relación de la norma con la temática desarrollada por el sitio web adicional).

En estra sección podrá encontrar la siguiene clasificación de <i>planes</i>: Planes de desarrollo, Proyectos de inversión';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'marco_legal' => 'marco_legal',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    19 => '19',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'marco_legal_clasificacion';
  $handler->display->display_options['path'] = 'transparencia/marco-legal/planes';

  /* Display: Marco Legal */
  $handler = $view->new_display('page', 'Marco Legal', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Marco Legal';
  $handler->display->display_options['display_description'] = 'Descripción Marco Legal';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = ' Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur nibh ipsum, porta non vulputate a, egestas ac urna. Ut laoreet dapibus dolor, ac imperdiet purus rhoncus ut. Cras id cursus diam. Nunc auctor ultrices lectus eget ultricies. Etiam at neque felis. Quisque vel tortor sed lectus hendrerit eleifend. Suspendisse velit libero, placerat eleifend cursus eu, condimentum non dolor. Duis nulla purus, tempus eu ultrices ac, venenatis eget leo. Curabitur mi dui, posuere sed leo sed, blandit feugiat justo. Cras semper commodo orci sagittis suscipit.

Donec sed orci tincidunt, dapibus quam vel, ultricies arcu. Phasellus semper, enim non eleifend eleifend, justo mi pretium arcu, vitae tempor mauris velit vitae quam. Mauris nec ultrices urna, sed ullamcorper tellus. Suspendisse tempor suscipit pretium. Nullam laoreet pretium sem, eget scelerisque arcu malesuada eu. Proin mollis tristique sollicitudin. Quisque tempor consequat lacinia. Pellentesque venenatis sapien vel odio convallis, bibendum consectetur lorem faucibus. Pellentesque non nulla sem. Quisque porttitor enim id sollicitudin ultrices. Donec mauris eros, volutpat ornare laoreet a, dictum eu magna. Sed hendrerit, lorem eu bibendum congue, dolor dolor mollis felis, quis fringilla nunc neque a massa.

In eu volutpat nisi. Pellentesque lacinia nec enim volutpat faucibus. Mauris rhoncus at urna sit amet lacinia. Proin sagittis ac purus at tempus. Etiam molestie tempor porta. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Mauris luctus lacus libero, ut accumsan turpis tincidunt et. In urna neque, hendrerit ac tortor quis, tempus dignissim tellus. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['path'] = 'transparencia/marco-legal';
  $translatables['marco_legal'] = array(
    t('Master'),
    t('Marco Legal'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Nombre'),
    t('Descripción'),
    t('Enlace'),
    t('Ir al documento'),
    t('Ir a la localización del documento'),
    t('Archivo adjunto'),
    t('Descargar documento'),
    t('Clasificación'),
    t('Entidad que expide la norma'),
    t('Tipo de recurso'),
    t('Normatividad'),
    t('Marco Legal Normatividad'),
    t('Clasificación de los documentos normativos del marco legal '),
    t('Esta sección presenta la normatividad que rige a la Entidad, la que determina su competencia y la que es aplicable a su actividad o producida por la misma. De igual forma se deben publicar las políticas, manuales o lineamientos que produzca la Entidad. Este criterio aplica a sitios web adicionales según el contexto del propósito del sitio web (en este caso es válido hacer el enlace al sitio web principal, siempre y cuando sea clara la relación de la norma con la temática desarrollada por el sitio web adicional).

En estra sección podrá encontrar la siguiene clasificación de <i>normatividad</i>: Acuerdos distritales, Decretos, Directivas, Jurisprudencia, Leyes, Normas constitucionales, Resoluciones y Tratados internacionales.'),
    t('Lineamientos'),
    t('Marco Legal Lineamientos'),
    t('Clasificación de los documentos que definen lineamientos del marco legal'),
    t('Esta sección presenta la normatividad que rige a la Entidad, la que determina su competencia y la que es aplicable a su actividad o producida por la misma. De igual forma se deben publicar las políticas, manuales o lineamientos que produzca la Entidad. Este criterio aplica a sitios web adicionales según el contexto del propósito del sitio web (en este caso es válido hacer el enlace al sitio web principal, siempre y cuando sea clara la relación de la norma con la temática desarrollada por el sitio web adicional).

En estra sección podrá encontrar la siguiene clasificación de <i>lineamientos</i>: Actas, Circulares, Conceptos.'),
    t('Planes'),
    t('Marco Legal Planes'),
    t('Clasificación de los documentos que definen planes del marco legal de la entidad'),
    t('Esta sección presenta la normatividad que rige a la Entidad, la que determina su competencia y la que es aplicable a su actividad o producida por la misma. De igual forma se deben publicar las políticas, manuales o lineamientos que produzca la Entidad. Este criterio aplica a sitios web adicionales según el contexto del propósito del sitio web (en este caso es válido hacer el enlace al sitio web principal, siempre y cuando sea clara la relación de la norma con la temática desarrollada por el sitio web adicional).

En estra sección podrá encontrar la siguiene clasificación de <i>planes</i>: Planes de desarrollo, Proyectos de inversión'),
    t('Descripción Marco Legal'),
    t(' Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur nibh ipsum, porta non vulputate a, egestas ac urna. Ut laoreet dapibus dolor, ac imperdiet purus rhoncus ut. Cras id cursus diam. Nunc auctor ultrices lectus eget ultricies. Etiam at neque felis. Quisque vel tortor sed lectus hendrerit eleifend. Suspendisse velit libero, placerat eleifend cursus eu, condimentum non dolor. Duis nulla purus, tempus eu ultrices ac, venenatis eget leo. Curabitur mi dui, posuere sed leo sed, blandit feugiat justo. Cras semper commodo orci sagittis suscipit.

Donec sed orci tincidunt, dapibus quam vel, ultricies arcu. Phasellus semper, enim non eleifend eleifend, justo mi pretium arcu, vitae tempor mauris velit vitae quam. Mauris nec ultrices urna, sed ullamcorper tellus. Suspendisse tempor suscipit pretium. Nullam laoreet pretium sem, eget scelerisque arcu malesuada eu. Proin mollis tristique sollicitudin. Quisque tempor consequat lacinia. Pellentesque venenatis sapien vel odio convallis, bibendum consectetur lorem faucibus. Pellentesque non nulla sem. Quisque porttitor enim id sollicitudin ultrices. Donec mauris eros, volutpat ornare laoreet a, dictum eu magna. Sed hendrerit, lorem eu bibendum congue, dolor dolor mollis felis, quis fringilla nunc neque a massa.

In eu volutpat nisi. Pellentesque lacinia nec enim volutpat faucibus. Mauris rhoncus at urna sit amet lacinia. Proin sagittis ac purus at tempus. Etiam molestie tempor porta. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Mauris luctus lacus libero, ut accumsan turpis tincidunt et. In urna neque, hendrerit ac tortor quis, tempus dignissim tellus. '),
  );
  $export['marco_legal'] = $view;

  return $export;
}
