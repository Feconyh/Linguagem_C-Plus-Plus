#include <iostream>

using namespace std;

int main(){
    int idade;
    float salario;

    cout << "Informe sua Idade: ";
    cin >> idade;

    cout << "Informe sua Idade: ";
    cin >> salario;

    if(idade > 21 && salario < 1200.00){
        cout << "Voce pode participar =)";
    }
    else{
        cout << "Voce nao pode participar =(";
    };
}