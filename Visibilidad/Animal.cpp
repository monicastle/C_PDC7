#include "Animal.hpp"
#include "Organismo.hpp"
string Animal::getAAdn1() {
  #ifdef errores
  return adn1;
  #else
  return getOAdn1();
  #endif
}
string Animal::getAAdn2() {
  return adn2;
}
Animal::Animal(string adn) : Organismo(adn) {
  #ifdef errores
  adn1 = adn + "A" + "private";
  #endif
  adn2 = adn + "A" + "protected";
  adn3 = adn + "A" + "public";  
}
string Animal::getAAdn3() {
  return adn3;
}