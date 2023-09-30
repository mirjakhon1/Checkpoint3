#include "ros/init.h"
#include "ros/node_handle.h"
#include "ros/publisher.h"
#include "ros/ros.h"
#include "robot_info/robot_info.h"
#include "robot_info/custom.h"

int main(int argc, char** argv){
  ros::init(argc, argv, "robot_info");
  ROS_INFO("Initializing robot_info node...");

  ros::NodeHandle node_hanlde;
  RobotInfo rf = RobotInfo(&node_hanlde);
  while(ros::ok()){
    rf.publish_data();
    ros::spinOnce();
  }
//   while(ros::ok()){
//     rf.publish_data();
//     ros::spinOnce();
//   }
  return 0;
}