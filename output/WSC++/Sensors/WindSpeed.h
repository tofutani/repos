
#ifndef __WindSpeed_h__
#define __WindSpeed_h__

#include <Sensors/Sensor.h>

class WindSpeed : public Sensor {
  float   m_Value;
  float   m_Dx;

  void getNextValue();
  float toBft();
public:
  WindSpeed ();
  std::string getName ();
  float getValue ();
  std::string getUnit ();
};

#endif
