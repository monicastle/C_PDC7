#pragma once
#include <string>
//#define errores
using namespace std;
class Organismo {
  string adn1;
  protected:
  string adn2;
  public:
  string adn3;
  Organismo(string);
  virtual string getOAdn1();
  virtual string getOAdn2();
  virtual string getOAdn3();
};