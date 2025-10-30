#include <stdio.h>
int main() {
// declarando constantes
const int casas_bispo = 5;
const int casas_torre = 5;
const int casas_rainha = 8;

        printf("---------------------------------------------\n");
        printf("     Desafio Matecheck - Nìvel novato\n");
        printf("---------------------------------------------\n");

printf("Movimentação do Bispo(diagonal):\n"); 
    for (int i = 0; i < casas_bispo; i++) {  //Repete extamento o valor colocado em "casas_bispo" Vezes
        printf("Cima\n"); // Vertical da diagonal
        printf("Direita\n"); // Horizontal da diagonal
    }   
printf("\n"); 

printf("movimentação da Torre(Direita):\n");
    int contadortorre = 0; // Variável para o controle de Loop
        while (contadortorre < casas_torre) {  // Repeti a condição enguanto ela for veradeira
            printf("Direita\n");
            contadortorre++; // Incrementto de contador
    }
printf("\n");

printf("Movimentaçõa da Rainha(Esquerda):\n");
    int contadorrainha = 0; // variávle de controle de Loop
        do {  // do-while - Executa pelo menos uma vez
            printf("Esquerda\n"); 
            contadorrainha++; // incremento ao contador
    } while (contadorrainha < casas_rainha); // Condição checada após execução
        printf("\n"); // Fim

return 0;
}
