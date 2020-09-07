#pragma once 
#include <string>
#include "Polimorfismo_Persona.hpp"
class Polimorfismo_Alumno : public Polimorfismo_Persona {
    string NumeroCuenta;
    double Mesada;
    public:
    Polimorfismo_Alumno(string Nombre, string Apellido, string NumeroCuenta, double Mesada);
    string obtenerNumero();
    virtual double Ingresos() const override;
    virtual void Imprimir() const override;
};