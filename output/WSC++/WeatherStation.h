
#ifndef __WeatherStation_h__
#define __WeatherStation_h__


// 
#include <Sensors/Temperature.h>
// 
  
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
  
//   
  WindSpeed     m_WindSpeed;
//   
  

public:
  WeatherStation ();
  void run ();
};

#endif
