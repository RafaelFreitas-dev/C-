// EXERCICIO A - PAGINA 25

// Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de conversão é F ← (9 * C + 160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

// importar configurações e bibliotecas

#include <iostream>
#include "math.h"
#include "cstdlib"
using namespace std;

int main(){
    system("cls");
    setlocale(LC_ALL,"Portuguêse");

    // variaveis
    double celsius=0, fa;

    //Coletar informação do grau a ser convertido.
    cout << "Qual é a temperatura em graus Celsius: ";
    cin >> celsius;

    // calcular a conversão de graus celsius para fahrenheit
    fa = (9*celsius + 160) / 5 ;

    cout<< "A conversão de "<<celsius<<" celsius para fahrenheit é "<<fa<<"F.";

    return 0;
}