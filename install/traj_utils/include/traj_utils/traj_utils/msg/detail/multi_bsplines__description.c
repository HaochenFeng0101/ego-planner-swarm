// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from traj_utils:msg/MultiBsplines.idl
// generated code does not contain a copyright notice

#include "traj_utils/msg/detail/multi_bsplines__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_traj_utils
const rosidl_type_hash_t *
traj_utils__msg__MultiBsplines__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0b, 0x67, 0xda, 0xe6, 0x9d, 0x26, 0xfc, 0x11,
      0x7a, 0x35, 0xe4, 0xea, 0xa2, 0x46, 0x45, 0x1e,
      0xc4, 0x55, 0x9a, 0x8a, 0xba, 0x20, 0x7e, 0x59,
      0xe9, 0x4a, 0xe3, 0xe9, 0xe6, 0xcd, 0x4c, 0xbf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "traj_utils/msg/detail/bspline__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t traj_utils__msg__Bspline__EXPECTED_HASH = {1, {
    0xdc, 0x28, 0x41, 0x87, 0x59, 0xdf, 0xe3, 0x6d,
    0x7e, 0xfb, 0xbe, 0xa4, 0xd1, 0xb8, 0x14, 0x34,
    0xf1, 0xeb, 0xa1, 0xa2, 0xdc, 0x30, 0xdc, 0x9a,
    0x52, 0xdd, 0xcd, 0x2c, 0x68, 0xde, 0x85, 0x69,
  }};
#endif

static char traj_utils__msg__MultiBsplines__TYPE_NAME[] = "traj_utils/msg/MultiBsplines";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char traj_utils__msg__Bspline__TYPE_NAME[] = "traj_utils/msg/Bspline";

// Define type names, field names, and default values
static char traj_utils__msg__MultiBsplines__FIELD_NAME__drone_id_from[] = "drone_id_from";
static char traj_utils__msg__MultiBsplines__FIELD_NAME__traj[] = "traj";

static rosidl_runtime_c__type_description__Field traj_utils__msg__MultiBsplines__FIELDS[] = {
  {
    {traj_utils__msg__MultiBsplines__FIELD_NAME__drone_id_from, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {traj_utils__msg__MultiBsplines__FIELD_NAME__traj, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {traj_utils__msg__Bspline__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription traj_utils__msg__MultiBsplines__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {traj_utils__msg__Bspline__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
traj_utils__msg__MultiBsplines__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {traj_utils__msg__MultiBsplines__TYPE_NAME, 28, 28},
      {traj_utils__msg__MultiBsplines__FIELDS, 2, 2},
    },
    {traj_utils__msg__MultiBsplines__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&traj_utils__msg__Bspline__EXPECTED_HASH, traj_utils__msg__Bspline__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = traj_utils__msg__Bspline__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 drone_id_from\n"
  "\n"
  "Bspline[] traj\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
traj_utils__msg__MultiBsplines__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {traj_utils__msg__MultiBsplines__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 37, 37},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
traj_utils__msg__MultiBsplines__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *traj_utils__msg__MultiBsplines__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *traj_utils__msg__Bspline__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
