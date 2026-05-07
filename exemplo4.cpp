#include "iostream"
#include "cstdlib"
using namespace std;

double ler_salario(){
    double sal;
    cout<<"Digite seu salario: ";
    cin>>sal;
    return sal; // returne é o comando de armazenamento do valor
}

int main(){
    system("cls");
    double salario;
    salario = ler_salario();
    cout<< salario;

    return 0;
}