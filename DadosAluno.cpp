#include <iostream>
using namespace std;

struct DadosAluno {
    float media;
    int idade;
};

void obterDadosAlunos(DadosAluno *vetor, int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Digite a media do aluno " << i+1 << ": ";
        cin >> vetor[i].media;
        cout << "Digite a idade do aluno " << i+1 << ": ";
        cin >> vetor[i].idade;
    }
}

void exibirDadosAlunos(DadosAluno *vetor, int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Aluno " << i+1 << endl;
        cout << "Media: " << vetor[i].media << endl;
        cout << "Idade: " << vetor[i].idade << endl;
        cout << endl;
    }
}

int main() {
    const int TAM_VETOR = 10;
    DadosAluno vetor[TAM_VETOR];
    obterDadosAlunos(vetor, TAM_VETOR);
    cout << endl;
    exibirDadosAlunos(vetor, TAM_VETOR);
    return 0;
}