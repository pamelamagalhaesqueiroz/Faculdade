#ifndef MAPA_H
#define MAPA_H

#include "Elemento.h"
#include "Inimigo.h"
#include <iostream>
using namespace std;

class Mapa {
public:
    struct Posicao {
        bool vazia;
        Elemento* elemento;
        Inimigo* inimigo;

        Posicao() : vazia(true), elemento(nullptr), inimigo(nullptr) {}
    };

private:
    Posicao* caminho;
    int tamanho;

public:
    Mapa(int tamanho);
    ~Mapa();

    void adicionarElemento(int posicao, Elemento* elemento);
    void adicionarInimigo(int posicao, Inimigo* inimigo);
    Posicao getPosicao(int posicao) const;
    void imprimirMapa() const;
};

#endif // MAPA_H