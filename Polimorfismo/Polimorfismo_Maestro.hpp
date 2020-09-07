#pragma once 
#include <string>
#include "Polimorfismo_Persona.hpp"
class Polimorfismo_Maestro : public Polimorfismo_Persona{
    string NumeroTalentoHumano;
    double Salario;
    public:
    Polimorfismo_Maestro(string Nombre, string Apellido, string NumeroTalentoHumano, double Salario);
    string obtenerNumero();
    virtual double Ingresos() const override;
    virtual void Imprimir() const override;   
};