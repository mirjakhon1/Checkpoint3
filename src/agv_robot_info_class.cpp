#include "robot_info/agv_robot_info.h"
#include "robot_info/custom.h"

using namespace std;

AGVRobotInfo::AGVRobotInfo(ros::NodeHandle* nh) : RobotInfo(nh) {
    maximum_payload = "maximum_payload: 100 Kg";
}

void AGVRobotInfo::publish_data(){
  robot_info::custom robot_info_msg;
  robot_info_msg.robot_desc = "robot_description: Mir100";
  robot_info_msg.serial_num = "serial_number: 567A359";
  robot_info_msg.ip_address = "ip_address: 169.254.5.180";
  robot_info_msg.firmware_ver = "firmware_version: 3.5.8";
  robot_info_msg.max_payload = maximum_payload;
  pub.publish(robot_info_msg);
}