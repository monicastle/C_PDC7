#include <iostream>
#include "Polimorfismo_Persona.hpp"
using namespace std;
Polimorfismo_Persona::Polimorfismo_Persona(string Nombre, string Apellido){
    this->Nombre = Nombre;
    this->Apellido = Apellido;
}
string Polimorfismo_Persona::obtenerNombre(){
    return Nombre;
}
void Polimorfismo_Persona::Imprimir() const {
    cout << Nombre << ' ' << Apellido;
}