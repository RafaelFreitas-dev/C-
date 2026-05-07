// Exemplo exercicio de explicação;

#include <iostream>
#include <cstdlib>
#include <string>
#include <limits> // Necessário para cin.ignore()

using namespace std;

const int n = 5;  // Definição do tamanho máximo
int linha = -1;   // Índice inicial

struct Disciplinas {
    string nome[n];
    double media[n];
};

Disciplinas tb;  // Variável global para armazenar os dados

// Função para ler nomes
string ler_nome() {
    string nome;
    cout << "Nome: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer corretamente
    getline(cin, nome);
    return nome;
}

// Função para ler a média do aluno
double ler_media() {
    double media;
    cout << "Média: ";
    cin >> media;
    return media;
}

// Função para guardar dados na tabela
void guardarDados() {
    if (linha < n - 1) {  // Evita estouro do array
        linha++;
        tb.nome[linha] = ler_nome();
        tb.media[linha] = ler_media();
    } else {
        cout << "Erro: Capacidade máxima de alunos atingida!\n";
        system("pause");
    }
}

// Função para exibir os dados armazenados
void exibir() {
    system("cls");
    if (linha == -1) {
        cout << "Nenhum dado registrado ainda.\n";
    } else {
        for (int i = 0; i <= linha; i++) {
            cout << "\nNome: " << tb.nome[i];
            cout << "\nMédia: " << tb.media[i] << endl;
        }
    }
    system("pause");
}

int main() {
    system("cls");
    setlocale(LC_ALL,"Portuguese");

    int tecla;
    
    while (tecla != 3) {
        system("cls");
        cout << "\n1) Ler \n2) Exibir \n3) Sair \n\nEscolha uma opção: ";
        cin >> tecla;

        switch (tecla){
            case 1:
                guardarDados();
                break;
            case 2:
                exibir();
                break;
            case 3:
                exit(0);
            default:
                cout << "Opção inválida. Tente novamente.\n";
                system("pause");
        }
    }
    return 0;
}
