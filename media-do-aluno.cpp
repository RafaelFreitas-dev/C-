#include <iostream>
#include <math.h>
#include "cstdlib"
using namespace std;

int main() {
    system("cls");
    setlocale(LC_ALL,"Portuguêse");
    string nome = "";
    
    double const peso1=0.35;
    double const peso2=0.65;
    
    double n1, n2, soma=0;

    cout <<"Qual o seu Nome: ";
    cin >> nome;

    cout<<"Prazer em lhe conhecer " <<nome;

    cout <<"\nme diga Qual foi a sua Primeira Nota: ";
    cin >> n1;

    cout << "Qual foi a sua Segunda Nota: ";
    cin >> n2;

    soma = (n1+n2) / 2;

    cout << "A sua media "<<nome<<" Foi "<< soma ;

    return 0;
}
