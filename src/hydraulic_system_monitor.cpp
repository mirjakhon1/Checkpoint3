#include "robot_info/hydraulic_system_monitor.h"

HydraulicSystemMonitor::HydraulicSystemMonitor(){
  
}
void HydraulicSystemMonitor::set_monitor_values(){
  hydraulic_oil_temperature = "45 C";
  hydraulic_oil_tank_fill_level = "100%";
  hydraulic_oil_pressure = "250 bar";
}