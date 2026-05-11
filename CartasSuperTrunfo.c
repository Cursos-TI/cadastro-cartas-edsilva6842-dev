#include <stdio.h>

int main(void){
  char estado1[20];
  char codigo_da_carta1[10];
  char Cidade1[20];
  int populacao1;
  float area1, pib1;
  int num_pontos_turisticos1;
  float densidade_populacional1, pib_per_capita1;

  char estado2[20];
  char codigo_da_carta2[10];
  char Cidade2[20];
  int populacao2;
  float area2, pib2;
  int num_pontos_turisticos2;
  float densidade_populacional2, pib_per_capita2;

  printf("CARTA 1\n");
  printf("Estado: \n");
  scanf("%19s", estado1);

  printf("Codigo da carta: \n");
  scanf("%9s", codigo_da_carta1);

  printf("Cidade: \n");
  scanf("%19s", Cidade1);

  printf("Populacao:13.000.000\n ");
  scanf("%d", &populacao1);

  printf("Area (km2):1.521\n");
  scanf("%f", &area1);

  printf("PIB (R$):3.000.000.000.000 \n");
  scanf("%f", &pib1);

  printf("Numero de pontos turisticos:158 teatros, museus, parques e outros\n");
  scanf("%d", &num_pontos_turisticos1);

  printf("densidade populacional: 8.544 hab/km2\n");
  scanf("%f", &densidade_populacional1);

  printf("PIB per capita: 230.769,23 R$\n");
  scanf("%f", &pib_per_capita1);

  densidade_populacional1 = populacao1 / area1;
  pib_per_capita1 = pib1 / populacao1;

  printf("\nCARTA 2\n");
  printf("Estado: \n");
  scanf("%19s", estado2);

  printf("Codigo da carta: \n");
  scanf("%9s", codigo_da_carta2);

  printf("Cidade: \n");
  scanf("%19s", Cidade2);

  printf("Populacao:6.000.000\n ");
  scanf("%d", &populacao2);

  printf("Area (km2): 1.200\n");
  scanf("%f", &area2);

  printf("PIB (R$):359.000.000.000\n");
  scanf("%f", &pib2);

  printf("Numero de pontos turisticos: 40 teatros, museus, parques e outros\n");
  scanf("%d", &num_pontos_turisticos2);

       printf("densidade populacional: 5.000 hab/km2\n");
       scanf("%f", &densidade_populacional2);

       printf("PIB per capita: 59.833,33 R$\n");
       scanf("%f", &pib_per_capita2);

  densidade_populacional2 = populacao2 / area2;
  pib_per_capita2 = pib2 / populacao2;

  printf("\n DADOS CADASTRADOS \n");
  printf("Carta 1: %s %s %s | Pop: %d | Area: %.3f | PIB: %f | Densidade: %f hab/km2 | PIB per capita: %f\n",
         estado1, codigo_da_carta1, Cidade1, populacao1, area1, pib1,
         densidade_populacional1, pib_per_capita1);
  printf("Carta 2: %s %s %s | Pop: %d | Area: %.3f | PIB: %f | Densidade: %f hab/km2 | PIB per capita: %f\n",
         estado2, codigo_da_carta2, Cidade2, populacao2, area2, pib2,
         densidade_populacional2, pib_per_capita2);



  return 0;
}