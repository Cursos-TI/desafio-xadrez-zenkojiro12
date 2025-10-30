#include <stdio.h>
// Constantes para valore fixos, para evitar a repetição e ter maior facilidade na manutenção do código
// Usei letras maiúsculas para distinguir das funções
#define ANDAR_BISPO 5  // Diagonal direita para cima.
#define ANDAR_TORRE 5     // Direita.
#define ANDAR_RAINHA 8      // Esquerda.
#define ANDAR_CAVALO_VERT 2 // Para cima (parte vertical do L).
#define ANDAR_CAVALO_HORIZ 1 // Para direita (parte horizontal do L).

// Função recursiva para o Bispo: Conta casas com recursão e usa loop aninhado para as duas direções da diagonal.
void andar_bispo(int casatual) { 
    if (casatual > ANDAR_BISPO) {  // Caso base: Para a recursão.
        return;
    }
    for (int direcao = 1; direcao <= 2; direcao++) {  // Loop outer: Gerencia as duas direções.
        int sub_cont = 1;  // Variável para o loop inner.
        while (sub_cont <= 1) { 
            if (direcao == 1) {
                printf("Casa %d: Cima\n", casatual);  // Primeira direção.
            } else {
                printf("Casa %d: Direita\n", casatual);  // Segunda direção.
            }
            sub_cont++;  // Incremento para sair do while.
        }
    }
    andar_bispo(casatual + 1);  // Chamada recursiva para a próxima casa.
}

// Função recursiva para a Torre
void andar_torre(int casatual) {
    if (casatual > ANDAR_TORRE) {  // Caso base.
        return;
    }
    printf("Casa %d: Direita\n", casatual);
    andar_torre(casatual + 1);  // Recursão.
}

// Função recursiva para a Rainha
void andar_rainha(int casatual) {
    if (casatual > ANDAR_RAINHA) {  // Caso base.
        return;
    }
    printf("Casa %d: Esquerda\n", casatual);
    andar_rainha(casatual + 1);  // Recursão.
}

// Função para o Cavalo: Loops aninhados com variáveis múltiplas, condições múltiplas, continue e break.
void andar_cavalo() {
    printf("Movimentação do Cavalo em L (para cima à direita):\n");

    for (int parte = 1; parte <= 2; parte++) {  // Loop outer: Partes do L .
        int maxcasas = (parte == 1) ? ANDAR_CAVALO_VERT : ANDAR_CAVALO_HORIZ;  // Variável múltipla:
        int casa = 1;  // Contador de casas.
        int flagskip = 0;  // Flag para condições múltiplas.

        while (casa <= maxcasas) {  // Loop inner: Processa casas por parte.
            if (flagskip % 2 == 0 && casa == 1) {  // Condição múltipla
                flagskip++;  // Atualiza flag.
                continue;  // Pula a iteração (exemplo de teste de limites).
            }
            if (parte == 1) {
                printf("Parte %d - Casa %d: Cima\n", parte, casa);  // Vertical: Cima.
            } else {
                printf("Parte %d - Casa %d: Direita\n", parte, casa);  // Horizontal: Direita.
            }
            if (casa == maxcasas && flagskip > 0) {  // Condição múltipla: Break se última casa E flag ativa.
                break;  // Sai do loop inner prematuramente.
            }
            casa++;  // Avança casa.
            flagskip++;  // Atualiza flag para a próxima condição.
        }
    }
}

int main() {
        printf("---------------------------------------------\n");
        printf("   Desafio MateCheck - Nível Mestre!\n");
        printf("---------------------------------------------\n");

    printf("Movimentação do Bispo (diagonal direita para cima):\n");  // Via recursão + loops aninhados.
    andar_bispo(1);  // Início da casa 1.
    printf("\n");

    printf("Movimentação da Torre (para a direita):\n");  // Via recursão.
    andar_torre(1);
    printf("\n");

    printf("Movimentação da Rainha (para a esquerda):\n");  // Via recursão.
    andar_rainha(1);
    printf("\n");

    andar_cavalo();  // Via loops avançados.

    return 0;
}