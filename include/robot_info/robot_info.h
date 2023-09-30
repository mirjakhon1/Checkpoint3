#pragma once
#include "string"
#include <ros/ros.h>
#include "robot_info/custom.h"

using namespace std;

class RobotInfo{
  public:
    RobotInfo(ros::NodeHandle *nh);
    virtual void publish_data();
    ros::Publisher pub;
  protected:
    robot_info::custom robot_msg;
    string robot_description;
    string serial_number;
    string ip_address;
    string firmware_version;
};