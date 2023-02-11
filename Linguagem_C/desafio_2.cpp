#include <iostream>

using namespace std;

int resultado(int media, int media_turma){
    if(media < media_turma){
        cout << "O aluno esta abaixo da media\nCom a nota de: " << media << " Pontos" << endl;
    }

    else if(media == media_turma){
        cout << "O aluno esta na media\nCom a nota de: " << media << " Pontos" << endl;
    }

    else if(media > media_turma){
        cout << "O aluno esta acima da media\nCom a nota de: " << media << " Pontos" << endl;
    }
}

int main(){
    
    int nota[3];
    int media_turma;
    int media;

    for(int i = 0; i < 3; i++){
        cout << "Informe a nota da prova: " << endl;
        cin >> nota[i];
    }

    cout << "Informe a media da turma: " << endl;
    cin >> media_turma;

    media = (nota[0] + nota[1] + nota[2]) /3;

    resultado(media, media_turma);
}