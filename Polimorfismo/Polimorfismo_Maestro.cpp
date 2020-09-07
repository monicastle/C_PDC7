#include <iostream>
#include "Polimorfismo_Maestro.hpp"
#include "Polimorfismo_Persona.hpp"
Polimorfismo_Maestro::Polimorfismo_Maestro(string Nombre, string Apellido, string NumeroTalentoHumano, double Salario) :
Polimorfismo_Persona(Nombre, Apellido){
    this->NumeroTalentoHumano = NumeroTalentoHumano;
    this->Salario = Salario;
}
string Polimorfismo_Maestro::obtenerNumero(){
    return NumeroTalentoHumano;
}
double Polimorfismo_Maestro::Ingresos() const {
    return Salario;
}
void Polimorfismo_Maestro::Imprimir() const {
    cout << "Empleado asalariado: ";
    Polimorfismo_Persona::Imprimir();
    cout << " | Salario: " << Salario << endl;
}