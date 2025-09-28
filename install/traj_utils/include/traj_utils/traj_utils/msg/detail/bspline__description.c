// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from traj_utils:msg/Bspline.idl
// generated code does not contain a copyright notice

#include "traj_utils/msg/detail/bspline__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_traj_utils
const rosidl_type_hash_t *
traj_utils__msg__Bspline__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdc, 0x28, 0x41, 0x87, 0x59, 0xdf, 0xe3, 0x6d,
      0x7e, 0xfb, 0xbe, 0xa4, 0xd1, 0xb8, 0x14, 0x34,
      0xf1, 0xeb, 0xa1, 0xa2, 0xdc, 0x30, 0xdc, 0x9a,
      0x52, 0xdd, 0xcd, 0x2c, 0x68, 0xde, 0x85, 0x69,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"

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
#endif

static char traj_utils__msg__Bspline__TYPE_NAME[] = "traj_utils/msg/Bspline";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";

// Define type names, field names, and default values
static char traj_utils__msg__Bspline__FIELD_NAME__drone_id[] = "drone_id";
static char traj_utils__msg__Bspline__FIELD_NAME__order[] = "order";
static char traj_utils__msg__Bspline__FIELD_NAME__traj_id[] = "traj_id";
static char traj_utils__msg__Bspline__FIELD_NAME__start_time[] = "start_time";
static char traj_utils__msg__Bspline__FIELD_NAME__knots[] = "knots";
static char traj_utils__msg__Bspline__FIELD_NAME__pos_pts[] = "pos_pts";
static char traj_utils__msg__Bspline__FIELD_NAME__yaw_pts[] = "yaw_pts";
static char traj_utils__msg__Bspline__FIELD_NAME__yaw_dt[] = "yaw_dt";

static rosidl_runtime_c__type_description__Field traj_utils__msg__Bspline__FIELDS[] = {
  {
    {traj_utils__msg__Bspline__FIELD_NAME__drone_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {traj_utils__msg__Bspline__FIELD_NAME__order, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {traj_utils__msg__Bspline__FIELD_NAME__traj_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {traj_utils__msg__Bspline__FIELD_NAME__start_time, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {traj_utils__msg__Bspline__FIELD_NAME__knots, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {traj_utils__msg__Bspline__FIELD_NAME__pos_pts, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {traj_utils__msg__Bspline__FIELD_NAME__yaw_pts, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {traj_utils__msg__Bspline__FIELD_NAME__yaw_dt, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription traj_utils__msg__Bspline__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
traj_utils__msg__Bspline__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {traj_utils__msg__Bspline__TYPE_NAME, 22, 22},
      {traj_utils__msg__Bspline__FIELDS, 8, 8},
    },
    {traj_utils__msg__Bspline__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 drone_id\n"
  "\n"
  "int32 order\n"
  "int64 traj_id\n"
  "builtin_interfaces/Time start_time\n"
  "\n"
  "float64[] knots\n"
  "geometry_msgs/Point[] pos_pts\n"
  "\n"
  "float64[] yaw_pts\n"
  "float64 yaw_dt\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
traj_utils__msg__Bspline__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {traj_utils__msg__Bspline__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 159, 159},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
traj_utils__msg__Bspline__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *traj_utils__msg__Bspline__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
