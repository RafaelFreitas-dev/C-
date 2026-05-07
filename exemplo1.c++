//Exercicio exemplo com uso de função do Tipo Void();


//Simulação 1 - Tipo Void

#include <iostream>
#include "math.h"
#include "cstdlib"
using namespace std;


// variaveis
double const pi = 3.14; // constante
double altura = 5.55; // variável global

// Chamada do funcionalidade
void verVolume ( double raio ); // declaração

int main() {
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    double raio = 10.5;
    verVolume ( raio ); // chamada por referência 
    verVolume ( 13.4 ); // chamada por valor
    system("pause 5"); 
}

// código do void
void verVolume ( double raio ){
    double volume = raio * raio * pi * altura;
    cout<< "\nVolume : " << volume << endl;
    system("pause 5");
    
    return; 
}