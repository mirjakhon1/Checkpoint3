#pragma once
#include <string>
#include "ros/ros.h"

class HydraulicSystemMonitor{
  public:
    HydraulicSystemMonitor();
    void set_monitor_values();
    std::string hydraulic_oil_temperature;
    std::string hydraulic_oil_tank_fill_level;
    std::string hydraulic_oil_pressure;
};

