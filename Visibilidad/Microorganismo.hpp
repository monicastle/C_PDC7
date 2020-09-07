#pragma once
#include <string>
#include "Organismo.hpp"
using namespace std;
class Microorganismo : protected Organismo {
  // Herencia protegida: 
  // los public y protected de la clase base pasan a ser protected en la clase derivada.
  public:
  Microorganismo(string);
  string getMOAdn1();
  string getMOAdn2();
  string getMOAdn3();
};