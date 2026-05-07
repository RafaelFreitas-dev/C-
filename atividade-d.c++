// EXERCICIO D - PAGINA 25


/* 
Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um automóvel que faz 12 Km por litro. Para obter o cálculo, o usuário deve fornecer o tempo gasto (TEMPO) e a velocidade média (VELOCIDADE) durante a viagem.
Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA ← TEMPO * VELOCIDADE.
Possuindo o valor da distância, basta calcular a quantidade de litros de combustível utilizada na viagem com a fórmula
LITROS_USADOS ← DISTANCIA / 12. Ao final, o programa deve apresentar os valores da velocidade 
média (VELOCIDADE), tempo gasto na viagem (TEMPO), a distancia percorrida (DISTANCIA) e a 
quantidade de litros (LITROS_USADOS) utilizada na viagem. 
*/

#include <iostream>
#include "math.h"
#include "cstdlib"
#define kmlitro 12
using namespace std;

int main (){
    system("cls");
    setlocale(LC_ALL,"portuguêse");
    cout<<"\n=========================================";
    cout<<"\n===== ATIVIDADE C++ - EXERCICIO D =====";
    cout<<"\n=========================================";

    // variavéis
    double dist, tempo, velo,gasto;

    cout<<"\nQuantos Kms percorridos: ";
    cin >> dist;
    cout<<"Qual foi o tempo gasto nessa viagem: ";
    cin>>tempo;
    //formula distancia = tempo * velocidade
    //sabendo sua velocidade média
    velo = dist / tempo;

    // calculando os litros gastos
    gasto = dist / kmlitro;

    cout<<"\n==================================";
    cout<<"\nSua velocidade media foi de "<<velo<< " kms/hora.";
    cout<<"\nSeu tempo gasto na viagem foi "<<tempo<<"horas";
    cout<<"\nEm uma distancia de "<<dist<<" Kms";
    cout<<"\nSeu gasto de combustivel foi "<<gasto<<" Litros.";
    cout<<"\n==================================";

    return 0;
}