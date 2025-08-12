#include <stdio.h>
typedef struct {
    char codigo[4];        // ex: "A01" (3 chars + '\0')
    int populacao;         // população (int)
    float area;            // área (float)
    float pib;             // PIB (float)
    int pontos_turisticos; // número de pontos turísticos (int)
} Carta;

int main(void) {
    Carta carta1, carta2;

    printf("=== Cadastro de Carta 1 ===\n");
    printf("Informe o codigo da carta (ex: A01): ");
    scanf(" %3s", carta1.codigo);
    printf("Populacao (int): ");
    scanf("%d", &carta1.populacao);
    printf("Area (float): ");
    scanf("%f", &carta1.area);
    printf("PIB (float): ");
    scanf("%f", &carta1.pib);
    printf("Numero de pontos turisticos (int): ");
    scanf("%d", &carta1.pontos_turisticos);

    printf("\n=== Cadastro de Carta 2 ===\n");
    printf("Informe o codigo da carta (ex: B02): ");
    scanf(" %3s", carta2.codigo);
    printf("Populacao (int): ");
    scanf("%d", &carta2.populacao);
    printf("Area (float): ");
    scanf("%f", &carta2.area);
    printf("PIB (float): ");
    scanf("%f", &carta2.pib);
    printf("Numero de pontos turisticos (int): ");
    scanf("%d", &carta2.pontos_turisticos);

    printf("\n\n=== Dados cadastrados ===\n");

    printf("\nCarta 1 - Codigo: %s\n", carta1.codigo);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontos_turisticos);

    printf("\nCarta 2 - Codigo: %s\n", carta2.codigo);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontos_turisticos);

    return 0;
}
