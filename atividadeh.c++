// EXERCICIO H - PAGINA 26

// Elaborar um programa que calcule e apresente o volume de uma caixa retangular, por meio da fórmula VOLUME ← COMPRIMENTO * LARGURA * ALTURA.

#include <iostream>
#include "math.h"
#include "cstdlib"
using namespace std;

int main(){
    system("cls");
    setlocale(LC_ALL,"Portuguese");

    cout<<"\n==============================";
    cout<<"\nVOLUME DE UMA CAIXA RETANGULAR";
    cout<<"\n======== EM METROS ===========";

    double comp, larg, alt, vol;

    cout<<"\nQual e o Comprimento: ";
    cin>>comp;

    cout<<"Qual e a Largura: ";
    cin>>larg;

    cout<<"Qual e a Altura: ";
    cin>>alt;

    vol = comp*larg*alt;

    cout<<"\nA  formula utilizada foi Volume = "<< comp<<" x "<< larg<<" x "<< alt;
    cout<<"\nCalculando seu resultado... ";
    system("pause 3");
    cout<<"Seu Volume e "<<vol<< " Metros cubicos";

    return 0;
}
