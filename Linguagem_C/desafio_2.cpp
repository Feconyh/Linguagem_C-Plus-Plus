#include <iostream>

using namespace std;

int main(){
    
    int nota[3];
    int media_turma;
    int resultado;

    for(int i = 0; i < 3; i++){
        cout << "Informe a nota da prova: " << endl;
        cin >> nota[i];
    }

    cout << "Informe a media da turma: " << endl;
    cin >> media_turma;

    resultado = (nota[0] + nota[1] + nota[2]) /3;
    if(resultado < media_turma){
        cout << "O aluno esta abaixo da media\nCom a nota de: " << resultado << " Pontos" << endl;
    }

    else if(resultado == media_turma){
        cout << "O aluno esta na media\nCom a nota de: " << resultado << " Pontos" << endl;
    }

    else if(resultado > media_turma){
        cout << "O aluno esta acima da media\nCom a nota de: " << resultado << " Pontos" << endl;
    }


}