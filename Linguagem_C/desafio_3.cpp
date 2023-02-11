#include <iostream>

using namespace std;

int fatorial(int numero){
    
    int resultado = numero;
    int z = numero;

    if (numero > 0){
        for(int i = 0; i < numero-1; i++){
            z -= 1;
            resultado *= z;
        }
        
        cout << numero << "! = " << resultado << endl;
    }
    
    else if (numero == 0){
        cout << numero << "! = 1" << endl;
    }
}

int main(){
    int numero = 1;

    cout << "Informe um numero: ";
    cin >> numero;

    fatorial(numero);
}