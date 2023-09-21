#include "ros/init.h"
#include "ros/node_handle.h"
#include "ros/publisher.h"
#include "ros/ros.h"
#include "robot_info/agv_robot_info.h"


int main(int argc, char** argv){
  ros::init(argc, argv, "agv_robot_info");
  ROS_INFO("Initializing agv_robot_info node...");

  ros::NodeHandle node_hanlde;
  AGVRobotInfo agv = AGVRobotInfo(&node_hanlde);

  while(ros::ok()){
    agv.publish_data();
    ros::spinOnce();
  }

  return 0;
}