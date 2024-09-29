#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include "Elemento.h"
#include <string>
using namespace std;

class Personagem {
private:
    string nome;
    int vida;
    int ataque;
    int defesa;
    Elemento* mochila[10];
    Elemento* cinto[4];
    int capacidadeCinto;

public:
    Personagem(const string& nome, int vida, int ataque, int defesa);

    void atacar(Personagem& alvo);
    void mover();
    void adicionarElementoNaMochila(Elemento* elemento);
    void adicionarElementoNoCinto(Elemento* elemento);
    void mostrarInventario() const;
    void mostrarCinto() const;
    void receberDano(int dano);
    bool estaVivo() const;
    string getNome() const;
    int getVida() const;
};

#endif // PERSONAGEM_H