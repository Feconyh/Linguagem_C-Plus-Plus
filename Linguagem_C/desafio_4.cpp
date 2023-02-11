#include <iostream>

using namespace std;

float calcular_potencia(int base, int potencia){
    
    float resultado = base;

    for(int i = 1; i < potencia; i++){
        resultado *= base;
    }

    cout << base << "^" << potencia << " = " << resultado;
}

int main(){
    
    float base;
    int potencia;
    string decisao;

    do{
        cout << "Informe a base: ";
        cin >> base;

        cout << "Informe a potencia: ";
        cin >> potencia;

        if(base >= 0 && potencia > 0){
            calcular_potencia(base, potencia);

            cout << endl << "Deseja fazer outra conta?" << endl;
            cin >> decisao;
            cout << endl;
        }
        else if(potencia == 0){
            cout << base << "^" << potencia << " = 1";

            cout << endl << "Deseja fazer outra conta?" << endl;
            cin >> decisao;
            cout << endl;
        }
    }while (decisao == "s");

}