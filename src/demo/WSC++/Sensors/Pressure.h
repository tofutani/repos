
#ifndef __Pressure_h__
#define __Pressure_h__

#include <Sensors/Sensor.h>

class Pressure : public Sensor {
  float   m_Value;
  float   m_Dx;
public:
  Pressure ();
  std::string getName ();
  float getValue ();
  std::string getUnit ();
};

#endif
