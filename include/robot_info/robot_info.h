#pragma once
#include "string"
#include <ros/ros.h>

using namespace std;

class RobotInfo{
  public:
    RobotInfo(ros::NodeHandle *nh);
    virtual void publish_data();
    ros::Publisher pub;
  protected:
    string robot_description;
    string serial_number;
    string ip_address;
    string firmware_version;
};