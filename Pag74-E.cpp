// PAGINA 74 - LIVRO MANZANO
// QUESTÃO E) Ler duas matrizes A e B do tipo vetor com 15 elementos cada. Construir uma matriz C, sendo esta a junção das duas outras matrizes. Desta forma, C deverá ter o dobro de elementos, ou seja, 30. Apresentar a matriz C.  

#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

// variavis Globais;
int A[15];
int B[15];
int C[30];

int main(){
    system("cls");
    setlocale(LC_ALL,"Portuguese-brasilian");

    // Interagindo com o usuario;
    cout<<"Digite os 15 ELEMENTOS da MATRIZ A: "<<endl;

    // Loop para coletar informações do usuario MATRIZ A[];
    for(int i=0; i<15; i++){
        cout<<"ELEMENTOS A["<< i+1 <<"] = ";
        cin>>A[i];
    }
    // Limpando a tela
    system("cls"); 

    // Interagindo com o usuario;
    cout<<"Agora 15 ELEMENTOS da MATRIZ B: "<<endl;

    // Loop para coletar informações do usuario MATRIZ B[];
    for(int i=0; i<15; i++){
        cout<<"ELEMENTOS B["<< i+1 << "] = ";
        cin>>B[i+15];
    }
    // Limpando a tela para mostrar o Resultado
    system("cls");

    // Mostrando o resultado. A para C.
    for(int i=0; i<15; i++){
        C[i] = A[i];
        cout<<"\nC["<< i+1 <<"] = A["<< A[i]<<"]";
    }
    // Mostrando o resultado. B para C.
    for(int i=15; i<30; i++){
        C[i+15] = B[i];
        cout<<"\nC["<< i+1 <<"] = B["<< B[i]<<"]";
    }
    return 0;
}