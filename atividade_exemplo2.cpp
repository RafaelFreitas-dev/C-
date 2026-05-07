#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

// variaveis
int const n = 3;
double sal[n];
int idade [n];

int main(){
    system("cls");
    setlocale(LC_ALL,"Portuguese-brasilian");
    double x;
    for(int i=0; i<n; i++){
        cout<<"\nDigite Salario e idade separado por espaços: ";
        cin>>sal[i];
        cin>>idade[i];

        for(int i = 0; i<n; i++){
            x = sal[i] * 1.1;
            cout<<x<<"-"<<idade[i]<<endl;
        }
    }


    return 0;
}