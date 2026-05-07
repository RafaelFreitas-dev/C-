#include "iostream"
#include "cstdlib"
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int aux = 10; // Criando uma variavel inteira 
    int *ptaux; // Cria um ponteiro inteiro do aux
    ptaux = &aux; // inicializa o ponteiro

    cout<<"o valor de aux é "<< aux <<endl;
    cout<<"O endereço de memoria de aux é "<< &aux <<endl;
    cout<<"O endereço de memoria de aux é "<< ptaux <<endl;
    cout<<"O endereço de memoria de ptaux é "<< &ptaux <<endl;
    cout<<"o valor do ponteiro *ptaux é "<< *ptaux <<endl;

    return 0.;
}