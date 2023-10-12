#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 3

void cabecalho() {
  printf("\n####################################\n");
  printf("# Bem vindo ao Jogo de Adivinhação #\n");
  printf("####################################\n\n");
}

int main(void) {
  int chute = 0, numeroSecreto = 56;

  cabecalho();
  
  for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {
    printf("Qual é seu chute? ");
    scanf("%d", &chute);
    
    if (chute < 0) {
      printf("Você não pode chutar números negativos, tente novamente.\n");
      i--;
      continue;
    }
    
    printf("Seu %dº chute foi %d\n", i, chute);
    
    printf("Seu chute foi %d\n", chute);
    int acertou = chute == numeroSecreto;

    if (acertou) {
      printf("Parabéns! Você acertou!\n");
      break;
    } else {
      int maior = chute > numeroSecreto;

      if (maior) {
        printf("Seu chute foi maior do que o número secreto!\n");
      } else {
        printf("Seu chute foi menor do que o número secreto!\n");
      }
    }
  }

  return 0;
}