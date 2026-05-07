#include "iostream"
#include "cstdlib"
using namespace std;

int main(){
    // Configuração de caracteres
    setlocale(LC_ALL,"Portuguese");

    cout<<"Um tipo INT tem "<< sizeof(int) <<" Bytes"<<endl;
    cout<<"Um tipo FLOAT tem "<< sizeof(float) <<" Bytes"<<endl;
    cout<<"Um tipo DOUBLE tem "<< sizeof(double) <<" Bytes"<<endl;
    cout<<"Um tipo CHAR tem "<< sizeof(char) <<" Bytes"<<endl;
    cout<<"Um tipo BOOL tem "<< sizeof(bool) <<" Bytes"<<endl;
    system("pause");
    return 0;
}