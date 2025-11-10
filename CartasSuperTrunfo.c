#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // char grupo;
  int numero;
  char nomePais[50];
  long int populacao;
  float area 
  float pib
  int pontosturisticos;
  
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados
    printf(¨Digite o nome do país; ¨);
    scanf(¨%s,nomePais);
    
    printf(¨qDigite o número da carta:¨);
    
    scanf(¨%d¨, &numero);

    printf(¨Digite a população: ¨);
    scanf(¨%1d¨, &populacao);
      
    printf(¨Digite a área em km²: ¨);
    scanf(¨%f¨, &area);

    printf(¨Digite o PIB: ¨);
    scanf(¨%f¨, &pib);

    printf(¨Digite o número de pontos turísticos: ¨);
    scanf(¨%d¨, &pontosturisticos);

  // Área para exibição dos dados da cidade
      printf(¨\n--- Dados da Carta ---\n¨);
      printf(¨Nome do país; %s\n¨, nomedoPais);
      printf(¨número da carta: %d\n¨, numero);
      printf(¨População: %ld habitantes\n¨, populacao);
      printf(¨Área: %.2f km²\n¨, area);
      printf(¨Pontos turísticos: %d\n¨, pontosturisticos);

return 0;
} 
