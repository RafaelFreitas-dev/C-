// EXERCICIO C - PAGINA 25

// Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula: Volume = pi* Raio ** 2 * Altura

#include <iostream>
#include "math.h"
#include "cstdlib"
#define pi 3.14
using namespace std;

// variaveis
double raio, diametro, altura, volume;

int main(){
    system("cls");
    setlocale(LC_ALL,"Portuguêse");
    cout<<"\n=========================================";
    cout<<"\n====== ATIVIDADE C++ - EXERCICIO C ======";
    cout<<"\n=========================================";

    cout <<"\nQual o diametro do recepiente em centimetros: ";
    cin >> diametro;

    // descobrindo o Raio
    raio = diametro / 2;

    cout<<"Qual a altura em centimetros:";
    cin>>altura;

    volume = pi * (raio * raio) * altura;
    cout<<"\n=========================================";
    cout<<"\nO volume do recepiente foi "<<volume<<" centimetros cúbicos";
    cout<<"\n=========================================";

    return 0;
}