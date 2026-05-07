#include "iostream"
 #include"cstdlib"
 #include"string.h"
 #include"math.h"
 using namespace std;

 int const n=5;
 int linha =-1;

 struct disciplinas {
    string nome [n];
    double nota1 [n];
    double nota2 [n];
    double media [n];
};
 struct disciplinas tbmedias;
 
 string ler_nome(){
    string nome;
    cout<<"\nnome:";
    cin.ignore();
    getline(cin,nome);
    return nome;
    }
   
double ler_nota1(){
    double m;
    cout<<"\nNota1:";
    cin>>m;
    return m;
    }
   
double ler_nota2(){
    double m;
    cout<< "\nNota2:";
    cin>> m;
    return m;
    }
void guardarDados(){
    linha++;
    string nom_temp = ler_nome();
    tbmedias.nome[linha]= nom_temp;
    tbmedias.nota1[linha]= ler_nota1();
    tbmedias.nota2[linha]= ler_nota2();
    } 
void processar(){
    system("cls");
    for (int i=0; i<=linha;i++){
        tbmedias.media[i]=(tbmedias.nota1[i] + tbmedias.nota2[i])/2;
    }
    cout << "processando...." << endl;
    system("pause");
    }
void exibir (){
    system("cls");
    for ( int i=0; i<= linha; i++)   {   cout << tbmedias.nome[i];
    cout<< " - " << tbmedias.nota1[i];
    cout<< " - " << tbmedias.nota2[i];
    cout<< " - " << tbmedias.media[i] << endl;
    }
system("pause");
}
int main(){
    system("cls");
    setlocale(LC_ALL,"Portuguese");

    int tecla = 0;

    while (tecla != 4) {
        system("cls");
        cout << "\n1) Adicionar Aluno";
        cout << "\n2) Processar Médias";
        cout << "\n3) Exibir Alunos";
        cout << "\n4) Sair";
        cout << "\nEscolha uma opção: ";
        cin >> tecla;

        switch (tecla) {
            case 1:
                guardarDados();
                break;
            case 2:
                processar();
                break;
            case 3:
                exibir();
                system("pause");
                break;
            case 4:
                cout << "Saindo...\n";
                exit(0);
            default:
                cout << "Opção inválida. Tente novamente.\n";
                system("pause");
        }
    }
    return 0;
}