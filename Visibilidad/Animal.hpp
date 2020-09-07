#pragma once
#include <string>
#include "Organismo.hpp"
using namespace std;
class Animal : private Organismo {
  // Herencia privada: 
  // los public y protected de la clase base pasan a ser private en la clase derivada.
  public:
  Animal(string);
  string getAAdn1();
  string getAAdn2();
  string getAAdn3();
};