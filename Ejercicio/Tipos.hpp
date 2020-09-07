#include "EJPila.hpp"
#include <iostream>
#include <string>
#include "EJMiClase.hpp"
using namespace std;
void Tipos(double tipoDouble){
    EJPila<double> doublePila;
    const size_t doublePilaTam = 5;
    double doubleValor = 1.1;
    cout << "\n--> Insertar elementos en doublePila\n";
    for (size_t i = 0; i < doublePilaTam; ++i){
        doublePila.insertar(doubleValor);
        cout << doubleValor << ' '; doubleValor += 1.1;
    }
    cout << "\n<-- Extraer elementos de doublePila\n";
    while (!doublePila.estaVacia()){
        cout << doublePila.arriba() << ' ';
        doublePila.extraer();
    }
}
void Tipos(string tipoString){
    EJPila <string> stringPila;
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
void Tipos(int tipoInt){
    EJPila <int> intPila;
    const size_t intPilaTam = 10;
    int intValor = 1;
    cout << "\n--> Insertar elementos en intPila \n";
    for (size_t i = 0; i < intPilaTam; ++i){
        intPila.insertar(intValor);
        cout << intValor++ << ' ';
    }
    cout << "\n<-- Extraer elementos de intPila \n";
    while (!intPila.estaVacia()){
        cout << intPila.arriba() << ' ';
        intPila.extraer();
    } 
}
void Tipos(EJMiClase tipoMiClase){
    EJPila< EJMiClase > mcPila;
    const size_t mcPilaTam = 10;
    cout << "\n--> Insertar elementos en mcPila\n";
    for (size_t i = 0; i < mcPilaTam; i++){
        string stringTemp = "MC" + to_string(i);
        EJMiClase mcTemp(stringTemp);
        mcPila.insertar(mcTemp);
        cout << stringTemp << ' ';
    }
    cout << "\n<-- Extraer elementos de mcPila\n";
    while (!mcPila.estaVacia()){
        cout << mcPila.arriba() << ' ';
        mcPila.extraer();
    }   
}