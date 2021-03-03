
#include <Sensors/Temperature.h>

Temperature::Temperature () {
  srand(clock());
  m_Value = 20;
  m_Dx = 0.1;
}

void Temperature::getNextValue () {
  if( m_Value > 45 || m_Value < -45 ) { m_Dx = -m_Dx; }
  m_Value += m_Dx;
}

std::string Temperature::getName () {
  return "Temperature";
}

std::string Temperature::getUnit () {
#ifdef FAHRENHEIT
  return "°F";
#else
  return "°C";
#endif
}

float Temperature::getValue () {
  getNextValue();
#ifdef FAHRENHEIT
  return (m_Value * 1.8) + 32;
#else
  return m_Value;
#endif
}
