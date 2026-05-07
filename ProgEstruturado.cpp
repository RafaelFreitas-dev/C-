/*
    Programa Exemplo: Calculo da média ponderada com pesos.

    Peso1 = 0.35;
    Peso2 = 0.65;
    Nota1 = "";
    Nota2 = "";

    mediaP = nota1 * peso1 + nota2 * peso2;
    Se mediaP>= 6 -- Aprovado senão Reprovado

*/

#include "iostream"
#include "math.h"
#include "cstdlib"

using namespace std;

// Variaveis
double const peso1 = 0.35;
double const peso2 = 0.65;

//Funcão PERGUNTA1
double lerNota1(){
    double n1;
    cout<<"Qual a sua primeira nota: ";
    cin>>n1;
    return n1;
}
//Funcão PERGUNTA2;
double lerNota2(){
    double n2;
    cout<<"Qual a sua Segunda Nota: ";
    cin>>n2;
    return n2;
}
//Funcão RUSULTADO MEDIA;
double getMedia(double nota1, double nota2){ // necessario declarar de entrada no metodo;
    double m; 
    m = nota1 * peso1 + nota2 * peso2;  // variaveis de entrada será atribuida através do int main por se tratar de uma variavel local;
    return m;
}
// função Mostrando o resultado se foi aprovado ou reprovado;
string Status(double media){
    if (media >= 6){
        return"\nAluno APROVADO";
    }else
        return "\nAluno REPROVADO";
}

// Apresentação dos Resultados para o lead;
void exibir(double nota1, double nota2, double media, string status){
    system("cls");
    cout<<"A sua Primeira nota foi "<<nota1<<endl;
    cout<<"A sua Segunda nota: "<<nota2<<endl;
    cout<<"Sua Média foi "<<media<<endl;
    cout<<"*** RESULTADO ***";
    cout<<status;
}

int main(){
    system("cls");
    setlocale(LC_ALL,"Portuguese");

    //variaveis locais;
    double nota1,nota2,media;
    string status;
    nota1 = lerNota1();
    nota2 = lerNota2();
    media = getMedia(nota1,nota2);
    status = Status(media);
    exibir(nota1,nota2,media,status);

    return 0;
}