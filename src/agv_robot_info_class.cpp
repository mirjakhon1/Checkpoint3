#include "robot_info/agv_robot_info.h"
#include "robot_info/custom.h"

using namespace std;

AGVRobotInfo::AGVRobotInfo(ros::NodeHandle* nh) : RobotInfo(nh) {
    maximum_payload = "100 kg";
}

void AGVRobotInfo::publish_data(){
  robot_info::custom robot_info_msg;
  robot_info_msg.robot_desc.data = "AGV description ";
  robot_info_msg.serial_num.data = "44ground";
  robot_info_msg.ip_address.data = "245.524";
  robot_info_msg.firmware_ver.data = "21";
  robot_info_msg.max_payload.data = maximum_payload;
  pub.publish(robot_info_msg);
}