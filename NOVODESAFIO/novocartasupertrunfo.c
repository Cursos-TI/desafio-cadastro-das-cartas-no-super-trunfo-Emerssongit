#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída em C

void LimparBuffer() {                                    // Essa função limpa o buffer.
    int c;
    while ((c = getchar()) != '\n' && c != EOF);       
}

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

    printf("Codigo da carta (ex: A01, B02): \n");
    scanf("%s", codigo);
    LimparBuffer();
    

    printf("Nome do estado: \n");
    scanf("%s", estado);
    LimparBuffer();
    

    printf("Nome da cidade: \n");
    scanf("%s", nome);
    LimparBuffer();
 
    printf("População da cidade: \n");
    scanf("%f", &populacao);
    LimparBuffer();
    

    printf("Área da cidade (km2): \n");
    scanf("%f", &area);
    LimparBuffer();
    

    printf("PIB da cidade: \n");
    scanf("%f", &pib);
    LimparBuffer();


    printf("Número de pontos turísticos: \n");
    scanf("%f", &pontos_turisticos);
    LimparBuffer();


    // Leitura dos dados cadastrado pelo usuario x de cada scanf. 
    printf("Codigo da carta: %s \n", codigo); 
    printf("Nome do estado: %s \n", estado); 
    printf("Nome da cidade: %s \n", nome); 
    printf("População da cidade: %f \n", populacao); 
    printf("Área da cidade (km2): %f \n", area); 
    printf("PIB da cidade: %f \n", pib); 
    printf("Número de pontos turísticos: %f \n", pontos_turisticos);

 


    return 0;


}