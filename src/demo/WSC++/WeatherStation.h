
#ifndef __WeatherStation_h__
#define __WeatherStation_h__


// PV:IFCOND(pv:hasFeature('Temperature'))
#include <Sensors/Temperature.h>
// PV:ENDCOND
  
// PV:IFCOND(pv:hasFeature('AirPressure'))  
#include <Sensors/Pressure.h>
// PV:ENDCOND
  
// PV:IFCOND(pv:hasFeature('WindSpeed'))  
#include <Sensors/WindSpeed.h>
// PV:ENDCOND  

#include <Display/Console.h>

class WeatherStation {

  Console       m_Console;
  
// PV:IFCOND(pv:hasFeature('Temperature'))
  Temperature   m_Temp;
// PV:ENDCOND
  
// PV:IFCOND(pv:hasFeature('AirPressure'))  
  Pressure      m_Pressure;
// PV:ENDCOND
  
// PV:IFCOND(pv:hasFeature('WindSpeed'))  
  WindSpeed     m_WindSpeed;
// PV:ENDCOND  
  

public:
  WeatherStation ();
  void run ();
};

#endif
