#include "iostream"
#include "cstdlib"
#define n 2
using namespace std;

/* 
1) criar a struct 

*/
typedef struct mynotas notas;
struct mynotas{
    string nome[n];
    double n1[n];
    double n2[n];
    double media[n];
};

notas tb;
notas *ptb = &tb;
int linha = -1;

double calMedia(double *a, double *b){
    return ((*a + *b)/2);
};

void newLinha(){

    double a, b;
    string nome;

    if (linha >= n-1)
        return;

    linha++;
    cout<<"nota 1: ";
    cin>>a;
    ptb -> n1[linha] = a;

    cout<<"nota 2: ";
    cin>>b;
    ptb -> n2[linha] = b;

    cin.ignore();
    cout<<"Nome: ";
    getline(cin,nome);
    ptb -> nome[linha] = nome;
    ptb -> media[linha] = calMedia(&a,&b);
};
void exibir(){
    system("cls");

    cout<<"*** Exibição de Dados ***"<<endl;

    for(int i=0; i<=linha; i++)
        cout<<ptb ->nome[i]<<" "<<ptb -> n1[i]<<", "<<ptb -> n2[i]<<" -> media = "<<ptb -> media[i]<<endl;
    system("pause");

};

int main(){
    setlocale(LC_ALL,"portuguese");

    newLinha();
    newLinha();
    exibir();

    return 0;
};