// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from multi_map_server:msg/VerticalOccupancyGridList.idl
// generated code does not contain a copyright notice

#include "multi_map_server/msg/detail/vertical_occupancy_grid_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_multi_map_server
const rosidl_type_hash_t *
multi_map_server__msg__VerticalOccupancyGridList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x31, 0x52, 0xdd, 0xf4, 0xe6, 0xa3, 0x48, 0x5b,
      0x1a, 0x39, 0x92, 0x2f, 0xda, 0x62, 0x95, 0xbb,
      0x04, 0x1c, 0x19, 0x89, 0x7e, 0x4b, 0x71, 0xf0,
      0x94, 0x78, 0x9b, 0x81, 0x40, 0x8c, 0x55, 0x17,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char multi_map_server__msg__VerticalOccupancyGridList__TYPE_NAME[] = "multi_map_server/msg/VerticalOccupancyGridList";

// Define type names, field names, and default values
static char multi_map_server__msg__VerticalOccupancyGridList__FIELD_NAME__x[] = "x";
static char multi_map_server__msg__VerticalOccupancyGridList__FIELD_NAME__y[] = "y";
static char multi_map_server__msg__VerticalOccupancyGridList__FIELD_NAME__upper[] = "upper";
static char multi_map_server__msg__VerticalOccupancyGridList__FIELD_NAME__lower[] = "lower";
static char multi_map_server__msg__VerticalOccupancyGridList__FIELD_NAME__mass[] = "mass";

static rosidl_runtime_c__type_description__Field multi_map_server__msg__VerticalOccupancyGridList__FIELDS[] = {
  {
    {multi_map_server__msg__VerticalOccupancyGridList__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {multi_map_server__msg__VerticalOccupancyGridList__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {multi_map_server__msg__VerticalOccupancyGridList__FIELD_NAME__upper, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {multi_map_server__msg__VerticalOccupancyGridList__FIELD_NAME__lower, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {multi_map_server__msg__VerticalOccupancyGridList__FIELD_NAME__mass, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
multi_map_server__msg__VerticalOccupancyGridList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {multi_map_server__msg__VerticalOccupancyGridList__TYPE_NAME, 46, 46},
      {multi_map_server__msg__VerticalOccupancyGridList__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 x\n"
  "float32 y\n"
  "int32[] upper\n"
  "int32[] lower\n"
  "int32[] mass\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
multi_map_server__msg__VerticalOccupancyGridList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {multi_map_server__msg__VerticalOccupancyGridList__TYPE_NAME, 46, 46},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 62, 62},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
multi_map_server__msg__VerticalOccupancyGridList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *multi_map_server__msg__VerticalOccupancyGridList__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
