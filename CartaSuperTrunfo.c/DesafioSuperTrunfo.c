#include <stdio.h>

int main(){
     //Variaveis com nome do estado, cidade, codigo, are, pib...
    char codigo[4]; //codigo carta A01,A02,A03...
    float numero;//Numerção da carta 1,2,3 e 4.
    char nome[60]; //Nome do estado e cidade;
    char estado[60];
    float pib;   //População;
    float area;  //Area km2;
    int pontos_turisticos; // pontos turisticos

    //Printf -> Comando para ser impresso na tela e scanf para ler dados do teclado e atribui as variavei.

    printf("codigo da carta:\n");
    scanf("%s\n", &codigo);

    printf("Número da carta:\n");
    scanf("%f\n", &numero);  

    printf("Nome estado:\n");
    scanf("%s\n", estado);
    getchar(); // Limpa o caractere de nova linha do buffer

    printf("Nome cidade:\n");
    scanf("%s\n", nome);
    getchar(); // Limpa o caractere de nova linha do buffer

    printf("Pib da cidade:\n");
    scanf(" %f\n", &pib);
    getchar(); // Limpa o caractere de nova linha do buffer

    printf("Área da cidade:\n");
    scanf("%f\n", &area);
    getchar(); // Limpa o caractere de nova linha do buffer

    printf("Numero de pontos turisticos: \n");
    scanf("%d\n", &pontos_turisticos);
    getchar(); // Limpa o caractere de nova linha do buffer
    
    
    return 0;



}