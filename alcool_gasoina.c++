#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

int main(){
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    int res;
    double gas, alc, preco;

    cout<<"\n========================";
    cout<<"\n   ALCOOL    GASOLINA   ";
    cout<<"\n========================";

    cout<<"\nDigite 1 para gasolina ou 2 para Alcool: ";
    cin>>res;

    if(res == 1){
        cout<<"Qual o valor da GASOLINA Atual: ";
        cin>>gas;
        preco = gas * 0.7;
        cout<<"O valor é: "<<preco;
        }
    if(res == 2){
        cout<<"Qual o valor do ALCOOL Atual: ";
        cin>>alc;
        preco = alc / 0.3;
        cout<<"O valor é: "<<preco;
        }
    else{
        system("cls");
        cout<<"### Erro ### = Digite Um Numero Valido.";
        cout<<"\n========================";
        cout<<"\n   ALCOOL    GASOLINA   ";
        cout<<"\n========================";

        cout<<"\nDigite 1 para gasolina ou 2 para Alcool: ";
        cin>>res;
        if(res == 1){
            cout<<"Qual o valor da GASOLINA Atual: ";
            cin>>gas;
            preco = gas * 0.70;
            cout<<preco;
            }
        if(res == 2){
            cout<<"Qual o valor do ALCOOL Atual: ";
            cin>>alc;
            preco = alc / 0.30;
            cout<<preco;
            }
        }

    return 0;
}