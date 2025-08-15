#include <stdio.h>

typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

} Carta;

int main() {
    Carta c1, c2;

    printf("estado (A-H): ");
    scanf(" %c", &c1.estado);

    printf("nome da cidade: ");
    scanf(" %[^\n]", c1.nomeCidade);

    printf("Codigo: ");
    scanf("%s", c1.codigo);

    printf("PIB: ");
    scanf("%f", &c1.pib);

    printf("população (em milhões): ");
    scanf("%d", &c1.populacao);

    printf("área (em km2):");
    scanf("%f", &c1.area );

    printf("numero de pontos turisticos: ");
    scanf("%d", &c1.pontosTuristicos);

    printf("                  \n");

    printf("estado (A-H): ");
    scanf(" %c", &c2.estado);

    printf("nome da cidade: ");
    scanf(" %[^\n]", c2.nomeCidade);

    printf("Codigo: ");
    scanf("%s", c2.codigo);

    printf("PIB: ");
    scanf("%f", &c2.pib);

    printf("população (em milhões): ");
    scanf("%d", &c2.populacao);

    printf("área (em km2):");
    scanf("%f", &c2.area );

    printf("numero de pontos turisticos: ");
    scanf("%d", &c2.pontosTuristicos);

    printf("                  \n");
    printf("carta 1:\n");
    printf("Codigo: %s\n", c1.codigo);
    printf("Nome da cidade: %s\n", c1.nomeCidade);
    printf("estado: %c\n", c1.estado);
    printf("PIB: %.2f Bilhões de reais\n", c1.pib);
    printf("população: %d milhões\n", c1.populacao);
    printf("área: %.2f km2\n", c1.area);
    printf("Numero de pontos Turisticos: %d\n", c1.pontosTuristicos);

    printf("                  \n");
    printf("carta 2:\n");
    printf("Codigo: %s\n", c2.codigo);
    printf("Nome da cidade: %s\n", c2.nomeCidade);
    printf("estado: %c\n", c2.estado);
    printf("PIB: %.2f Bilhões de reais\n", c2.pib);
    printf("população: %d milhões\n", c2.populacao);
    printf("área: %.2f km2\n", c2.area);
    printf("Numero de pontos Turisticos: %d\n", c2.pontosTuristicos);
    return 0;

    }

