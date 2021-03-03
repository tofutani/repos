
#ifndef __Console_h__
#define __Console_h__

#include <Sensors/Sensor.h>
#include <list>

class Console {
  typedef std::list<Sensor*> SensorList;

  SensorList    m_Sensors;
public:
  Console ();

  void addSensor (Sensor& sensor);
  void write ();
};

#endif
