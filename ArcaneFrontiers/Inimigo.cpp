//Gabriel Porto - 2188063
//Pamela Magalhães - 2156959
//Thomas Mantovani - 2185354

#include "Inimigo.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Inimigo::Inimigo(int nivel) : nome("Titan de Ouro"), nivel(nivel) {
    
    vida = (rand() % 20 + 50) + (nivel * 10);
    ataque = (rand() % 10 + 5) + (nivel * 5);
}

Inimigo::Inimigo(std::string nomeChefao, int vidaChefao, int ataqueChefao)
    : nome(nomeChefao), vida(vidaChefao), ataque(ataqueChefao), nivel(0) {}

Inimigo Inimigo::criarChefao() {
   
    int vidaChefao = (rand() % 50 + 150);
    int ataqueChefao = (rand() % 30 + 30);
    return Inimigo("Titan de Ouro - Chefão Final", vidaChefao, ataqueChefao);
}

int Inimigo::getVida() const {
    return vida;
}

int Inimigo::getAtaque() const {
    return ataque;
}

void Inimigo::mostrarEstatisticas() const {
    std::cout << "Inimigo: " << nome << "\nVida: " << vida << "\nAtaque: " << ataque << "\n";
}