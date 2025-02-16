#include <stdio.h>

int main() {
    //Nome das variaveis com estado, cidade, codigo/número, pib, km2...
    char codigo[4]; // Char usado aqui para números com cacteres ex: A01, A02...
    char estado[60];
    char nome[60];
    float populacao;
    float area;
    float pib;
    float pontos_turisticos;

    //Leitura dos codigos cadastrados

    printf("Codigo da carta (ex: A01, B02):");
    scanf("%s", &codigo);

    printf("Nome do estado: ");
    scanf("%s", estado);

    printf("Nome da cidade: ");
    scanf("%s", nome);

    printf("População da cidade: ");
    scanf(" %f", &populacao);

    printf("Área da cidade (km2): ");
    scanf("%f", &area);

    printf("PIB da cidade: ");
    scanf("%f");

    printf("Número de pontos turísticos: ");
    scanf("%f", &pontos_turisticos);


}