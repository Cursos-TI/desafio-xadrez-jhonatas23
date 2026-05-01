#include <stdio.h>


int main() {
  // Entrada dos dados
    int torre, bispo = 1, rainha = 1;
    int movimentoCavalo = 1;

    printf("Torre:\n");
  // loop for
    for (torre = 1; torre <= 5; torre++)
    {   // saída de dados
        // torre anda 5 casa para a direita
        printf("Direita\n");
    }

    printf("\n");
    printf("Bispo:\n");
  // loop while
    while (bispo <= 5)
    {   // saída de dados
        // bispo anda 5 casa na diagonal para direita
        printf("Cima, Direita\n");
        bispo++;
    }
  // loop do-while
    printf("\n");
    printf("Rainha:\n");
    do
    {   // saída de dados
        // rainha anda 8 casas para a esquerda
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);
    // loop aninhado
    printf("\n");
    printf("Cavalo:\n");
    while (movimentoCavalo < 2)
    {
      for (int i = 0; i < 2; i++)
      {
        printf("Cima\n");
      }
      printf("Esquerda\n");
        movimentoCavalo++;
    }

    

    
    

    return 0;
}
