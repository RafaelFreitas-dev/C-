// EXERCICIO E - PAGINA 26

// Efetuar o cálculo e a apresentação do valor de uma prestação em atraso, utilizando a fórmula PRESTACAO ← VALOR + (VALOR * TAXA/100) * TEMPO.

#include <iostream>
#include "math.h"
#include "cstdlib"
#define taxa 5.5 // Coloquei uma taxa fixa de 5.50 reias

using namespace std;

int main(){
    system("cls");
    setlocale(LC_ALL,"Portuguese");

    double valor, tot, mensal;
    int tempo;

    cout<<"Qual e o seu valor de divida: ";
    cin>>valor;

    cout<<"Em quanto meses deseja pagar: ";
    cin>>tempo;

    tot = valor + (valor * taxa/100) * tempo;
    mensal = tot / tempo;

    cout<<"A divida ficara em "<<tot<<" e o pagamento por mes sera de "<<tempo<<" X de "<<mensal<<" Reias.";
    return 0;
}