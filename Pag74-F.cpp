// PAGINA 74 - LIVRO MANZANO
// QUESTÃO F) Ler duas matrizes do tipo vetor, sendo A com 20 elementos e B com 30 elementos. Construir uma matriz C, sendo esta a junção das duas outras matrizes. Desta forma, C deverá ter a capacidade de armazenar 50 elementos. Apresentar a matriz C.

#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

int main(){
    system("cls");
    setlocale(LC_ALL,"Portuguese-brasilian");

    // variavis Globais;
    int A[20];
    int B[30];
    int C[50];

    // Interagindo com o usuario;
    cout<<"Digite os 20 ELEMENTOS da MATRIZ A: "<<endl;

    // Loop para coletar informações do usuario MATRIZ A[];
    for(int i=0; i<20; i++){
        cout<<"ELEMENTOS A["<< i+1 <<"] = ";
        cin>>A[i];
    }
    // Limpando a tela
    system("cls"); 

    // Interagindo com o usuario;
    cout<<"Agora 30 ELEMENTOS da MATRIZ B: "<<endl;
    
    // Loop para coletar informações do usuario MATRIZ B[];
    for(int i=0; i<30; i++){
        cout<<"ELEMENTOS B["<< i+1 << "] = ";
        cin>>B[i+15];
    }
    // Limpando a tela para mostrar o Resultado
    system("cls");

    cout<<"JUNÇÃO DO VETOR A E B: "<<endl;
    // Mostrando o resultado. A para C.
    for(int i=0; i<20; i++){
        C[i] = A[i];
        cout<<"\nC["<< i+1 <<"] = A["<< A[i]<<"]";
    }
    // Mostrando o resultado. B para C.
    for(int i=20; i<50; i++){
        C[i+20] = B[i];
        cout<<"\nC["<< i+1 <<"] = B["<< B[i]<<"]";
    }
    return 0;
}