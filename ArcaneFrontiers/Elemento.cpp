#include "Elemento.h"
#include <iostream>
using namespace std;

Elemento::Elemento(const string& nome, int peso) : nome(nome), peso(peso) {}

string Elemento::getNome() const {
    return nome;
}

int Elemento::getPeso() const {
    return peso;
}

Arma::Arma(const string& nome, int peso, int ataque) : Elemento(nome, peso), ataque(ataque) {}

int Arma::getAtaque() const {
    return ataque;
}

Pocao::Pocao(const string& nome, int peso, int cura) : Elemento(nome, peso), cura(cura) {}

int Pocao::getCura() const {
    return cura;
}

PocaoDeVida::PocaoDeVida(int peso, int cura) : Pocao("Poção de Vida", peso, cura) {}

FuriaDoCacador::FuriaDoCacador(int peso, int ataque, int bonusDano)
    : Arma("Fúria do Caçador", peso, ataque), bonusDano(bonusDano) {}

int FuriaDoCacador::getBonusDano() const {
    return bonusDano;
}
