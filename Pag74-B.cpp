// PAGINA 74 - LIVRO MANZANO
/*
QUESTÃO B) Ler 8 elementos em uma matriz A tipo vetor. Construir uma matriz B de mesma dimensão com os 
elementos da matriz A multiplicados por 3. O elemento B[i] deverá ser implicado pelo elemento 
A[i]*3, o elemento B[2] implicado pelo elemento A[2]*3 e assim por diante, até 8. Apresentar o vetor 
B.
*/

#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

//variaveis globais do sistema
int A[8];
int B[8];

int main(){
    system("cls");
    setlocale(LC_ALL,"Portuguese-brasilian");

    // Interagindo com o usuario.
    cout<<"Digite os 8 elementos da matriz A: "<< endl;

    // Loop para Obter os valores do elemento A[i].
    for(int i=0; i<8; i++){
        cout<<"ELEMENTO A["<<i+1<<"]= ";
        cin>>A[i];
    }
    // Apagando a Tela
    system("cls");
    
    // Loop do resultado da matriz B = A[i] * 3
    cout<<"\tMatriz A \tmatriz B=A*3"<<endl;
    cout<<"\t============================"<<endl;
    for(int i=0; i<8; i++){
        B[i] = A[i] * 3; // MULTIPLICANDO POR 3
        cout<<"\tA ["<<A[i] <<"] \t\t B ["<<B[i]<<"]"<< endl;
    }
    return 0;
}