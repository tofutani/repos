
#include <Sensors/Pressure.h>
#include <math.h>

Pressure::Pressure () {
  m_Value = 980;
  m_Dx = 1;
}

std::string Pressure::getName () {
  return "Pressure   ";
}

std::string Pressure::getUnit () {
  return "hPa";
}

float Pressure::getValue () {
  if( m_Value == 1100 || m_Value == 900 ) { m_Dx = -m_Dx; }
  m_Value += m_Dx;
  return floor(m_Value);
}
