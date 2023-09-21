#include "robot_info/agv_robot_info.h"


using namespace std;

AGVRobotInfo::AGVRobotInfo(ros::NodeHandle* nh) : RobotInfo(nh) {
    maximum_payload = "maximum_payload: 100 Kg";
}

void AGVRobotInfo::publish_data(){
  
  robot_info_msg.robot_desc = "robot_description: Mir100";
  robot_info_msg.serial_num = "serial_number: 567A359";
  robot_info_msg.ip_address = "ip_address: 169.254.5.180";
  robot_info_msg.firmware_ver = "firmware_version: 3.5.8";
  robot_info_msg.max_payload = maximum_payload;
  assign_hydraulic_values();
  pub.publish(robot_info_msg);
}

void AGVRobotInfo::assign_hydraulic_values(){
  hydro_monitor.set_monitor_values();
  robot_info_msg.hydraulic_oil_temperature = hydro_monitor.hydraulic_oil_temperature;
  robot_info_msg.hydraulic_oil_tank_fill_level = hydro_monitor.hydraulic_oil_tank_fill_level;
  robot_info_msg.hydraulic_oil_pressure = hydro_monitor.hydraulic_oil_pressure;
}