
#ifndef __Temperature_h__
#define __Temperature_h__

#include <Sensors/Sensor.h>
#include <Time.h>
#include <stdlib.h>

class Temperature : public Sensor {
  float  m_Value;
  float  m_Dx;

  void getNextValue();
public:
  Temperature ();
  std::string getName ();
  float getValue ();
  std::string getUnit ();
};

#endif
