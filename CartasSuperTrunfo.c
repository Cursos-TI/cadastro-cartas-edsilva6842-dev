#include <stdio.h>

int main(void){
  char estado1[10];
  char codigo_da_carta1[10];
  char Cidade1[10];
  int populacao1;
  float area1, pib1;
  char nomes_pontos_turisticos1[100];
  int num_pontos_turisticos1;

  char estado2[10];
  char codigo_da_carta2[10];
  char Cidade2[10];
  int populacao2;
  float area2, pib2;
  char nomes_pontos_turisticos2[100];
  int num_pontos_turisticos2;

  printf(" CARTA 1 \n");
  printf("Estado: \n");
  scanf("%9s", estado1);

  printf("Codigo da carta: \n");
  scanf("%9s", codigo_da_carta1);

  printf("Cidade: \n");
  scanf("%9s", Cidade1);

  printf("Populacao:13.000.000 \n");
  scanf("%d", &populacao1);

  printf("Area (km2):1.521 \n");
  scanf("%f", &area1);

  printf("PIB:3.000.000.000.000 \n");
  scanf("%f", &pib1);

  printf("Numero de pontos turisticos:158 Museus, 30 teatro/casas de shows \n");
  scanf("%d", &num_pontos_turisticos1);

  printf(" CARTA 2 \n");
  printf("Estado: B \n");
  scanf("%9s", estado2);

  printf("Codigo da carta: \n");
  scanf("%9s", codigo_da_carta2);

  printf("cidade: \n");
  scanf("%9s", Cidade2);

  printf("Populacao:6.000.000 \n");
  scanf("%d", &populacao2);

  printf("Area (km2):1.200 \n");
  scanf("%f", &area2);

  printf("PIB:359.000.000.000 \n");
  scanf("%f", &pib2);

  printf("Numero de pontos turisticos:40 \n");
  scanf("%d", &num_pontos_turisticos2);

  printf("\n=== DADOS CADASTRADOS ===\n");
  printf("Carta 1: %s %s %s | Pop:13.000.000 %d | Area:1.521 %.3f |  PIB:3.000.000.000.000 %.0f\n",
         estado1, codigo_da_carta1, Cidade1, populacao1, area1, pib1);
  printf("Carta 2: %s %s %s | Pop:6.000.000 %d | Area:1.200  %.3f | PIB:359.000.000.000 %.0f\n",
         estado2, codigo_da_carta2, Cidade2, populacao2, area2, pib2);

  return 0;
}