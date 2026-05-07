// PAGINA 74 - LIVRO MANZANO
// QUESTÃO C) Ler duas matrizes A e B do tipo vetor com 20 elementos. Construir uma matriz C, onde cada elemento de C é a subtração do elemento correspondente de A com B. Apresentar a matriz C.  

#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

// Variaveis globais
int A[20];
int B[20];
int C[20];

int main(){
    system("cls");
    setlocale(LC_ALL,"Portuguese-brasilian");

    // Auxiliando o usuario a digitar a Matriz A
    cout<<"Digite os 20 elementos da Matriz A: "<<endl;
    for(int i=0; i<20; i++){
        cout<<"ELEMENTO A["<<i+1<<"]: ";
        cin>>A[i];
    }
    // Auxiliando o usuario a digitar a Matriz B
    cout<<"Digite os 20 elementos da Matriz B: "<<endl;
    for(int i=0; i<20; i++){
        cout<<"ELEMENTO B["<<i+1<<"]: ";
        cin>>B[i];
    }
    system("cls"); // Limpando tela
    system("pause 3"); // Pausando o programa para interagir com o usuario
    // Subtração de A e B.
    cout<<"Resultado da subtração de C = A - B: "<<endl;
    for(int i=0; i<20; i++){
        C[i] = A[i] - B[i];
        cout<<"C["<<C[i]<<"] = A["<<A[i]<<"] - B["<< B[i]<<"]"<< endl;
    }
    return 0;
}