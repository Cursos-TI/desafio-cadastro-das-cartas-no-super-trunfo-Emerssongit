#include <stdio.h>
#include <stdlib.h>

// Nome das variaveis.

int main() {

    int escolhaJogador; // Variavel para função do menu principal.

    // Variaveis para captura de dados das cartas.
    
    char estado1[90], estado2[90]; // Variavel com nome estado.
    char codigo1[4], codigo2[5];  // Variavel com codigo carta.
    char cidade1[90], cidade2[90]; // Variavel com nome da cidade.
    int populacao1, populacao2; // Variavel com número da população.
    float area1, area2; // variavel, área da cidade.
    float pib1, pib2;  // variavel, PIB da cidade.
    int numero1, numero2; // Variavel com número de pontos turisticos.
    float densidade1, densidade2; // Calculo do população e área.
    float pib_percapita1, pib_percapita2; // calculo do pib e populaçãp.

    // Menu incial do jogo.

    printf("########## JOGO SUPER TRUNFO ##########\n");

    printf("\nMenu PRINCIPAL.\n");
    printf("1.Iniciar o jogo.\n");
    printf("2.Regras do jogo.\n");
    printf("3.Sair do jogo.\n");
    printf("Escolha uma função:");
    scanf("%d", &escolhaJogador);

    // Funcionamento das funções do menu principal.

    switch (escolhaJogador)
     {                               
        case 1:   // Cadastro das cartas pelo usario.

            printf("\n########## CADASTRO DAS CARTAS ##########\n ");
   
            printf("\nCARTA: 1.\n");
            printf("De (A- H) uma letra para estado: ");
            scanf(" %s", estado1); 

            printf("Codigo da carta (A01, B01): ");
            scanf(" %s", codigo1);

            printf("Nome da cidade: ");
            scanf(" %s", cidade1);

            printf("População (DIGITE SEM PONTOS): ");
            scanf(" %d", &populacao1);

            printf("Área km²: ");
            scanf(" %f", &area1);

            printf("PIB: ");
            scanf(" %f", &pib1);

            printf("Número de Pontos Turísticos: ");
            scanf(" %i", &numero1);

            // Conta para calcular densidade populacional e pib percapita.

            densidade1 = populacao1 / area1;
            pib_percapita1 = pib1 / populacao1;

            // Leitura de dados cadastrados pelo usuarios.

            printf("\nCARTA: 1. \n");
            printf("Estado: %s \n", estado1);
            printf("Codigo da carta: %s\n", codigo1);
            printf("Nome da cidade: %s\n", cidade1);
            printf("População: %d\n", populacao1);
            printf("Área km²: %f\n", area1);
            printf("PIB: %f\n", pib1);
            printf("Número de Pontos Turísticos: %i\n", numero1);
            printf("Densidade populacional: %.2f\n", densidade1);
            printf("PIB per capita: %.8f\n", pib_percapita1);

            printf("\nCARTA: 2. \n");
            printf("De (A- H) uma letra para estado: ");
            scanf(" %s", estado2);

            printf("Codigo da carta (A01, B01): ");
            scanf(" %s", codigo2);

            printf("Nome da cidade:");
            scanf(" %s", cidade2);

            printf("População (DIGITE SEM PONTOS): ");
            scanf(" %d", &populacao2);

            printf("Área km²: ");
            scanf(" %f", &area2);

            printf("PIB: ");
            scanf(" %f", &pib2);

            printf("Número de Pontos Turísticos: ");
            scanf(" %i", &numero2);

            densidade2 = populacao2 / area2;
            pib_percapita2 = pib2 / populacao2;

            // Leitura de dados cadastrados pelo usuarios.

            printf("\nCarta: 2\n");
            printf("Estado: %s\n", estado2);
            printf("Codigo da carta: %s\n", codigo2);
            printf("Nome da cidade: %s\n", cidade2);
            printf("População: %d\n", populacao2);
            printf("Área: %f\n", area2);
            printf("PIB: %f\n", pib2);
            printf("Número de Pontos Turísticos: %d\n", numero2);
            printf("Densidade populacional: %.2f\n", densidade2);
            printf("PIB per capita: %.8f\n", pib_percapita2);
            break;
        case 2:   // Função para demonstrar as regras do jogo.

            printf("\n##### REGRAS DO JOGO #####\n");
            printf("\n 1. O jogo funciona da seguinte forma:\n");
            printf("\n 2. Seram cadastradas duas cartas, com alguns atributos ex: ESTADO, CODIGO, PIB...\n");
            printf("\n 3. A carta que conter o melhor atributo em pontuação vence.\n");
            break;

        case 3:  // Função para sair do jogo.

            printf("Saindo do jogo.\n");
            exit(0);
            break;
    
        default: // Função não operacional.

            printf("Operação invalida.");
            break;
     }
        // Comparação do atributo área das cartas.

        printf("\nCOMPARAÇÃO DE CARTAS (ÁREA)\n");
        printf("Carta: 1 %s (%s): %lf\n", cidade1, estado1, area1);
        printf("Carta: 2 %s (%s): %lf\n", cidade2, estado2, area2);

        // Comando if e else para condição verdadeira ou falsa, com variavel densidade.
        // A carta que tiver a menor densidade vence.

         printf("\nMENOR DENSIDADE POPULACIONAL VENCE.\n");

        if (densidade1 < densidade2) {
            printf("\nCarta 1 : ### venceu! ###\n");
        } else if (densidade2 < densidade1) {
            printf("Carta 2 : ### venceu! ###\n");
        } else {
            printf("### EMPATOU! ###\n");
        }

        // A carta com maior número do atributo área vence ganha o desafio.

        printf("\nQUEM TIVER MAIOR ÁREA VENCE.\n");

        if ( area1 > area2 ){
            printf("\nCarta 1: %s ### VENCEU! ###\n", cidade1);
        } else if ( area2 > area1 ){
            printf("Carta 2: %s ### VENCEU! ###\n", cidade2);
        } else {
            printf("### EMPATOU! ###\n");
        }



    return 0;
}