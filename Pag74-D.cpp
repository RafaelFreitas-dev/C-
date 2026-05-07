// PAGINA 74 - LIVRO MANZANO
// QUESTÃO D) Ler 15 elementos de uma matriz tipo vetor. Construir uma matriz B de mesmo tipo, observando a seguintes lei de formação: “Todo elemento de B deverá ser o quadrado do elemento de A correspondente”. Apresentar as matrizes A e B.

#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

// Variaveis Globais
int A[15];
int B[15];

int main(){
    system("cls");
    setlocale(LC_ALL,"Portuguese-brasilian");

    // perguntando ao Usuario
    cout<<"Digite os 15 Elementos da Matriz A: "<<endl;

    //loop para coletar o VETOR A[].
    for(int i=0; i<15; i++){
        cout<<"VETOR A["<< i+1 <<"]=";
        cin>>A[i];
    }
    system("cls"); // Linpando a Tela
    system("pause 3"); // Pausando o Programa 3 segundos

    // Mostrando o Resultado da Matriz.
    for(int i=0; i<15; i++){
        B[i] = A[i] *A[i];
        cout<<"A["<<A[i]<<"] = B["<<B[i]<<"]"<<endl;
    }
    return 0;
}