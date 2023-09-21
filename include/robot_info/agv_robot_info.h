#pragma once
#include "robot_info/robot_info.h" 
#include <string>
#include "robot_info/hydraulic_system_monitor.h"
#include "robot_info/custom.h"

using namespace std;

class AGVRobotInfo : public RobotInfo{
    
  public:
    AGVRobotInfo(ros::NodeHandle* nh);
    void publish_data();
    void assign_hydraulic_values();
    robot_info::custom robot_info_msg;
  protected:
    string maximum_payload;
    HydraulicSystemMonitor hydro_monitor;
};