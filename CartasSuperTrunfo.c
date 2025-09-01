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

                                                    printf("Codigo: ");
                                                        scanf("%s", c1.codigo);
                                                            
                                                                printf("nome da cidade: ");
                                                                    scanf(" %[^\n]", c1.nomeCidade);
                                                                        
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

                                                                                                                                            printf("Codigo: ");
                                                                                                                                                scanf("%s", c2.codigo);
                                                                                                                                                    
                                                                                                                                                        printf("nome da cidade: ");
                                                                                                                                                            scanf(" %[^\n]", c2.nomeCidade);
                                                                                                                                                                
                                                                                                                                                                    printf("PIB: ");
                                                                                                                                                                        scanf("%f", &c2.pib);
                                                                                                                                                                            
                                                                                                                                                                                printf("população (em milhões): ");
                                                                                                                                                                                    scanf("%d", &c2.populacao);
                                                                                                                                                                                        
                                                                                                                                                                                            printf("área (em km2):");
                                                                                                                                                                                                scanf("%f", &c2.area );
                                                                                                                                                                                                    
                                                                                                                                                                                                        printf("numero de pontos turisticos: ");
                                                                                                                                                                                                            scanf("%d", &c2.pontosTuristicos);

                                                                                                                                                                                                                float densidade1 = c1.populacao / c1.area;
                                                                                                                                                                                                                    float pibporcapita1 = c1.pib / c1.populacao;

                                                                                                                                                                                                                        float densidade2 = c2.populacao / c2.area;
                                                                                                                                                                                                                            float pibporcapita2 = c2.pib / c2.populacao;
                                                                                                                                                                                                                                
                                                                                                                                                                                                                                    printf("                  \n");
                                                                                                                                                                                                                                        printf("carta 1:\n");
                                                                                                                                                                                                                                            printf("Codigo: %s\n", c1.codigo);
                                                                                                                                                                                                                                                printf("Nome da cidade: %s\n", c1.nomeCidade);
                                                                                                                                                                                                                                                    printf("estado: %c\n", c1.estado);
                                                                                                                                                                                                                                                        printf("PIB: %.2f Bilhões de reais\n", c1.pib);
                                                                                                                                                                                                                                                            printf("população: %d milhões\n", c1.populacao);
                                                                                                                                                                                                                                                                printf("área: %.2f km2\n", c1.area);
                                                                                                                                                                                                                                                                    printf("Numero de pontos Turisticos: %d\n", c1.pontosTuristicos);
                                                                                                                                                                                                                                                                        printf("Densidade demográfica: %.2f habitantes por km2\n", densidade1);
                                                                                                                                                                                                                                                                            printf("PIB per capita: %.2f mil reais\n", pibporcapita1);
                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                    printf("                  \n");
                                                                                                                                                                                                                                                                                        printf("carta 2:\n");
                                                                                                                                                                                                                                                                                            printf("Codigo: %s\n", c2.codigo);
                                                                                                                                                                                                                                                                                                printf("Nome da cidade: %s\n", c2.nomeCidade);
                                                                                                                                                                                                                                                                                                    printf("estado: %c\n", c2.estado);
                                                                                                                                                                                                                                                                                                        printf("PIB: %.2f Bilhões de reais\n", c2.pib);
                                                                                                                                                                                                                                                                                                            printf("população: %d milhões\n", c2.populacao);
                                                                                                                                                                                                                                                                                                                printf("área: %.2f km2\n", c2.area);
                                                                                                                                                                                                                                                                                                                    printf("Numero de pontos Turisticos: %d\n", c2.pontosTuristicos);
                                                                                                                                                                                                                                                                                                                        printf("Densidade demográfica: %.2f habitantes por km2\n", densidade2);
                                                                                                                                                                                                                                                                                                                            printf("PIB per capita: %.2f mil reais\n", pibporcapita2);
                                                                                                                                                                                                                                                                                                                                return 0;
                                                                                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                                                                                    }