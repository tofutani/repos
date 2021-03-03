
#include <WeatherStation.h>

WeatherStation::WeatherStation () {

// PV:IFCOND(pv:hasFeature('Temperature'))
  m_Console.addSensor(m_Temp);
// PV:ENDCOND

// PV:IFCOND(pv:hasFeature('AirPressure'))
  m_Console.addSensor(m_Pressure);
// PV:ENDCOND

// PV:IFCOND(pv:hasFeature('WindSpeed'))    
  m_Console.addSensor(m_WindSpeed);
// PV:ENDCOND  
}

void WeatherStation::run () {

  int j , k ;

  for(;;) {
    m_Console.write();
    //usleep(200000);
    for(j = 0;j<30000;j++){
        for (k=0;k<1000;k++){
	   j = j;
	}
    }
  }
}
