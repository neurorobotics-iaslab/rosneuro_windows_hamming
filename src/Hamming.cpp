#include "rosneuro_windows_hamming/Hamming.hpp"
#include "pluginlib/class_list_macros.h"

PLUGINLIB_EXPORT_CLASS(rosneuro::Hamming<int>,    rosneuro::Window<int>)
PLUGINLIB_EXPORT_CLASS(rosneuro::Hamming<float>,  rosneuro::Window<float>)
PLUGINLIB_EXPORT_CLASS(rosneuro::Hamming<double>, rosneuro::Window<double>)

