#include <stdio.h>
// adicionando (função) modularidade para as peças do jogo
void andarbispo(int casas) {
    printf("Movimentos do Bispo(diagonal):\n ");
        for (int i = 0; i < casas; i++) { //repete casas Vezes(O valor determinado)
            printf("Cima\n"); // vertical da diagonal 
            printf("Direita\n"); // Horizontal da diagonal
    }
        printf("\n");
}
void andartorre(int casas) {
    printf("Movimentação da Torre(Direita):\n");
        int contador = 0; // Variável para o controle do Loop
            while (contador < casas) { // Repte enquando a condição definida for verdadeira
                printf("Direita\n");
                contador++; // Incremento do Contador
    }
        printf("\n");
}
void andarainha(int casas) {
    printf("Movimentação da Rainha(Esquerda):\n");
    int contador = 0; // Controle de Loop
    do { // Executada pelo menos uma vez no código 
            printf("Esquerda\n");
            contador++;
    }   while (contador < casas);
            printf("\n");
}
void andarcavalo(int repetiL, int casasverticaL, int casashorizontaL) { // movimentação do cavalo em L - utilizando Loop aninhado
    printf("MOvimentação do Cavalo(L: %d Baixo + %d Esquerda, repetiu %d vezes):\n",casasverticaL,casashorizontaL,repetiL);
// Criando um Loop externo - Controlar repetições do L
    int contexterno = 0; // Inicializamos o contador para While
        while (contexterno < repetiL) {
            printf("Realizando Movimento em L %d:\n",contexterno +1);
// Criando um Loop interno - Para repetição para for Casasvertical vezes
    for (int i = 0; i < casasverticaL; i++) { // Aninhada
        printf("Baixo\n");
    }
    for (int i = 0; i < casashorizontaL; i++) {
        printf("Esquerda\n");
    }
            printf("\n");
            contexterno++; // incremento para evitar o Loop infinito
    }
}
int main() {
//contantes do número de casas
const int casasbispo = 5;
const int casastorre = 5;
const int casasrainha = 8;
const int repeticavalo = 3; // Reptições do L do Cavalo
const int casas_verticaL = 2; // Casas "Baixo" para o L
const int casas_horizontaL = 1;  // Casas "Esquerda" para o L
    
    int escolha; // Variável pra guardar o opção do usuário

        printf("---------------------------------------------\n");
        printf("   Desafio MateCheck - Niveis Aventureiro!\n");
        printf("---------------------------------------------\n");  

        printf("Bem vindo! Escolha uma Opção:\n");
// Loop para menu
while (1) { // Loop infinito até usuário pedir para sair
    printf("1 - Mover Bispo - %d casas\n",casasbispo);
    printf("2 - Mover Torre - %d casas\n",casastorre);
    printf("3 - Mover Rainha - %d casas\n",casasrainha);
    printf("4 - Mover Cavalo - %d casas(baixo) + %d casa0(esquerda)\n",casas_verticaL,casas_horizontaL);
    printf("0 - Sair do menu\n");
    printf("Digite A opção escolhida:\n");
        scanf("%d",&escolha); // Leitura da entrada do Usuário
// processa a escolhas utilizando switch
switch (escolha) {
case 1:
    andarbispo(casasbispo);
    break;
case 2:
    andartorre(casastorre);
    break;
case 3:
    andarainha(casasrainha);
    break;
case 4:
    andarcavalo(repeticavalo,casas_verticaL,casas_horizontaL);
    break;
case 0:
    printf("Saindo do Jogo. Obrigado por jogar!\n");
    return 0; // Fim do programa
default:
    printf("Opção invalida! Tente Novamente.\n");
    break;
        }
    }
return 0; // para evitar possiveis erros do programa    
}