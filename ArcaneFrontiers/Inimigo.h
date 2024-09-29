//Gabriel Porto - 2188063
//Pamela Magalhães - 2156959
//Thomas Mantovani - 2185354

#include <string>
using namespace std;

#ifndef INIMIGO_H
#define INIMIGO_H

class Inimigo {
public:
    Inimigo(int nivel);
    Inimigo(string nomeChefao, int vidaChefao, int ataqueChefao);
    static Inimigo criarChefao();
    int getVida() const;
    int getAtaque() const;
    void mostrarEstatisticas() const;

private:
    string nome;
    int vida;
    int ataque;
    int nivel;
};

#endif // INIMIGO_H