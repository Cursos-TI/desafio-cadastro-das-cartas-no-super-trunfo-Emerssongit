#include <stdio.h>

// Nome das variaveis.

int main() {
    
    char estado[90]; // Variavel com nome estado.
    char codigo[5];  // Variavel com codigo carta.
    char cidade[90]; // Variavel com nome da cidade.
    int populacao; // Variavel com número da população.
    float area; // variavel, área da cidade.
    float pib;  // variavel, PIB da cidade.
    int numero; // Variavel com número de pontos turisticos.

    // Leitura e caputra de dados das cartas.

    // Em todos scanf antes dos especificadores coloquei espaço para não dar erro pulando linha.

    printf("Codigo: 1\n");
    printf("Estado: ");
    scanf(" %s", estado);  // Aqui e em todas as strings não usei o '&', como é uma string o scanf amarzena o caracter sem '&'.

    printf("Codigo da carta: ");
    scanf(" %s", codigo);

    printf("Nome da cidade: ");
    scanf(" %s", cidade);

    printf("População: ");
    scanf(" %i", &populacao);

    printf("Área km²: ");
    scanf(" %f", &area);

    printf("PIB: ");
    scanf(" %f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf(" %i", &numero);
     
    // Leitura de dados cadastrados pelo usuarios.

    printf("\nCodigo: 1\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área km²: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %i\n", numero);

    // Leitura e caputra de dados das cartas.

    printf("\nCarta: 2\n");
    printf("Estado: ");
    scanf(" %s", estado);

    printf("Codigo da carta: ");
    scanf(" %s", codigo);

    printf("Nome da cidade:");
    scanf(" %s", cidade);

    printf("População: ");
    scanf(" %d", &populacao);

    printf("Área km²: ");
    scanf(" %f", &area);

    printf("PIB: ");
    scanf(" %f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf(" %i", &numero);

    // Leitura de dados cadastrados pelo usuarios.

    printf("\nCarta: 2\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %f\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numero);

    return 0;
}