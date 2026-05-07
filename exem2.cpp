#include "iostream"
#include "cstdlib"
using namespace std;

void trocar(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int a=10;
    int b=20;
    cout<<"Valor inicial de A: "<<a<<endl;
    cout<<"Valor inicial de B: "<<b<<endl;
    system("pause");
    trocar(&a, &b);
    cout<<"Valor final de A: "<<a<<endl;
    cout<<"Valor final de b: "<<b<<endl;
    system("pause");
    return 0;
}