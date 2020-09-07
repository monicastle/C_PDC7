#include <iostream>
#include "Persona.hpp"
#include "Maestro.hpp"
#include "Alumno.hpp"
using namespace std;
int main(){
    Persona p("Martin", "Cuellar", Persona::TipoGenero::Masculino);
    cout << p.obtenerNombre() << " (";
    cout << (p.obtenerGenero() == 0 ? "Hombre" : "Mujer") << ")" << endl;
    Maestro m("Martin", "Cuellar", Persona::TipoGenero::Masculino, "12345");
    cout << m.obtenerNombre() << " #" << m.obtenerNumero() << " (";
    cout << (m.obtenerGenero() == Persona::TipoGenero::Masculino ? "Hombre" : "Mujer") << ")" << endl;
    Alumno a("Gabriel", "Vasquez", Persona::TipoGenero::Masculino, "67890");
    cout << a.obtenerNombre() << " #" << a.obtenerNumero() << endl;
}