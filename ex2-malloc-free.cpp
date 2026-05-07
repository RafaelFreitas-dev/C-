#include "iostream"
#include "cstdlib"
using namespace std;


int main(){
    // Limpar tela
    system("cls");
    // Configuração de caracteres
    setlocale(LC_ALL,"Portuguese");
    int *ptx = (int*) malloc(sizeof(int)); // Aloca 4 bytes para um inteiro

    if (ptx == NULL){
        cout<<"\nNão foi possivel a alocação de memória!";
    } else {
        *ptx = 10;
        cout<<"O valor \033[1;31m"<< *ptx <<"\033[m Será armazenado na memória! \033[1;32m"<< ptx <<"\033[m"<< endl;
    }

    system("pause");
    free (ptx); // LIBERA A FUNÇÃO
    return 0;
}