#include "iostream"
#include "math.h"
#include "cstdlib"

using namespace std;

int op;

int main(){
    system("cls");
    setlocale(LC_ALL,"Portuguese-brasilian");

    int op;
    
    cout<<"\n===== MENU INTERATIVO =====";
    cout<<"\nDIGITE 1 - PARA SOMAR \nDIGITE 2 - SUBTRAIR \nDIGITE 3 - PARA MULTIPLICAR \nDIGITE 4 - PARA DIVIDIR";

    cout<<"\nDigite a sua Opção: ";
    cin>>op;
    system("pause");

    if ( op == 1){
        double n1, n2;
        double soma=0;
        cout<<"\nDigite um numero: ";
        cin>>n1;
        cout<<"\nDigite outro numero: ";
        cin>>n2;
        soma = n1+n2;
        cout<<"\nA Seu resultado  de "<<n1<<" somado "<<n2<<" Ficou com "<< soma;
        return 0;
    }
    if ( op == 2){
        double n1, n2;
        double sub=0;
        cout<<"Digite um numero: ";
        cin>>n1;
        cout<<"Digite outro numero: ";
        cin>>n2;
        sub = n1-n2;
        cout<<"A Seu resultado  de "<<n1<<" menos "<<n2<<" Ficou com "<< sub;
        return 0;
    }
    if ( op == 3){
        double n1, n2;
        double mult=0;
        cout<<"Digite um numero: ";
        cin>>n1;
        cout<<"Digite outro numero: ";
        cin>>n2;
        mult = n1*n2;
        cout<<"O resultado  de "<<n1<<" vezes "<<n2<<" Ficou com "<< mult;
        return 0;
    }
    if ( op == 4){
        double n1, n2;
        double div=0;
        cout<<"Digite um numero: ";
        cin>>n1;
        cout<<"Digite outro numero: ";
        cin>>n2;
        div = n1/n2;
        cout<<"A Seu resultado  de "<<n1<<" dividido por "<<n2<<" Ficou com "<< div;
        return 0;
    }
    else{
        cout<<"--# ERRO #-- DIGITE UM NUMERO VALIDO";
    }
        
    return 0;
}