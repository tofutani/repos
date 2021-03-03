
#include <WeatherStation.h>

WeatherStation::WeatherStation () {

// 
  m_Console.addSensor(m_Temp);
// 

// 

//     
  m_Console.addSensor(m_WindSpeed);
//   
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
