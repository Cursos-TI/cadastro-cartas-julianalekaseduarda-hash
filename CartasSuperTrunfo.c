#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // int numero; 
     char nomePais[50];
     long int populacao;
     float area;
     float pib;
     int pontosturisticos;
  
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados
    printf(¨Digite o nome do pais; ¨);
    scanf(¨%s,nomePais);
  //
      
    printf(¨Digite o numero da carta:¨);
    scanf(¨%d¨, &numero);

    printf(¨Digite a populacao: ¨);
    scanf (¨%1d¨, &populacao);
      
    printf(¨Digite a area em km²: ¨);
    scanf (¨%f¨, &area);

    printf(¨Digite o PIB: ¨);
    scanf (¨%f¨, &pib);

    printf(¨Digite o numero de pontos turisticos: ¨);
    scanf (¨%d¨, &pontosturisticos);

  // Area para exibicao dos dados da cidade
      printf(¨\n-- Dados da Carta --\n¨);
      printf(¨Nome do pais; %s\n¨, nomedoPais);
      printf(¨numero da carta: %d\n¨, numero);
      printf(¨População: %ld habitantes\n¨, populacao);
      printf(¨Area: %.2f km²\n¨, area);
      printf(¨Pontos turisticos: %d\n¨, pontosturisticos);

      return 0;
      } 
