#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

// FAZENDO A MEDIA DE UM ALUNO DESSA MANEIRA

double CalcularMedia(double n1, double n2){
    double media;

    cout<<"Digite sua primeira nota: ";
    cin>>n1;
    cout<<"Digite sua Segunda Nota: ";
    cin>>n2;

    media = (n1+n2)/2;

    return media; // return é o comando de armazenamento do valor
}

int main(){
    system("cls");
    double nota1, nota2, media1;
    media1 = CalcularMedia(nota1, nota2);
    cout<<"Sua media é "<< media1<<"."<< endl;
    
    if (media1>=7){
        cout<<" \033[32mPARABÉNS VOCÊ FOI APROVADO.\033[m";
    }else if(media1<7 && media1 >= 5){
        cout<<"\033[31mVOCÊ esta de Recuperação.\033[m";
    }else{
        cout<<"\033[31mVOCÊ FOI REPROVADO.\033[m";
    }
    return 0;
}