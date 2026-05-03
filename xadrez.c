#include <stdio.h>

// Recursividade Básica
void moverTorre(int casas){
  if(casas > 0){
    printf("Direita\n");
    moverTorre(casas - 1);
  }
}

// Recursividade + Loop Aninhado, que faz o movimento em diagonal do Bispo
void moverBispo(int casas){
  for (int i = 0; i < casas; i++)
  {
    for(int j = 0; j < 1; j++){
      printf("Direita\n");
      printf("Cima\n");
    }  
  }
}

// Recursividade Básica
void moverRainha(int casas){
  if(casas > 0){
    printf("Esquerda\n");
    moverRainha(casas - 1);
  }
}

// Recursividade + Loop Aninhado, que faz o CLÁSSICO movimento em "L" do Cavalo
void moverCavalo(int casas){
  for(int i = 0; i < casas; i++)
  {
    for(int j = 0; j < 2; j++)
    {
      printf("Cima\n");
    }
      printf("Direita\n");
  }
}

int main(){

  // Saída dos Dados
  printf("\n");
  printf("Torre\n");
  moverTorre(5);

  printf("\n");
  printf("Bispo:\n");
  moverBispo(5);

  printf("\n");
  printf("Rainha:\n");
  moverRainha(8);

  printf("\n");
  printf("Cavalo:\n");
  moverCavalo(1);

 // Fim do programa.
  return 0;
}

