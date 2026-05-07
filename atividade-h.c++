// EXERCICIO H - PAGINA 26

// Elaborar um programa que calcule e apresente o volume de uma caixa retangular, por meio da fórmula VOLUME ← COMPRIMENTO * LARGURA * ALTURA.

#include <iostream>
#include "math.h"
#include "cstdlib"
using namespace std;

int main(){
    system("cls"); // Limpar Tela
    setlocale(LC_ALL,"Portuguese"); // configuração de caracteres para portugues

    cout<<"\n==============================";
    cout<<"\n      CALCULANDO VOLUME       ";
    cout<<"\n==============================";

    double comp, larg, alt, vol;

    cout<<"\nQual e o Comprimento: "; 
    cin>>comp;

    cout<<"Qual e a Largura: ";
    cin>>larg;

    cout<<"Qual e a Altura: ";
    cin>>alt;

    vol = comp*larg*alt;

    cout<<"\nA  formula utilizada foi Volume = "<< comp <<" x "<< larg <<" x "<< alt;
    cout<<"\nCalculando seu resultado... ";
    system("pause");
    cout<<"Seu Volume e "<<vol<< " Metros cubicos";

    return 0;
}
