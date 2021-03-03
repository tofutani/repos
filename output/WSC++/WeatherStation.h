
#ifndef __WeatherStation_h__
#define __WeatherStation_h__


// 
#include <Sensors/Temperature.h>
// 
  
//   
#include <Sensors/Pressure.h>
// 
  
//   
#include <Sensors/WindSpeed.h>
//   

#include <Display/Console.h>

class WeatherStation {

  Console       m_Console;
  
// 
  Temperature   m_Temp;
// 
  
//   
  Pressure      m_Pressure;
// 
  
//   
  WindSpeed     m_WindSpeed;
//   
  

public:
  WeatherStation ();
  void run ();
};

#endif
