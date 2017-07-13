<?php
/**
 * @file
 * taxedu_features.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function taxedu_features_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Title',
    'description' => '',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '01529e2e-a303-496a-9ba8-30b687cc1673',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'forums',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(),
    'parent' => array(
      0 => 'b38c48ae-12db-4057-8ede-d911cfe841fe',
    ),
  );
  $terms[] = array(
    'name' => 'de',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0839d9f4-2da5-4f79-83ad-bb6e730247bd',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'media_folders',
    'entity_type' => 'taxonomy_term',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-folders/de',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => 'e001f98a-8a54-4166-9ff8-91e166979ba2',
    ),
  );
  $terms[] = array(
    'name' => 'Gift Shop Visitors',
    'description' => 'Test child term for Workbench Access.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0952f802-a79b-41bd-a2ae-66cf3b3eeb61',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'workbench_access',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'museum/gift-shop-visitors',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '1b6f03f4-f01f-4289-afb0-b238fec784d8',
    ),
  );
  $terms[] = array(
    'name' => 'Web page Publisher',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '09f25652-5290-490f-885d-f1323c424361',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'web_page_workflow',
    'entity_type' => 'taxonomy_term',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'web-page-workflow/web-page-publisher',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 31000,
    'description' => 'Statistics',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '09fe3506-57d9-411a-b8f1-b6785434147c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/31000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 30000,
    'description' => 'Economic and monetary union, euro, single currency',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0dc8e75a-29b2-4852-a653-ee08e598c41d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/30000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'hu',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '126fb342-cce1-4789-bbd3-abea24d73dd0',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'media_folders',
    'entity_type' => 'taxonomy_term',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-folders/hu',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => 'e001f98a-8a54-4166-9ff8-91e166979ba2',
    ),
  );
  $terms[] = array(
    'name' => 'Gift Shop',
    'description' => 'Test term for Workbench Access.',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '1b6f03f4-f01f-4289-afb0-b238fec784d8',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'workbench_access',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'museum/gift-shop',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Title',
    'description' => '',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2f0fef13-9751-4682-ab94-3baaa6ddd4d2',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'forums',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(),
    'parent' => array(
      0 => 'b38c48ae-12db-4057-8ede-d911cfe841fe',
    ),
  );
  $terms[] = array(
    'name' => 'General',
    'description' => '',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3107f30f-07a5-472d-bda2-472f69b8efd4',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'forums',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Title',
    'description' => '',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3314ff07-a4d7-44e1-993f-ead00acbdf22',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'forums',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(),
    'parent' => array(
      0 => 'b38c48ae-12db-4057-8ede-d911cfe841fe',
    ),
  );
  $terms[] = array(
    'name' => 18000,
    'description' => 'Free movement of capital, finance',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '352a56f7-065e-4be2-ae9e-fbeecbf3a8dc',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/18000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => '04000',
    'description' => 'Information society, communication, information, audiovisual, telecommunications, public opinion',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3771cbf7-e95d-41e6-b425-041d58e516b2',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/04000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Title',
    'description' => '',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3852e1d3-b0c7-489f-a452-31079a628ea7',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'forums',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(),
    'parent' => array(
      0 => '3107f30f-07a5-472d-bda2-472f69b8efd4',
    ),
  );
  $terms[] = array(
    'name' => 26000,
    'description' => 'External relations, CFSP, development cooperation, humanitarian aid',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3bf4d3e9-f236-4e13-86a7-35bb36c3173f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/26000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 12000,
    'description' => 'Type of business, company law',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3c72cbfc-897e-4e0a-b8a5-031debaa0fce',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/12000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Title',
    'description' => '',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '49d85aff-3b5e-4191-ba24-d4c0c5837a7b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'forums',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(),
    'parent' => array(
      0 => 'b38c48ae-12db-4057-8ede-d911cfe841fe',
    ),
  );
  $terms[] = array(
    'name' => 'TAXEDU newsletter',
    'description' => 'TAXEDU newsletter categories.',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '596d1be7-e105-4321-a6b2-325f6a59a243',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'newsletter',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'newsletter/taxedu-newsletter',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 10000,
    'description' => 'Employment, work',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '628be773-d4bf-4e08-bd76-103d44c73933',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/10000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 11000,
    'description' => 'Energy',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '646f963c-1e16-494d-9ceb-e1c905a07ae7',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/11000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Library Staff',
    'description' => 'Test child term for Workbench Access.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '66d10e36-2803-479e-b517-fde97efea279',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'workbench_access',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'museum/library-staff',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => 'b30853cf-f213-4b1b-b729-a8ba062fd333',
    ),
  );
  $terms[] = array(
    'name' => '03000',
    'description' => 'European citizenship, right to vote, ombudsman, protection of privacy',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '69d2f0ad-f09d-478d-af2c-080446e631c3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/03000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => '09000',
    'description' => 'Enlargement, accession of new states',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '6be8300c-d2d5-41d0-8acb-cfc1f329f55d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/09000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'ro',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '75ebf2e2-4441-4e6f-ab12-2e7368504f22',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'media_folders',
    'entity_type' => 'taxonomy_term',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-folders/ro',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => 'e001f98a-8a54-4166-9ff8-91e166979ba2',
    ),
  );
  $terms[] = array(
    'name' => 'slides',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '7e11be51-5d16-4e73-911e-a054e1a00ba8',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'media_folders',
    'entity_type' => 'taxonomy_term',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-folders/slides-0',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '7e64747b-276e-48f7-9528-0a5830910033',
    ),
  );
  $terms[] = array(
    'name' => 'story_content',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '7e64747b-276e-48f7-9528-0a5830910033',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'media_folders',
    'entity_type' => 'taxonomy_term',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-folders/storycontent',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '75ebf2e2-4441-4e6f-ab12-2e7368504f22',
    ),
  );
  $terms[] = array(
    'name' => 'Web page Creators',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '869c4cf7-1526-4530-9ce0-c51dddcc01cc',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'web_page_workflow',
    'entity_type' => 'taxonomy_term',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'web-page-workflow/web-page-creators',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '09f25652-5290-490f-885d-f1323c424361',
    ),
  );
  $terms[] = array(
    'name' => 16000,
    'description' => 'Institutions',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8847215c-37ce-4dae-832a-3a30c58562f7',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/16000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 25000,
    'description' => 'Research & development',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8eedd70f-03b8-4106-894f-928a6309f273',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/25000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Exhibits Visitors',
    'description' => 'Test child term for Workbench Access.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '911f8b02-daef-4123-b3ca-b25a320b6518',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'workbench_access',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'museum/exhibits-visitors',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '9740a206-3df3-4a4c-9bb1-002e6bee918b',
    ),
  );
  $terms[] = array(
    'name' => 'Exhibits',
    'description' => 'Test term for Workbench Access.',
    'format' => 'plain_text',
    'weight' => -5,
    'uuid' => '9740a206-3df3-4a4c-9bb1-002e6bee918b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'workbench_access',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'museum/exhibits',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'economic',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '98a30be1-cd85-477b-8dc4-2f3585afa748',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'tags/economic',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Library Visitors',
    'description' => 'Test child term for Workbench Access.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '98f6b01b-60f1-40e5-8694-4bfd257386b9',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'workbench_access',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'museum/library-visitors',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => 'b30853cf-f213-4b1b-b729-a8ba062fd333',
    ),
  );
  $terms[] = array(
    'name' => 36,
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '99491d38-8f24-43cc-9bf7-7251737e4e47',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'media_folders',
    'entity_type' => 'taxonomy_term',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-folders/36',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => 'c4e16f72-c475-47b2-a848-c91e547053ea',
    ),
  );
  $terms[] = array(
    'name' => 'Title',
    'description' => '',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a275d2f9-0c2c-46ba-98d2-94b63a58ea3f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'forums',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(),
    'parent' => array(
      0 => '3107f30f-07a5-472d-bda2-472f69b8efd4',
    ),
  );
  $terms[] = array(
    'name' => 23000,
    'description' => 'Regional policy, OCT',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a3246e0e-fa34-41f9-9a31-54de391a9621',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/23000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Resources Creators',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a8130d79-76dd-495b-80b6-b711f5236247',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'resources_tag',
    'entity_type' => 'taxonomy_term',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'resources-workflow/resources-creators',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => 'f03b57c0-71fa-4d25-9fea-e5c7c7740442',
    ),
  );
  $terms[] = array(
    'name' => '06000',
    'description' => 'Consumers, distribution, civil defence, nuclear safety, food safety',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'af75cc71-2fd5-473d-8cbf-cb9dace2bb9c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/06000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => '01000',
    'description' => 'Agriculture, farming',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'afd3bc8e-7f70-49a4-86f5-e9c3c700d28f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/01000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Library',
    'description' => 'Test term for Workbench Access.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b30853cf-f213-4b1b-b729-a8ba062fd333',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'workbench_access',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'museum/library',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Courses',
    'description' => '',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b38c48ae-12db-4057-8ede-d911cfe841fe',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'forums',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 33000,
    'description' => 'Administration, management and human resources policy',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b5a0e9a2-9d55-4ac0-9816-6e53eab513f6',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/33000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 37,
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b5f053ff-1db3-4b70-9f86-33a9e4be80cd',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'media_folders',
    'entity_type' => 'taxonomy_term',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-folders/37',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => 'c4e16f72-c475-47b2-a848-c91e547053ea',
    ),
  );
  $terms[] = array(
    'name' => 'en',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b7975476-4a16-4756-8393-44da60b465a0',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'media_folders',
    'entity_type' => 'taxonomy_term',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-folders/en',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => 'e001f98a-8a54-4166-9ff8-91e166979ba2',
    ),
  );
  $terms[] = array(
    'name' => '05000',
    'description' => 'Competition, state aid',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b79db65b-2ce5-4bd2-9673-bd2ade2bb13c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/05000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 17000,
    'description' => 'Justice and home affairs, asylum, judicial cooperation, police cooperation, Schengen, visa, immigration, external frontiers, fight against crime, drugs, terrorism',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b977bd4d-15e4-47f3-9bc2-6f3d65fbd8a5',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/17000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 22000,
    'description' => 'Fisheries',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'bc232bce-1305-4154-9612-eb29982177a1',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/22000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'slides',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'bd5b48e7-e534-4133-81a9-afe9f4c31b81',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'media_folders',
    'entity_type' => 'taxonomy_term',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-folders/slides',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => 'f8a99793-0cf8-4740-8b3b-c2e9aa21df52',
    ),
  );
  $terms[] = array(
    'name' => 'Gift Shop Staff',
    'description' => 'Test child term for Workbench Access.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c0016d3e-ddd3-49f1-b2e7-558a679ea63a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'workbench_access',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'museum/gift-shop-staff',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '1b6f03f4-f01f-4289-afb0-b238fec784d8',
    ),
  );
  $terms[] = array(
    'name' => '02000',
    'description' => 'Budget, financing, fraud',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c0160494-bc69-4956-b0b4-ade54284ee81',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/02000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 29000,
    'description' => 'Transport',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c24eca2e-58f0-4d63-8c75-c1b7314684c9',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/29000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Media Root',
    'description' => 'default media folder',
    'format' => NULL,
    'weight' => -10,
    'uuid' => 'c4e16f72-c475-47b2-a848-c91e547053ea',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'media_folders',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'media-folders/media-root',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Title',
    'description' => '',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c612ba64-9b51-4189-8e36-bdf2e5503242',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'forums',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(),
    'parent' => array(
      0 => '3107f30f-07a5-472d-bda2-472f69b8efd4',
    ),
  );
  $terms[] = array(
    'name' => 15000,
    'description' => 'Industry',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c6427f77-4eb8-40b2-9ab4-99d9d92c4231',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/15000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => '08000',
    'description' => 'Education, teaching, vocational training, youth',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'caeff8d6-2e05-4910-875f-0a6b278e7d87',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/08000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Exhibits Staff',
    'description' => 'Test child term for Workbench Access.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd0b1cb49-96b0-44a0-8535-2394d968b702',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'workbench_access',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'museum/exhibits-staff',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '9740a206-3df3-4a4c-9bb1-002e6bee918b',
    ),
  );
  $terms[] = array(
    'name' => 28000,
    'description' => 'Respect for human rights, racism, xenophobia',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd19af6f9-03d7-49b4-953c-ce590058f90e',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/28000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 14000,
    'description' => 'Tax system',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd5eb1481-5be5-4169-91d3-0efe6bbaa091',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/14000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 19000,
    'description' => 'Free movement of goods, customs, public contracts, standardization',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'db09f811-fa8d-4818-af05-d489d5acdd1c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/19000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 35,
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e001f98a-8a54-4166-9ff8-91e166979ba2',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'media_folders',
    'entity_type' => 'taxonomy_term',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-folders/35',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => 'c4e16f72-c475-47b2-a848-c91e547053ea',
    ),
  );
  $terms[] = array(
    'name' => 'sport',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e6fa10b4-f493-44c8-a0a8-5ac1511e9f4b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'tags/sport',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 24000,
    'description' => 'Social policy, public health',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e88edb3f-619e-4e8a-8d2b-9ec5e728826a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/24000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 21000,
    'description' => 'Free movement of services, insurance, banks, credit, right of establishment, savings, public contracts',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e943252e-dd5b-44d6-af2a-103ad92f1a7b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/21000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'notes',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ea32966b-b77b-4fa9-ad87-cba7ffd8e7f0',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'media_folders',
    'entity_type' => 'taxonomy_term',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-folders/notes',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '7e64747b-276e-48f7-9528-0a5830910033',
    ),
  );
  $terms[] = array(
    'name' => 13000,
    'description' => 'Environment',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ea7a2b36-2169-4278-b9ed-0b18139775e7',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/13000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Title',
    'description' => '',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ea7c6ae8-7703-4d19-b86f-f04ff084f431',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'forums',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(),
    'parent' => array(
      0 => '3107f30f-07a5-472d-bda2-472f69b8efd4',
    ),
  );
  $terms[] = array(
    'name' => 32000,
    'description' => 'Language, multilingualism, translation, interpretation',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'efebc63e-c56a-416d-8ce6-18aecbdaceaa',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/32000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Resources Publisher',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f03b57c0-71fa-4d25-9fea-e5c7c7740442',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'resources_tag',
    'entity_type' => 'taxonomy_term',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'resources-workflow/resources-publisher',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => '07000',
    'description' => 'Culture, tourism, sport',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f599de59-d453-40d4-a85a-13945fc6eaa0',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/07000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'mobile',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f8a99793-0cf8-4740-8b3b-c2e9aa21df52',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'media_folders',
    'entity_type' => 'taxonomy_term',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'media-folders/mobile',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => '75ebf2e2-4441-4e6f-ab12-2e7368504f22',
    ),
  );
  $terms[] = array(
    'name' => 27000,
    'description' => 'Trans-European networks',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fb45e1ee-1b1d-4c32-917c-5208da6e9350',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/27000',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 20000,
    'description' => 'Free movement of persons, right of establishment, workers',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fda1f3d3-b8bf-4cb4-98ab-3df5599bd680',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'classification',
    'entity_type' => 'taxonomy_term',
    'url_alias' => array(
      0 => array(
        'alias' => 'classification/20000',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
