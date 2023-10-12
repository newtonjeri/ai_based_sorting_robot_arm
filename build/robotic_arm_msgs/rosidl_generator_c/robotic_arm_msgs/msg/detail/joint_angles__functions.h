// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robotic_arm_msgs:msg/JointAngles.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIC_ARM_MSGS__MSG__DETAIL__JOINT_ANGLES__FUNCTIONS_H_
#define ROBOTIC_ARM_MSGS__MSG__DETAIL__JOINT_ANGLES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robotic_arm_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "robotic_arm_msgs/msg/detail/joint_angles__struct.h"

/// Initialize msg/JointAngles message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotic_arm_msgs__msg__JointAngles
 * )) before or use
 * robotic_arm_msgs__msg__JointAngles__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_arm_msgs
bool
robotic_arm_msgs__msg__JointAngles__init(robotic_arm_msgs__msg__JointAngles * msg);

/// Finalize msg/JointAngles message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_arm_msgs
void
robotic_arm_msgs__msg__JointAngles__fini(robotic_arm_msgs__msg__JointAngles * msg);

/// Create msg/JointAngles message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotic_arm_msgs__msg__JointAngles__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_arm_msgs
robotic_arm_msgs__msg__JointAngles *
robotic_arm_msgs__msg__JointAngles__create();

/// Destroy msg/JointAngles message.
/**
 * It calls
 * robotic_arm_msgs__msg__JointAngles__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_arm_msgs
void
robotic_arm_msgs__msg__JointAngles__destroy(robotic_arm_msgs__msg__JointAngles * msg);

/// Check for msg/JointAngles message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_arm_msgs
bool
robotic_arm_msgs__msg__JointAngles__are_equal(const robotic_arm_msgs__msg__JointAngles * lhs, const robotic_arm_msgs__msg__JointAngles * rhs);

/// Copy a msg/JointAngles message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_arm_msgs
bool
robotic_arm_msgs__msg__JointAngles__copy(
  const robotic_arm_msgs__msg__JointAngles * input,
  robotic_arm_msgs__msg__JointAngles * output);

/// Initialize array of msg/JointAngles messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotic_arm_msgs__msg__JointAngles__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_arm_msgs
bool
robotic_arm_msgs__msg__JointAngles__Sequence__init(robotic_arm_msgs__msg__JointAngles__Sequence * array, size_t size);

/// Finalize array of msg/JointAngles messages.
/**
 * It calls
 * robotic_arm_msgs__msg__JointAngles__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_arm_msgs
void
robotic_arm_msgs__msg__JointAngles__Sequence__fini(robotic_arm_msgs__msg__JointAngles__Sequence * array);

/// Create array of msg/JointAngles messages.
/**
 * It allocates the memory for the array and calls
 * robotic_arm_msgs__msg__JointAngles__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_arm_msgs
robotic_arm_msgs__msg__JointAngles__Sequence *
robotic_arm_msgs__msg__JointAngles__Sequence__create(size_t size);

/// Destroy array of msg/JointAngles messages.
/**
 * It calls
 * robotic_arm_msgs__msg__JointAngles__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_arm_msgs
void
robotic_arm_msgs__msg__JointAngles__Sequence__destroy(robotic_arm_msgs__msg__JointAngles__Sequence * array);

/// Check for msg/JointAngles message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_arm_msgs
bool
robotic_arm_msgs__msg__JointAngles__Sequence__are_equal(const robotic_arm_msgs__msg__JointAngles__Sequence * lhs, const robotic_arm_msgs__msg__JointAngles__Sequence * rhs);

/// Copy an array of msg/JointAngles messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotic_arm_msgs
bool
robotic_arm_msgs__msg__JointAngles__Sequence__copy(
  const robotic_arm_msgs__msg__JointAngles__Sequence * input,
  robotic_arm_msgs__msg__JointAngles__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIC_ARM_MSGS__MSG__DETAIL__JOINT_ANGLES__FUNCTIONS_H_
