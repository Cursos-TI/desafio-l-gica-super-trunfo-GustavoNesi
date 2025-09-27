// Nível iniciante
#define _CRT_SECURE_NO_WARNINGS // problema que deu na hora de compilar usando o visual studio
#include <stdio.h>

int main() {
    // ---------------- AS VARIÁVEIS DAS CARTAS ---------------- //
    char estado1[3], codigo1[5], cidade1[30];
    int populacao1, pontos1;
    float area1, pib1, densidade1, pibPerCapita1;

    char estado2[3], codigo2[5], cidade2[30];
    int populacao2, pontos2;
    float area2, pib2, densidade2, pibPerCapita2;

    // ---------------- CADASTRO CARTA 1 ---------------- //
    printf("=== CADASTRO CARTA 1 ===\n");
    printf("Estado (ex: SP): ");
    scanf("%s", estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1); // lê até o espaço do teclado

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cálculos das cartas
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (float)pib1 / populacao1;

    // ---------------- CADASTRO CARTA 2 ---------------- //
    printf("\n=== CADASTRO CARTA 2 ===\n");
    printf("Estado (ex: RJ): ");
    scanf("%s", estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos da carta
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (float)pib2 / populacao2;

    // ---------------- COMPARAÇÃO ---------------- //
    // Aqui escolhemos um atributo fixo, no caso população
    printf("\n=== COMPARACAO DE CARTAS ===\n");
    printf("Atributo escolhido: Populacao\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n\n", cidade2, estado2, populacao2);


    //fazemos a comparação para ver qual tem a maior população e depois exibimos eles

    //se a primeira população é maior que a segunda
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } // caso contrario se a segunda for maior
    else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } // se não for nenhuma das duas
    else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
