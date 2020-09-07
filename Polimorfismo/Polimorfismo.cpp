#include <iostream>
#include "Polimorfismo_Persona.hpp"
#include "Polimorfismo_Maestro.hpp"
#include "Polimorfismo_Alumno.hpp"
#include <vector>
using namespace std;
int main(){
    Polimorfismo_Maestro m("Martin", "Cuellar", "12345", 1500);
    m.Imprimir();
    Polimorfismo_Alumno a ("Gabriel", "Vasquez", "67890", 1000);
    a.Imprimir();
    vector <Polimorfismo_Persona*> personas(2);
    personas[0] = dynamic_cast<Polimorfismo_Persona*>(&m);
    personas[1] = dynamic_cast<Polimorfismo_Persona*>(&a);
    for (Polimorfismo_Persona *personaPtr : personas){
        cout << personaPtr->Ingresos() << " ->";
        personaPtr->Imprimir();
    } 
}