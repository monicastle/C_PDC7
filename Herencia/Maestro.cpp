#include "Maestro.hpp"
#include "Persona.hpp"
Maestro::Maestro(string Nombre, string Apellido, Persona::TipoGenero Genero, string NumeroTalentoHumano) : 
Persona(Nombre, Apellido, Genero){
    this->NumeroTalentoHumano = NumeroTalentoHumano;
}
string Maestro::obtenerNumero(){
    return NumeroTalentoHumano;
}