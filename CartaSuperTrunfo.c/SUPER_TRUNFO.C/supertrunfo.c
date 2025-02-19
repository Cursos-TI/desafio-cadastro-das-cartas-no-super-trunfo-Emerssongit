#include <stdio.h>

// Nome das variaveis.

int main() {
    
    char estado[40]; // Variavel nome estado.
    char codigo[5];  // Variavel codigo carta.
    char cidade[90]; // Variavel nome da cidade.
    int populacao, numero; // Variavel numerção da população e número de pontos turisticos.
    float area; // variavel área da cidade.
    float pib; // variavel PIB da cidade.

    // Leitura e caputra de dados das cartas.

    printf("Codigo: 1\n");
    printf("Estado: ");
    scanf("%s", estado);

    printf("Codigo da carta: ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf("%s", cidade);

    printf("População: ");
    scanf(" %i", &populacao);

    printf("Área: ");
    scanf(" %f", &area);

    printf("PIB: ");
    scanf(" %f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &numero);
     
    // Leitura de dados cadastrados pelo usuarios.

    printf("\nCodigo: 1\n");
    printf("Estado: %s\n", &estado);
    printf("Codigo da carta: %s\n", &codigo);
    printf("Nome da cidade: %s\n", &cidade);
    printf( "População: %i\n", &populacao);
    printf("Área: %f\n", &area);
    printf("PIB: %f", &pib);
    printf("Número de Pontos Turísticos: %d", &numero);

    return 0;
}