#include <iostream>

using namespace std;

int funcao(int a){
    int resultado;
    resultado = (a*a - 3*a + 5);
    return resultado;
}

int main(){
    int a;

    cout << "Informe o valor de (a): ";
    cin >> a;
    cout << funcao(a);


    return 0;
}