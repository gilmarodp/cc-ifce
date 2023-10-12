#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FACIL_TENTATIVAS 8
#define MEDIO_TENTATIVAS 5
#define DIFICIL_TENTATIVAS 3

void cabecalho() {
  printf("\n######################################\n");
  printf("## Bem vindo ao Jogo de Adivinhação ##\n");
  printf("######################################\n\n");
}

int random_int(int min, int max) {
  srand(time(NULL));
  return min + rand() % (max+1 - min);
}

int main() {
  int chute = 0, auxChute = 0, numeroSecreto = 0, minNumeroSecreto = 0, maxNumeroSecreto = 0, jogarNovamente = 1, dificuldade = 0, tentativas = 0;

  while (jogarNovamente == 1) {
    cabecalho();

    printf("Escolha a dificuldade do jogo\n");
    printf("1 - Fácil (8 tentativas)\n");
    printf("2 - Médio (5 tentativas)\n");
    printf("3 - Difícil (3 tentativas)\n\n>: ");
    scanf("%d", &dificuldade);

    printf("Defina um número positivo mínimo para o número secreto: ");
    scanf("%d", &minNumeroSecreto);

    printf("Defina um número positivo máximo para o número secreto: ");
    scanf("%d", &maxNumeroSecreto);
    
    numeroSecreto = random_int(minNumeroSecreto, maxNumeroSecreto);

    switch (dificuldade)
    {
      case 1:
        tentativas = FACIL_TENTATIVAS;
        break;
      case 2:
        tentativas = MEDIO_TENTATIVAS;
        break;
      case 3:
        tentativas = DIFICIL_TENTATIVAS;
        break;
      
      default:
        tentativas = MEDIO_TENTATIVAS;
        break;
    }

    for (int i = 1; i <= tentativas; i++) {
      printf("Qual é seu chute? ");
      scanf("%d", &auxChute);

      if (auxChute == chute) {
        printf("Você não pode informar o mesmo valor informado no último chute, tente outro valor. Sua tentativa será reposta.\n");
        i--;
        continue;
      }
      
      chute = auxChute;
      
      if (chute < 0) {
        printf("Você não pode chutar números negativos, tente novamente.\n");
        i--;
        continue;
      }
      
      printf("Seu %dº chute foi %d\n", i, chute);
      
      int acertou = chute == numeroSecreto;

      if (acertou) {
        printf("Parabéns, você acertou!\n");
        break;
      } else {
        if (chute > numeroSecreto) {
          printf("Seu chute foi maior do que o número secreto!\n");
        } else {
          printf("Seu chute foi menor do que o número secreto!\n");
        }
      }
    }

    printf("\n==================================\n\n");

    printf("Você quer jogar novamente?\n1 - Sim\n0 - Não\n\n>: ");
    scanf("%d", &jogarNovamente);

    if (jogarNovamente == 1) {
      chute = 0;
      auxChute = 1;
    }
  }

  return 0;
}