#ifndef INVENTARIO_H
#define INVENTARIO_H

class Elemento;

class Inventario {
private:
    Elemento* cinto[4];
    int capacidadeCinto;
    int pesoAtualCinto;

    Elemento* mochila[100];
    int topoMochila;

public:
    Inventario();
    ~Inventario();

    bool adicionarAoCinto(Elemento* elemento);
    bool removerDoCinto(int indice);
    Elemento* acessarCinto(int indice) const;

    bool adicionarNaMochila(Elemento* elemento);
    Elemento* removerDaMochila();

    void mostrarConteudo() const;
};

#endif // INVENTARIO_H
