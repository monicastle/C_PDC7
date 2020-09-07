#include "Pila.hpp"
#include <iostream>
#include <string>
using namespace std;
void Cadenas(){
    Pila <string> stringPila;
    const size_t stringPilaTam = 10;
    cout << "\n--> Insertar elementos en stringPila \n";
    for (size_t i = 0; i < stringPilaTam; i++){
        string stringTemp = "C++" + to_string(i);
        stringPila.insertar(stringTemp);
        cout << stringTemp << ' ';
    }
    cout << "\n<-- Extraer elementos de stringPila\n";
    while (!stringPila.estaVacia()){
        cout << stringPila.arriba() << ' ';
        stringPila.extraer();
    } 
}