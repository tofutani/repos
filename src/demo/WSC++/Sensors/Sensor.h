#ifndef __Sensor_h__
#define __Sensor_h__

#include <string>

class Sensor {
public:
  virtual std::string getName () = 0;
  virtual std::string getUnit () = 0;
  virtual float getValue () = 0;
};

#endif
