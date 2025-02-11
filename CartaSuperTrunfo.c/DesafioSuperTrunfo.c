#include <stdio.h>

int main(){

    //Variaveis com nome do estado, cidade, codigo, are, pib...
    int numero,codigo; //Numero carta 1,2,3,4.
    char nome[130]; //Nome do estado e cidade;
    float pib;   //População;
    float area;  //Area km2;
    float pontos_turisticos;

    //Printf -> Comando para ser impresso na tela e scanf para ler dados do teclado e atribui as variaveis.

    printf("Codigo do estado da carta: \n"); 
    scanf( " %d\n", &codigo);

    printf("Numeração da carta: \n");
    scanf( "%d\n", &numero); //Aqui tive que dar espaço entre parenteses e aspas pois estava dando erro de espaçamento.

    printf("Nome estado: \n");
    scanf( "%s\n", &nome);

    printf("Nome cidade: \n");
    scanf( "%s\n", &nome);

    printf("Pib da cidade: \n");
    scanf("%c\n", &pib);

    printf("Área da cidade: \n");
    scanf("%c\n", &area);

    printf("Numero de pontos turisticos: \n");
    scanf("%c\n ", &pontos_turisticos);

    printf("Codigo do estado da carta: %d\n", &codigo);
    printf("Numeração da carta: %d\n", &numero);
    printf("Nome estado: %s\n",&nome);
    printf("Nome cidade: %s\n", &nome);
    printf("Pib da cidade: %c\n", &pib);
    printf("Área da cidade: %c\n", &area);
    printf("Numero de pontos turisticos: %c\n", &pontos_turisticos);

    return 0;



}