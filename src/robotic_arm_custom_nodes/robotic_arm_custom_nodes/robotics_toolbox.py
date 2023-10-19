#!/usr/bin/env python3
import os
import numpy as np
from roboticstoolbox.robot import Robot

# URDF file path
urdf_file = os.path.join("/home/newtonjeri/ai_based_sorting_robot_arm/src/robotic_arm_description", "urdf", "robotic_arm_urdf.urdf")

# Load robot
robot = Robot.URDF(urdf_file, gripper="gripper_finger_1")
print(f"\n{format(robot)}\n")

# Define joint limits as (low, high) pairs for each joint
joint_limits = [
    (-1.570796, 1.570796),   # Joint 1
    (-1.570796, 1.570796),   # Joint 2
    (0.0, 3.141593),         # Joint 3
    (-1.570796, 1.570796),   # Joint 4
    (0.0, 0.785398),         # Joint 5
]

# End effector position
x = 0.1
y = 0.1
z = 0.1

# Desired position
d_position = np.array([[0.0, 0.0, 0.0, x],
                       [0.0, 0.0, 0.0, y],
                       [0.0, 0.0, 0.0, z],
                       [0.0, 0.0, 0.0, 1.0]])

# FK Solution
T = robot.fkine([0.0, 0.0, 0.0, 0.0])

# End Effector POSE
Tep = np.add(d_position, T)

# Inverse Kinematics solution
angles_GN = robot.ikine_LM(Tep=Tep, joint_limits=joint_limits)
angles_LM = robot.ikine_LM(Tep=Tep)
angles_NR = robot.ikine_NR(Tep=Tep)

print(f"Joint limits {joint_limits}\n")
print(f"angles_GN - {angles_GN}")
print(f"angles_LM - {angles_LM}")
print(f"angles_NR - {angles_NR}")
