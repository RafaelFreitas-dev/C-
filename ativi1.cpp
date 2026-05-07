#include <iostream>
#include <cstdlib>   // malloc, calloc, free, rand, srand
#include <ctime>     // time
#include <limits>    // numeric_limits

using namespace std;

int main() {
    setlocale(LC_ALL,"portuguese");
    system("cls");
    int quantidade;
    int *numeros = NULL;
    int opcao;

    // Calcula somatório, média, maior e menor
    double soma = 0, media = 0;
    double maior = numeric_limits<double>::min();
    double menor = numeric_limits<double>::max();

    srand(time(0)); // Inicializa o gerador de números aleatórios

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Gerar números reais aleatórios\n";
        cout << "2. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Quantos números deseja gerar? ";
                cin >> quantidade;

                // Aloca memória com calloc (inicializa com zero)
                numeros = (int*) calloc(quantidade, sizeof(int));

                if (numeros == NULL) {
                    cout << "Erro na alocação de memória.\n";
                    return 1;
                }

                // Preenche com valores aleatórios entre 0 e 100
                for (int i = 0; i < quantidade; i++) {
                    numeros[i] = (double)(rand() % 10000) / 100;
                    cout<<"Numeros escolhidos pela maquina: "<<numeros[i]<<endl;
                }

                for (int i = 0; i < quantidade; i++) {
                    soma += numeros[i];
                    if (numeros[i] > maior) maior = numeros[i];
                    if (numeros[i] < menor) menor = numeros[i];
                }

                media = soma / quantidade;

                // Exibe os resultados
                cout << "\n--- Resultados ---\n";
                cout << "Quantidade de números: " << quantidade << endl;
                cout << "Somatório: " << soma << endl;
                cout << "Média: " << media << endl;
                cout << "Maior valor: " << maior << endl;
                cout << "Menor valor: " << menor << endl;

                // Libera a memória
                free(numeros);
                numeros = NULL;
                break;

            case 2:
                cout << "Encerrando o programa.\n";
                break;

            default:
                cout << "Opção inválida.\n";
        }

    } while (opcao != 2);

    return 0;
}