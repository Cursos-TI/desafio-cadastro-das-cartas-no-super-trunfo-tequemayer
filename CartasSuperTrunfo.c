#include <stdio.h>

int main(void) {
    // -------- Carta 1 --------
    char codigo1[4];        // Ex: A01
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // -------- Carta 2 --------
    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Entrada de dados da Carta 1
    printf("Digite o codigo da carta 1 (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Digite a populacao da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf("%d", &pontos1);

    // Entrada de dados da Carta 2
    printf("\nDigite o codigo da carta 2 (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Digite a populacao da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf("%d", &pontos2);

    // Saída organizada
    printf("\n===== Dados da Carta 1 (%s) =====\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);

    printf("\n===== Dados da Carta 2 (%s) =====\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);

    return 0;
}
