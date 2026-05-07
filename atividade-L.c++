// EXERCICIO L - PAGINA 26

// ELABORAR UM PROGRAMA QUE EFETUE A LEITURA DE 3 VALORES(A, B E C) E APRESENTE COMO RESULTADO FINAL A SOMA DOS QUADRADOS DOS 3 VALORES LIDOS

#include <iostream>
#include "math.h"
#include "cstdlib"

using namespace std;

int a,b,c, ares, bres, cres, soma;

int main(){
    system("cls"); // Comando para limpar a tela a toda inicialização do programa
    setlocale(LC_ALL,"Portuguese");

    cout<<"\n-------------------";
    cout<<"\n Somando 3 valores ";
    cout<<"\n-------------------";

    cout<<"\nPrimeiro Valor: ";
    cin>>a;

    cout<<"Segundo Valor: ";
    cin>>b;

    cout<<"Terceiro Valor: ";
    cin>>c;

    ares = a * a;
    bres = b * b;
    cres = c * c;

    soma = ares + bres + cres;

    cout<<"\nO Quadrado de "<< a <<" é "<< ares;
    cout<<"\nO Quadrado de "<< b <<" é "<< bres;
    cout<<"\nO Quadrado de "<< c <<" é "<< cres;
    
    cout<<"\nSendo assim a soma de "<< ares<< " + "<< bres <<" + "<< cres <<" = "<< soma;

    return 0;
}