#include "Humano.hpp"
#include "Organismo.hpp"
string Humano::getHAdn1() { 
  #ifdef errores
  return adn1;
  #else
  return getOAdn1();
  #endif
};
string Humano::getHAdn2() {
  return adn2;
}
Humano::Humano(string adn) : Organismo(adn) {
  #ifdef errores
  adn1 = adn + "H" + "private";
  #endif
  adn2 = adn + "H" + "protected";
  adn3 = adn + "H" + "public";
}
string Humano::getHAdn3() {
  return adn3;
}