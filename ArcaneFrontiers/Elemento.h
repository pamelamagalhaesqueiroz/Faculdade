//Gabriel Porto - 2188063
//Pamela Magalhães - 2156959
//Thomas Mantovani - 2185354

#include <string>
using namespace std;

#ifndef ELEMENTO_H
#define ELEMENTO_H

class Elemento {
public:
    Elemento(const string& nome, int peso);
    string getNome() const;
    int getPeso() const;

private:
    string nome;
    int peso;
};

class Arma : public Elemento {
public:
    Arma(const string& nome, int peso, int ataque);
    int getAtaque() const;

private:
    int ataque;
};

class Pocao : public Elemento {
public:
    Pocao(const string& nome, int peso, int cura);
    int getCura() const;

private:
    int cura;
};

class PocaoDeVida : public Pocao {
public:
    PocaoDeVida(int peso, int cura);
};

class FuriaDoCacador : public Arma {
public:
    FuriaDoCacador(int peso, int ataque, int bonusDano);
    int getBonusDano() const;

private:
    int bonusDano;
};

#endif // ELEMENTO_H
