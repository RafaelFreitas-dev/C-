// EXERCICIO K - PAGINA 26

// ELABORAR UM PROGRAMA QUE EFETUE A APRESENTAÇÃO DO VALOR DA CONVERSÃO EM DOLAR DE UM VALOR LIDO EM REAL. O PROGRAMA DEVE SOLICITAR O VALOR DA COTAÇÃO EM DOLAR E TAMBÉM A QUANTIDADE DE DOLARES DISPONIVEL COM O USUARIO, PARA QUE SEJA APRESENTADO O VALOR EM MOEDA AMERICANA

#include <iostream>
#include "math.h"
#include "cstdlib"
#define dolar 5.77;

using namespace std;

int main(){
    system("cls"); // Comando para limpar a tela a toda inicialização do programa
    setlocale(LC_ALL,"Portuguese");

    double reais, res;

    cout<<"\n======== CONVERSOR =========";
    cout<<"\n============================";

    cout<<"\nA cotação atual do DOLAR é U$"<< dolar;
    cout<<"\nQuantos reais você quer converter em Dolar: ";
    cin>>reais;

    res = reais / dolar;

    cout<<"Você esta com R$"<< reais <<" Reais na carteira e convertendo ficará com U$"<< res <<" Dolares";

    return 0;
}