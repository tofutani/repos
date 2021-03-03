
#include <Display/Console.h>
#include <iostream>

#define UNIX_CONSOLE


Console::Console () {}

void Console::addSensor (Sensor& sensor) {
  m_Sensors.push_back(&sensor);
}

void Console::write () {
  SensorList::iterator idx = m_Sensors.begin();
#ifdef UNIX_CONSOLE
  std::cout << (char)27 << '[' << 'H' << (char)27 << '[' << 'J';
#else
  std::cout << (char)27 << '[' << '2' << 'J';
#endif
  std::cout << "  ### Weather Station ###" << std::endl;
  for( ; idx != m_Sensors.end(); ++idx ) {
    Sensor* s = *idx;
    std::cout << s->getName() << ": " << s->getValue() << (char)9 << s->getUnit() << std::endl;
  }
    std::cout << std::endl;
}
