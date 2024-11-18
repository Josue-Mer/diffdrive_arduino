#ifndef DIFFDRIVE_ARDUINO_CONFIG_H
#define DIFFDRIVE_ARDUINO_CONFIG_H

#include <string>


struct Config
{
  std::string left_wheel_name = "left_wheel";
  std::string right_wheel_name = "right_wheel";
  float loop_rate = 30;
  std::string device = "/dev/serial/by-path/platform-fd500000.pcie-pci-0000:01:00.0-usb-0:1.3:1.0";
  int baud_rate = 115200; //57600
  int timeout = 1000;
  int enc_counts_per_rev = 90;
};


#endif // DIFFDRIVE_ARDUINO_CONFIG_H