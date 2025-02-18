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
    scanf("%s", codigo);

    printf("Nome do estado:");
    scanf("%s", estado);

    printf("Nome da cidade:");
    scanf("%s", nome);

    printf("População da cidade:");
    scanf(" %f[^\n]", &populacao); // Usei fgets para ler a strings, pois estava pulando linha sem pegar dados do scanf.

    printf("Área da cidade (km2):");
    scanf(" %f[^\n]", &area);

    printf("PIB da cidade:");
    scanf(" %f[^\n]", &pib);

    printf("Número de pontos turísticos:");
    scanf(" %f[^\n]", &pontos_turisticos);

    // Leitura dos dados cadastrado pelo usuario x de cada scanf.
    
    printf("Codigo da carta: %s", codigo);
    printf("Nome do estado: %s \n", estado);
    printf("Nome da cidade: %s \n", nome);
    printf("População da cidade: %f \n", populacao);
    printf("Área da cidade (km2): %f", area);
    printf("PIB da cidade: %f \n", pib);
    printf("Número de pontos turísticos: %f \n", pontos_turisticos);

    return 0;


}