#pragma once
#include "robot_info/robot_info.h" 
#include <string>
#include "robot_info/hydraulic_system_monitor.h"

using namespace std;

class AGVRobotInfo : public RobotInfo{
    
  public:
    AGVRobotInfo(ros::NodeHandle* nh);
    void publish_data();
  protected:
    string maximum_payload;
    HydraulicSystemMonitor hydro_monitor;
};