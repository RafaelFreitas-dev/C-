#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

double ler_nota1(){
    double x;
    cout<<"Digite a Primeira Nota: ";
    cin>>x;

    return x;
}
double ler_nota2(){
    double x;
    cout<<"Digite a Segunda Nota: ";
    cin>>x;

    return x;
}
double CalcularMedia(double x, double y){
    return sqrt(x*y);
}

int exibir(double x, double y, double z){
    cout<<"\nPrimeira Nota: "<<x;
    cout<<"\nSegunda Nota: "<<y;
    cout<<"\nMedia: "<<z;

    system("pause");
    return 0;
}

int main(){
    system("cls");
    double n1, n2, media;
    n1 = ler_nota1();
    n2 = ler_nota2();
    media = CalcularMedia(n1, n2);
    cout<<"Sua media ficou em "<< media<<"."<< endl;
    
    int mostrar = exibir(n1,n2,media);
    
    if (media>7){
        cout<<" PARABÉNS VOCÊ FOI APROVADO.";
    }else{
        cout<<"VOCÊ FOI REPROVADO.";
    }
    return 0;
}