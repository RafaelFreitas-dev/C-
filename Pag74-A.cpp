// PAGINA 74 - LIVRO MANZANO
// QUESTÃO A) Ler 10 elementos de uma matriz tipo vetor e apresentá-los. 

#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

int main(){
    system("cls");
    setlocale(LC_ALL,"Portuguese-brasilian");

    // Variavéis
    int vetor[10];

    // inserindo os 10 valores pelo usuario.
    cout<<"Insira 10 numéros inteiros para formação da matriz: "<< endl;

    //loop de captura dos valores.
    for(int i=0; i<10; i++){
        cout<<"Elemento "<< i+1 <<" : ";
        cin>> vetor[i];
    }
    system("cls"); // limpando tela para melhor visualizar o resultado

    //Apresentação dos elementos coletados na tela.
    cout<<"Os elementos do vetor são: "<< endl;
    for(int i=0; i<10; i++){
        cout<<"Vetor: "<< i+1 <<": "<<vetor[i]<<endl;
    }
    return 0;
}