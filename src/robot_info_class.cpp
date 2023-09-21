#include "ros/node_handle.h"
#include "ros/publisher.h"
#include "string"
#include "robot_info/robot_info.h"
#include "robot_info/custom.h"

using namespace std;

RobotInfo::RobotInfo(ros::NodeHandle *nh){
  pub = nh->advertise<robot_info::custom>("/robot_info", 1000);
  ROS_INFO("/robot_info topic is being published...");
  robot_description = "Robot is described";
  serial_number = "Serial #32";
  ip_address = "122.232.21";
  firmware_version = "v2.1";
};

void RobotInfo::publish_data(){
  ROS_INFO("Robot description: %s ", robot_description.c_str());
  ROS_INFO("Serial number: %s", serial_number.c_str());
  ROS_INFO("IP Address: %s", ip_address.c_str());
  ROS_INFO("Firmware version: %s", firmware_version.c_str());
}

