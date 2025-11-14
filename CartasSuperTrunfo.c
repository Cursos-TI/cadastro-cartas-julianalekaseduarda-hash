#include <stdio.h>

int main() {
    int numero;
    char nomePais[50];
    long int populacao;
    float area;
    float pib;
    int pontosturisticos;

    printf("Digite o nome do pais: ");
    scanf("%49s", nomePais);

    printf("Digite o numero da carta: ");
    scanf("%d", &numero);

    printf("Digite a populacao: ");
    scanf("%ld", &populacao);

    printf("Digite a area em km2: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos);

    printf("\n--- Dados da Carta ---\n");
    printf("Nome do pais: %s\n", nomePais);
    printf("Numero da carta: %d\n", numero);
    printf("Populacao: %ld habitantes\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turisticos: %d\n", pontosturisticos);

    return 0;
}
