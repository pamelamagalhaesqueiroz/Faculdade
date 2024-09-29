#ifndef INIMIGO_H
#define INIMIGO_H

#include <string>
using namespace std;

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