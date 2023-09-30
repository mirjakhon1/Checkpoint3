#include "ros/node_handle.h"
#include "ros/publisher.h"
#include "string"
#include "robot_info/robot_info.h"
#include "robot_info/custom.h"

using namespace std;

RobotInfo::RobotInfo(ros::NodeHandle *nh){
  pub = nh->advertise<robot_info::custom>("/robot_info", 1000);
  ROS_INFO("/robot_info topic is being published...");
  robot_description = "robot_description: Mir100";
  serial_number = "serial_number: 567A359";
  ip_address = "ip_address: 169.254.5.180";
  firmware_version = "firmware_version: 3.5.8";
};

void RobotInfo::publish_data(){
  robot_msg.robot_desc = robot_description;
  robot_msg.serial_num = serial_number;
  robot_msg.ip_address = ip_address;
  robot_msg.firmware_ver = firmware_version;
  pub.publish(robot_msg);
}

