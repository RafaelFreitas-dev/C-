// PAGINA 74 - LIVRO MANZANO
// QUESTÃO G) Ler 20 elementos de uma matriz A tipo vetor e construir uma matriz B de mesma dimensão com os mesmo elementos da matriz A, sendo que deverão estar invertidos. Ou seja, o primeiro elemento de A passa a ser o último de B, o segundo elemento de A passa a ser o penúltimo elemento de B e assim por diante. Apresentar as matrizes A e B lado a lado. 

#include "iostream"
#include "iomanip"
#include "cstdlib"
using namespace std;

int main(){
    system("cls");
    setlocale(LC_ALL,"Portuguese-brasilian");

    // variaveis do sistema.
    const int tam = 20; // Acabei fazendo dessa forma porque a base de teste só muda 1 Parametro.
    int A[tam], B[tam];

    // Lendo os valores da Matriz A;
    cout<<"Digite os 20 elementos da Matriz A: "<<endl;
    for(int i=0; i<tam; i++){
        cout<<"Vetor A["<<i+1<<"]: ";
        cin>>A[i];
    }
    // construir a matriz B com valores invertidos de posição;
    for(int i=0; i<tam; i++){
        B[i] = A[tam-1-i];
    }
    system("cls");

    // Mostrando resultado na tela
    cout<<"\tMatriz A \tMatriz B"<<endl;
    cout<<"\t-------------------------"<<endl;
    for(int i=0; i<tam; i++){
        cout<<"\t"<<A[i]<<"\t"<<"\t"<<B[i]<<endl; // função setw() funciona como espaçamento
    } 

    return 0;
}