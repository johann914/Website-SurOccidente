<?php
/**
 * @file
 * govi_noticias.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function govi_noticias_taxonomy_default_vocabularies() {
  return array(
    'noticias' => array(
      'name' => 'Noticias',
      'machine_name' => 'noticias',
      'description' => 'Categoría principal para la gestión de noticias',
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
