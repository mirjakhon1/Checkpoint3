#pragma once
#include "robot_info/robot_info.h" 
#include <string>

using namespace std;

class AGVRobotInfo : public RobotInfo {
    
  public:
    AGVRobotInfo(ros::NodeHandle* nh);
    void publish_data();
  protected:
    string maximum_payload;
};