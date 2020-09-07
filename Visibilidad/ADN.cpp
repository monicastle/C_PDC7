#include <iostream>
#include "Organismo.hpp"
#include "Humano.hpp"
#include "Animal.hpp"
#include "Microorganismo.hpp"
int main() {
  Humano h("Persona1 ");
  Animal a("Animal1 ");
  Microorganismo o("Microorganismo1 ");
  h.adn3 = "PUBLIC";
  cout << endl << "public:" << endl << endl;
  cout << "  Humano->             Organismo: " << h.getOAdn1() << ", " << h.getOAdn2() << ", " << h.getOAdn3() << endl;
  cout << "  Humano->                Humano: " << h.getHAdn1() << ", " << h.getHAdn2() << ", " << h.getHAdn3()  << endl;
  cout << endl << "private:" << endl << endl;
  cout << "  Animal->             Organismo: ";
  #ifdef errores
  a.adn3 = "PUBLIC";
  cout << a.getOAdn1() << ", " << a.getOAdn2() << ", ";
  #endif
  cout << h.getOAdn3() << endl;
  cout << "  Animal->                Animal: " << a.getAAdn1() << ", " << a.getAAdn2() << ", " << a.getAAdn3()  << endl;
  cout << endl << "protected:" << endl << endl;
  #ifdef errores
  o.adn3 = "PUBLIC";
  cout << "  Microorganismo->     Organismo: " << o.getOAdn1() << ", " << o.getOAdn2() << ", " << o.getOAdn3() << endl;
  #endif
  cout << "  Microorganismo->Microorganismo: " << o.getMOAdn1() << ", " << o.getMOAdn2() << ", " << o.getMOAdn3()  << endl << endl;
  return 0;
}