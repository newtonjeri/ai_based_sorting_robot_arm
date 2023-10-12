#!/usr/bin/env python3
import ikpy.chain
import numpy as np
import os
from ament_index_python.packages import get_package_share_directory

# urdf file
urdf_file=os.path.join("/home/newtonjeri/ai_based_sorting_robot_arm/src/robotic_arm_description" ,"urdf","robotic_arm.urdf")

robotic_arm = ikpy.chain.Chain.from_urdf_file(urdf_file)
T=robotic_arm.forward_kinematics([0]* 9)

print("\nTransformation Matrix :\n",T)
angles=robotic_arm.inverse_kinematics([0.2, -0.2, -0.2])
print("\nAngles Computed\n",angles)
# angles=np.delete(angles, [0, 4, 6, 7])
print("\nCorrected Angles \n",list(angles)) 