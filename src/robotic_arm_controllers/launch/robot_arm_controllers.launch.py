import os
import xacro
from launch_ros.actions import Node
from launch  import LaunchDescription
from ament_index_python.packages import get_package_share_directory

description_package = "robotic_arm_description"
xacro_file = "robotic_arm.xacro"

def generate_launch_description():
    
    # xacro file path
    xacro_file_path = os.path.join(get_package_share_directory(description_package), "urdf", xacro_file)
    # convert xacro file to standard xml format
    robot_description_config  = xacro.process_file(xacro_file_path)
    robot_description = robot_description_config.toxml()
    
    # robot_state_publisher node
    robot_state_publisher = Node(
        package = "robot_state_publisher",
        executable = "robot_state_publisher",
        parameters = [
            {'robot_description': robot_description}
        ]
    )
    
    # controller manager 
    controller_manager = Node(
        package = 'controller_manager',
        executable = "controller_manager",
        output = 'screen',
    )
    
    # joint_state_broadcaster node
    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "joint_state_broadcaster",
            "--controller_manager",
            "/controller_manager"
        ]
    )
    
    # arm_controller
    robot_joints_trajectory_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "robot_joints_joint_trajectory_controller",
            "--controller-manager",
            "/controller_manager"
        ]
    )
    
    # gripper controller node
    gripper_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "gripper_controller",
            "--controller-manager",
            "controller_manager"
        ]
    )
    
    
    return LaunchDescription([
        robot_state_publisher,
        joint_state_broadcaster_spawner,
        robot_joints_trajectory_controller_spawner,
        gripper_controller_spawner
    ])