#include <iostream>
#include "Polimorfismo_Alumno.hpp"
#include "Polimorfismo_Persona.hpp"
Polimorfismo_Alumno::Polimorfismo_Alumno(string Nombre, string Apellido, string NumeroCuenta, double Mesada) :
Polimorfismo_Persona(Nombre, Apellido){
    this->NumeroCuenta = NumeroCuenta;
    this->Mesada = Mesada;
}
string Polimorfismo_Alumno::obtenerNumero(){
    return NumeroCuenta;
}
double Polimorfismo_Alumno::Ingresos() const {
    return Mesada;
}
void Polimorfismo_Alumno::Imprimir() const{
    cout << "Alumno con Mesada: ";
    Polimorfismo_Persona::Imprimir();
    cout << " | Mesada: " << Mesada << endl;
}