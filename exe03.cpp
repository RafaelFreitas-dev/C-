// QUESTÃO - Crie um algoritmo que tenha um vetor de idades e um vetor de nomes, cujos dados deverão ser lidos pelo teclado. Ao final Exiba o nome da pessoa de maior idade, menor idade, a média das idades e o saldo das idades. 

#include <iostream>
#include "cstdlib"
#include <limits>

using namespace std;

const int TAM = 5; // Define o tamanho do vetor

int main() {
    string nomes[TAM];
    int idades[TAM];
    int maiorIdade = numeric_limits<int>::min(), menorIdade = numeric_limits<int>::max();
    string nomeMaior, nomeMenor;
    double somaIdades = 0;

    // Leitura dos dados
    for (int i = 0; i < TAM; i++) {
        cout << "Digite o nome da pessoa " << i + 1 << ": ";
        cin >> nomes[i];
        cout << "Digite a idade de " << nomes[i] << ": ";
        cin >> idades[i];
        
        // Verifica maior e menor idade
        if (idades[i] > maiorIdade) {
            maiorIdade = idades[i];
            nomeMaior = nomes[i];
        }
        if (idades[i] < menorIdade) {
            menorIdade = idades[i];
            nomeMenor = nomes[i];
        }
        
        // Soma das idades
        somaIdades += idades[i];
    }
    
    // Cálculo da média
    double mediaIdades = somaIdades / TAM;
    
    // Exibição dos resultados
    cout << "\nPessoa mais velha: " << nomeMaior << " com " << maiorIdade << " anos." << endl;
    cout << "Pessoa mais nova: " << nomeMenor << " com " << menorIdade << " anos." << endl;
    cout << "Média das idades: " << mediaIdades <<" anos "<< endl;
    cout << "Soma das idades: " << somaIdades <<" anos "<< endl;
    
    return 0;
}
