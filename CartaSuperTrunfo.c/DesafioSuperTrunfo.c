#include <stdio.h>

int main(){
     //Variaveis com nome do estado, cidade, codigo, are, pib...
    int numero;
    int codigo; //Numero carta 1,2,3,4.
    char nome[60]; //Nome do estado e cidade;
    char estado[60];
    float pib;   //População;
    float area;  //Area km2;
    int pontos_turisticos; // pontos turisticos
    //Printf -> Comando para ser impresso na tela e scanf para ler dados do teclado e atribui as variavei.
    printf("Numero da carta:\n");
    scanf(" %f\n", &numero);  

    printf("codigo da carta: \n");
    getc(stdin);
    getc(stdin);
    scanf(" %d\n", &codigo);

    printf( "Nome estado: \n");
    scanf( "%s\n", &estado);

    printf( "Nome cidade: \n");
    scanf( "%s\n", &nome );

    printf( "Pib da cidade: \n");
    scanf( "%c\n", &pib);

    printf( "Área da cidade: \n");
    scanf( "%c\n", &area );

    printf( "Numero de pontos turisticos: \n");
    scanf("     %d\n ", &pontos_turisticos);
    return 0;



}