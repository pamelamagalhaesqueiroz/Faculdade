#include <iostream>
using namespace std;

struct Livro {
    string titulo;
    int ano;
    int numPaginas;
    float preco;
};

int main() {
    const int TAM_VETOR = 5;
    Livro vetor[TAM_VETOR];

    for (int i = 0; i < TAM_VETOR; i++) {
        cout << "Digite o titulo do livro " << i+1 << ": ";
        getline(cin, vetor[i].titulo);
        cout << "Digite o ano de edicao do livro " << i+1 << ": ";
        cin >> vetor[i].ano;
        cout << "Digite o numero de paginas do livro " << i+1 << ": ";
        cin >> vetor[i].numPaginas;
        cout << "Digite o preco do livro " << i+1 << ": ";
        cin >> vetor[i].preco;
        cin.ignore();
        cout << endl;
    }
   
    int somaPaginas = 0;
    for (int i = 0; i < TAM_VETOR; i++) {
        somaPaginas += vetor[i].numPaginas;
    }
    float mediaPaginas = (float)somaPaginas / TAM_VETOR;

    cout << "A media de paginas dos livros eh: " << mediaPaginas << endl;

    return 0;
}
