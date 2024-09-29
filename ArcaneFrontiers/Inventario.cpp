//Gabriel Porto - 2188063
//Pamela Magalhães - 2156959
//Thomas Mantovani - 2185354

#include "Inventario.h"
#include "Elemento.h"
#include <iostream>
using namespace std;

Inventario::Inventario() : capacidadeCinto(50), pesoAtualCinto(0), topoMochila(-1) {
    for (int i = 0; i < 4; ++i) {
        cinto[i] = nullptr;
    }
    for (int i = 0; i < 100; ++i) {
        mochila[i] = nullptr;
    }
}

Inventario::~Inventario() {
    for (int i = 0; i < 4; ++i) {
        if (cinto[i] != nullptr) {
            delete cinto[i];
        }
    }
    for (int i = 0; i <= topoMochila; ++i) {
        if (mochila[i] != nullptr) {
            delete mochila[i];
        }
    }
}

bool Inventario::adicionarAoCinto(Elemento* elemento) {
    if (pesoAtualCinto + elemento->getPeso() > capacidadeCinto) {
        cout << "O cinto está muito pesado para adicionar esse item!\n";
        return false;
    }

    for (int i = 0; i < 4; ++i) {
        if (cinto[i] == nullptr) {
            cinto[i] = elemento;
            pesoAtualCinto += elemento->getPeso();
            return true;
        }
    }

    cout << "O cinto está cheio!\n";
    return false;
}

bool Inventario::removerDoCinto(int indice) {
    if (indice >= 0 && indice < 4 && cinto[indice] != nullptr) {
        pesoAtualCinto -= cinto[indice]->getPeso();
        delete cinto[indice];
        cinto[indice] = nullptr;
        return true;
    }

    cout << "Não há item no espaço selecionado do cinto!\n";
    return false;
}

Elemento* Inventario::acessarCinto(int indice) const {
    if (indice >= 0 && indice < 4 && cinto[indice] != nullptr) {
        return cinto[indice];
    }
    return nullptr;
}

bool Inventario::adicionarNaMochila(Elemento* elemento) {
    if (topoMochila < 99) {
        mochila[++topoMochila] = elemento;
        return true;
    }

    cout << "A mochila está cheia!\n";
    return false;
}

Elemento* Inventario::removerDaMochila() {
    if (topoMochila >= 0) {
        return mochila[topoMochila--];
    }

    cout << "A mochila está vazia!\n";
    return nullptr;
}

void Inventario::mostrarConteudo() const {
    cout << "Cinto:\n";
    for (int i = 0; i < 4; ++i) {
        if (cinto[i] != nullptr) {
            cout << i + 1 << ": " << cinto[i]->getNome() << " (Peso: " << cinto[i]->getPeso() << ")\n";
        } else {
            cout << i + 1 << ": [Vazio]\n";
        }
    }

    cout << "Mochila (Topo):\n";
    if (topoMochila >= 0) {
        cout << mochila[topoMochila]->getNome() << " (Peso: " << mochila[topoMochila]->getPeso() << ")\n";
    } else {
        cout << "[Vazia]\n";
    }
}
