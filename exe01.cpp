#include "iostream"
#include "cstdlib"
#include "math.h"
#include "clocale"
#include "limits" // para usar o cin.ignore()

using namespace std;

string nome[4];
int idade[4], linha = -1;
double salario[4];

string lernome(){
    string nom;
    cout<<"Nome: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Corrige problemas de buffer
    getline(cin, nom);
    return nom;
}
int leridade(){
    int ida;
    cout<<"Idade: ";
    cin>>ida;
    return ida;
}
double lersalario(){
    double sal;
    cout<<"Salário: ";
    cin>>sal;
    return sal;
}
void guardarDados(string nom,int ida,double sal){
    if (linha < 3){
        linha++;
        nome[linha] = nom;
        idade[linha] = ida;
        salario[linha] = sal;
    }else{
        cout<<"Limite de Registros atingidos."<<endl;
    }

}
void listar(){
    cout<<"\tNomes"<<endl;
    for (int i=0;i<=linha; i++){
        cout<<nome[i]<<"\t"<<idade[i]<<"\t"<<salario[i]<<endl;
    }
}

int main(){
    system("cls");
    setlocale(LC_ALL,"Portuguese");
    
    int teclado;
    string nome_; int idade_; double sal_;

    MENU: // para o goto voltar - funciona como uma ancora
    
    cout<<"\nMENU \n1 - Ler \n2 - Exibir \n3 Sair \t\nItem:";
    cin>>teclado;

    switch (teclado){

        case 1: // Ler
            nome_ = lernome();
            idade_ = leridade();
            sal_ = lersalario();
            guardarDados(nome_, idade_, sal_);
            break;

        case 2:  // Exibir
            listar();
            break;

        case 3:  // Sair
            exit(0);
        break;
    }
    goto MENU;
    return 0;
}