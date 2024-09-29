//Gabriel Porto - 2188063
//Pamela Magalhães - 2156959
//Thomas Mantovani - 2185354

#include "Elemento.h"
#include "Inimigo.h"
#include "Inventario.h"
#include "Jogo.h"
#include "Mapa.h"
#include "Personagem.h"
#include <iostream>
using namespace std;

int main() {
    // Inicializa o jogo
    Jogo jogo;
    jogo.iniciar();

    // Cria inimigos
    Inimigo miniBoss(3);
    Inimigo chefaoFinal = Inimigo::criarChefao();

    // Cria elementos
    Arma espada("Espada Longa", 10, 25);
    PocaoDeVida pocaoVida(5, 20);
    FuriaDoCacador furia(15, 35, 10);

    // Gerencia o inventário
    Inventario inventario;
    inventario.adicionarAoCinto(&espada);
    inventario.adicionarAoCinto(&furia);
    inventario.adicionarNaMochila(&pocaoVida);

    // Mostra o conteúdo do inventário
    inventario.mostrarConteudo();

    // Configura o mapa
    Mapa mapa(10);
    mapa.adicionarElemento(2, &pocaoVida);
    mapa.adicionarInimigo(5, &miniBoss);

    // Imprime o mapa
    mapa.imprimirMapa();

    // Realiza a batalha final
    jogo.batalhar(&chefaoFinal);

    // Salva a pontuação
    jogo.salvarPontuacao();

    return 0;
}