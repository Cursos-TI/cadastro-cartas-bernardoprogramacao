#include <stdio.h>
#include <string.h>

// Definição da estrutura da carta
typedef struct {
    char estado[20];           // Nome do estado
    char codigo[5];            // Código da carta (ex: "A01")
    char cidade[30];           // Nome da cidade principal
    int populacao;             // População
    float area;                // Área em Km²
    float pib;                 // PIB
    int pontosTuristicos;      // Número de pontos turísticos
} Carta;

int main() {
    // Criando duas cartas
    Carta carta1, carta2;

    // Preenchendo carta 1 (Ceará)
    strcpy(carta1.estado, "Ceará");
    strcpy(carta1.codigo, "A01");
    strcpy(carta1.cidade, "Fortaleza");
    carta1.populacao = 9240580;
    carta1.area = 148920.47f;
    carta1.pib = 169.3f;
    carta1.pontosTuristicos = 15;

    // Preenchendo carta 2 (Bahia)
    strcpy(carta2.estado, "Bahia");
    strcpy(carta2.codigo, "B01");
    strcpy(carta2.cidade, "Salvador");
    carta2.populacao = 14812617;
    carta2.area = 564692.67f;
    carta2.pib = 277.3f;
    carta2.pontosTuristicos = 25;

    // Exibindo as cartas
    printf("=== Carta 1 ===\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}