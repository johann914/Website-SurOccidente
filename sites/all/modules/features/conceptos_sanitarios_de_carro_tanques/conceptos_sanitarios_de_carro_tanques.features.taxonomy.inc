<?php
/**
 * @file
 * conceptos_sanitarios_de_carro_tanques.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function conceptos_sanitarios_de_carro_tanques_taxonomy_default_vocabularies() {
  return array(
    'clasificaci_n_carrotanques' => array(
      'name' => 'Clasificación carro tanques',
      'machine_name' => 'clasificaci_n_carrotanques',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
