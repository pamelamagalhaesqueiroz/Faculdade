#ifndef JOGO_H
#define JOGO_H

#include <iostream>
#include "Mapa.h"
#include "Personagem.h"
#include "Inimigo.h"

class Jogo {
private:
    Mapa* mapa;
    Personagem* heroi;
    int nivelAtual;

public:
    Jogo();
    ~Jogo();
    void iniciar();
    void avancar();
    void interagir();
    void batalhar(Inimigo* inimigo);
    void usarPocao();
    void salvarPontuacao();
};

#endif // JOGO_H