// EXERCICIO I- PAGINA 26

// Ler dois numeros inteiros(variaveis A e B) e imprimir o resultado do quadrado da diferença do primeiro valor pelo segundo.

#include <iostream>
#include "math.h"
#include "cstdlib"

using namespace std;

int a,b,res;

int main(){
    system("cls"); // Comando para limpar a tela a toda inicialização do programa
    setlocale(LC_ALL,"Portuguese");

    cout<<"\n============================";
    cout<<"\n==== LENDO DOIS NUMEROS ====";

    cout<<"\nDigite Seu primeiro Numero: ";
    cin>>a;

    cout<<"Digite Seu Segundo Numero: ";
    cin>>b;

    res = a*a;

    system("pause");

    cout<<"O Resultado do primeiro Numero que foi "<<a<<" Elevado ao quadrado fica "<<res<<".";

    return 0;
}