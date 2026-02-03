#include <stdio.h>

/*
    Função recursiva para a TORRE
    Movimento: para cima
*/
void moverTorre(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Cima\n");
    moverTorre(casas - 1);
}

/*
    Função recursiva para a RAINHA
    Movimento: diagonal (cima + direita)
*/
void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Cima\n");
    printf("Direita\n");
    moverRainha(casas - 1);
}

/*
    Função recursiva para o BISPO
    Utiliza loops aninhados internamente:
    - loop externo: vertical
    - loop interno: horizontal
*/
void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }

    int i, j;

    // Loop externo: movimento vertical
    for (i = 0; i < 1; i++) {
        printf("Cima\n");

        // Loop interno: movimento horizontal
        for (j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}

/*
    Movimento do CAVALO
    Movimento em "L":
    duas casas para cima e uma para a direita
    Utiliza loops aninhados, break e continue
*/
void moverCavalo() {
    int vertical, horizontal;

    // Movimento vertical (2 casas)
    for (vertical = 1; vertical <= 2; vertical++) {
        printf("Cima\n");

        if (vertical == 1) {
            continue;
        }

        // Movimento horizontal (1 casa)
        for (horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Direita\n");
            break;
        }
    }
}

int main() {

    // Quantidade de casas para movimentos recursivos
    int casas = 3;

    printf("=== TORRE ===\n");
    moverTorre(casas);

    printf("\n=== BISPO ===\n");
    moverBispo(casas);

    printf("\n=== RAINHA ===\n");
    moverRainha(casas);

    printf("\n=== CAVALO ===\n");
    moverCavalo();

    return 0;
}
