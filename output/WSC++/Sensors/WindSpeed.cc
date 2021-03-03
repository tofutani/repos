
#include <Sensors/WindSpeed.h>

WindSpeed::WindSpeed () {
  m_Value = 14;
  m_Dx = 0.05;
}

void WindSpeed::getNextValue () {
  if( m_Value > 24 || m_Value < 1 ) { m_Dx = -m_Dx; }
  m_Value += m_Dx;
}

std::string WindSpeed::getName () {
  return "WindSpeed  ";
}

std::string WindSpeed::getUnit () {
#ifdef SPEED_KMH
  return "km/h";
#else
  #ifdef SPEED_KNOT
    return "Knot";
  #else
    #ifdef SPEED_BFT
      return "Bft";
    #else
      #ifdef SPEED_MPH
        return "MPH";
      #else
        #ifdef SPEED_FPS
          return "FPS";
        #else
          return "m/s";
        #endif
      #endif
    #endif
  #endif
#endif
}

float WindSpeed::getValue () {
  getNextValue();
#ifdef SPEED_KMH
  return m_Value * 3.6;
#else
  #ifdef SPEED_KNOT
    return m_Value * 1.943845;
  #else
    #ifdef SPEED_BFT
      return toBft();
    #else
      #ifdef SPEED_MPH
        return m_Value * 2.237;
      #else
        #ifdef SPEED_FPS
          return m_Value * 3.281;
        #else
          return m_Value;
        #endif
      #endif
    #endif
  #endif
#endif
}

#define VALIN(min,max) ((m_Value)>=(min) && (m_Value)<(max))
float WindSpeed::toBft () {
  if( VALIN(   0,   0.3 ) ) return 0;
  if( VALIN(  0.3,  1.6 ) ) return 1;
  if( VALIN(  1.6,  3.4 ) ) return 2;
  if( VALIN(  3.4,  5.5 ) ) return 3;
  if( VALIN(  5.5,  8.0 ) ) return 4;
  if( VALIN(  8.0, 10.8 ) ) return 5;
  if( VALIN( 10.8, 13.9 ) ) return 6;
  if( VALIN( 13.9, 17.2 ) ) return 7;
  if( VALIN( 17.2, 20.8 ) ) return 8;
  if( VALIN( 20.8, 24.5 ) ) return 9;
  if( VALIN( 24.5, 28.5 ) ) return 10;
  if( VALIN( 28.5, 32.7 ) ) return 11;
  return 12;
}
