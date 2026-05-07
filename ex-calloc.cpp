#include "stdio.h"
#include "stdlib.h"
#include "time.h"
using namespace std;

int gerarNumeros(){
    return rand() % 100; 
}

int main(){
    int n;
    // zerar o tempo da função rand() para números diferentes;
    srand(time(NULL)); 

    printf("Digite a Quantidade de números: ");
    scanf("%i", &n);

    int *ai = (int *) calloc (n, sizeof(int)); // memoria para numeros elementos int;
    
    for(int i=0; i<n; i++){
        ai[i] = gerarNumeros();
    }
    for(int i=0; i<n; i++){
        printf("%i \n", ai[i]);
    }

    return 0;
}