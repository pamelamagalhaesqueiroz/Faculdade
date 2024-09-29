//Gabriel Porto - 2188063
//Pamela Magalhães - 2156959
//Thomas Mantovani - 2185354

#include "Mapa.h"
#include <iostream>
using namespace std;

Mapa::Mapa(int tamanho) : tamanho(tamanho) {
    caminho = new Posicao[tamanho];
}

Mapa::~Mapa() {
    delete[] caminho;
}

void Mapa::adicionarElemento(int posicao, Elemento* elemento) {
    if (posicao >= 0 && posicao < tamanho) {
        caminho[posicao].elemento = elemento;
        caminho[posicao].vazia = false;
    }
}

void Mapa::adicionarInimigo(int posicao, Inimigo* inimigo) {
    if (posicao >= 0 && posicao < tamanho) {
        caminho[posicao].inimigo = inimigo;
        caminho[posicao].vazia = false;
    }
}

Mapa::Posicao Mapa::getPosicao(int posicao) const {
    if (posicao >= 0 && posicao < tamanho) {
        return caminho[posicao];
    }
    return Posicao();
}

void Mapa::imprimirMapa() const {
    for (int i = 0; i < tamanho; ++i) {
        cout << "[";
        if (caminho[i].vazia) {
            cout << " ";
        } else {
            if (caminho[i].inimigo != nullptr) {
                cout << "I";
            } else if (caminho[i].elemento != nullptr) {
                cout << "E";
            }
        }
        cout << "] ";
    }
    cout << "\n";
}