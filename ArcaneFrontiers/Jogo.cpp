#include "Jogo.h"
#include "Inimigo.h"
#include "Elemento.h"
#include "Inventario.h"
#include <iostream>
using namespace std;

int main() {
    Jogo jogo;
    jogo.iniciar();

    Inimigo miniBoss(3);
    Inimigo chefaoFinal = Inimigo::criarChefao();

    Arma espada("Espada Longa", 10, 25);
    PocaoDeVida pocaoVida(5, 20);
    FuriaDoCacador furia(15, 35, 10);

    Inventario inventario;
    inventario.adicionarAoCinto(&espada);
    inventario.adicionarAoCinto(&furia);
    inventario.adicionarNaMochila(&pocaoVida);

    inventario.mostrarConteudo();

    Mapa mapa(10);
    mapa.adicionarElemento(2, &pocaoVida);
    mapa.adicionarInimigo(5, &miniBoss);

    mapa.imprimirMapa();

    jogo.batalhar(&chefaoFinal);
    jogo.salvarPontuacao();

    return 0;
}