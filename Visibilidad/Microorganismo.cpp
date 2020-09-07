#include "Microorganismo.hpp"
#include "Organismo.hpp"
string Microorganismo::getMOAdn1() {
  #ifdef errores
  return adn1;
  #else
  return getOAdn1();
  #endif
}
string Microorganismo::getMOAdn2() {
  return adn2;
}
Microorganismo::Microorganismo(string adn) : Organismo(adn) {
  #ifdef errores
  adn1 = adn + "o" + "private";
  #endif
  adn2 = adn + "o" + "protected";
  adn3 = adn + "o" + "public";  
}
string Microorganismo::getMOAdn3() {
  return adn3;
}