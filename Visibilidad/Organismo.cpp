#include "Organismo.hpp"
string Organismo::getOAdn1() { 
  return adn1;
};
string Organismo::getOAdn2() {
  return adn2;
}
Organismo::Organismo(string adn) {
  adn1 = adn + "O" + "private";
  adn2 = adn + "O" + "protected";
  adn3 = adn + "O" + "public";
}
string Organismo::getOAdn3() {
  return adn3;
}
