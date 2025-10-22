#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado;
  char codigo_carta [5];
  char nome_cidade [20];
  int populacao;
  float area;
  float pib;
  int pontos_turismo;

  // Área para entrada de dados

  printf("Super Trunfo C \n");
  printf ("Carta 1 \n");

  printf ("Digite o estado: \n");
  scanf ("%c", &estado);

  printf("Digite o Codigo da Carta: \n");
  scanf("%s", codigo_carta);

  printf ("Digite o nome da cidade: \n");
  scanf("%s", nome_cidade);

  printf ("Digite a populacao: \n");
  scanf ("%d", populacao);

  printf("Digite a area em Km: \n");
  scanf("%f", area);

  printf("Digite o PIB: \n");
  scanf("%f", pib);

  printf("Digite a quantidade de pontos turisticos: \n");
  scanf ("%d", pontos_turismo);
  
  // Área para exibição dos dados da cidade

return 0;
} 
