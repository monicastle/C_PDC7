#pragma once
#include <string>
using namespace std;
class Polimorfismo_Persona {
    public:
    Polimorfismo_Persona(string Nombre, string Apellido);
    string obtenerNombre();
    virtual double Ingresos() const = 0;
    virtual void Imprimir() const;
    private:
    string Nombre, Apellido;
};