#include <iostream>

using namespace std;

int main(){
    int numero;

    cout << "Informe um numero: ";
    cin >> numero;

    int resultado = numero;
    int z = numero;

    for(int i = 0; i < numero-1; i++){
        z -= 1;
        resultado *= z;
    }
    
    cout << numero << "! = " << resultado << endl;
}