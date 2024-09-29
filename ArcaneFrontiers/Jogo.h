//Gabriel Porto - 2188063
//Pamela Magalhães - 2156959
//Thomas Mantovani - 2185354

#include <iostream>
#include "Mapa.h"
#include "Personagem.h"
#include "Inimigo.h"

#ifndef JOGO_H
#define JOGO_H

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