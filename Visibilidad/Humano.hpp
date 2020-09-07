#pragma once
#include <string>
#include "Organismo.hpp"
using namespace std;
class Humano : public Organismo {
  // Herencia pública: 
  // los miembros public, private, protected de la clase base son iguales en la clase derivada.
  public:
  Humano(string);
  string getHAdn1();
  string getHAdn2();
  string getHAdn3();
};