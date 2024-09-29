//Gabriel Porto - 2188063
//Pamela Magalhães - 2156959
//Thomas Mantovani - 2185354

#include "Personagem.h"
#include <iostream>
using namespace std;

Personagem::Personagem(const string& nome, int vida, int ataque, int defesa)
    : nome(nome), vida(vida), ataque(ataque), defesa(defesa), capacidadeCinto(20) {
    for (int i = 0; i < 10; ++i) {
        mochila[i] = nullptr;
    }
    for (int i = 0; i < 4; ++i) {
        cinto[i] = nullptr;
    }
}

void Personagem::atacar(Personagem& alvo) {
    int dano = ataque - alvo.defesa;
    if (dano > 0) {
        alvo.receberDano(dano);
        cout << nome << " atacou " << alvo.getNome() << " causando " << dano << " de dano!\n";
    } else {
        cout << nome << " atacou " << alvo.getNome() << ", mas não causou dano.\n";
    }
}

void Personagem::adicionarElementoNaMochila(Elemento* elemento) {
    for (int i = 0; i < 10; ++i) {
        if (mochila[i] == nullptr) {
            mochila[i] = elemento;
            cout << elemento->getNome() << " foi adicionado à mochila.\n";
            return;
        }
    }
    cout << "Mochila cheia! Não é possível adicionar mais itens.\n";
}

void Personagem::adicionarElementoNoCinto(Elemento* elemento) {
    for (int i = 0; i < 4; ++i) {
        if (cinto[i] == nullptr) {
            cinto[i] = elemento;
            cout << elemento->getNome() << " foi adicionado ao cinto.\n";
            return;
        }
    }
    cout << "Cinto cheio! Não é possível adicionar mais itens.\n";
}

void Personagem::mostrarInventario() const {
    cout << "Mochila de " << nome << ":\n";
    for (int i = 0; i < 10; ++i) {
        if (mochila[i] != nullptr) {
            cout << "- " << mochila[i]->getNome() << "\n";
        } else {
            cout << "- [vazio]\n";
        }
    }
}

void Personagem::mostrarCinto() const {
    cout << "Cinto de " << nome << ":\n";
    for (int i = 0; i < 4; ++i) {
        if (cinto[i] != nullptr) {
            cout << "- " << cinto[i]->getNome() << "\n";
        } else {
            cout << "- [vazio]\n";
        }
    }
}

void Personagem::receberDano(int dano) {
    vida -= dano;
    if (vida < 0) vida = 0;
}

bool Personagem::estaVivo() const {
    return vida > 0;
}

string Personagem::getNome() const {
    return nome;
}

int Personagem::getVida() const {
    return vida;
}