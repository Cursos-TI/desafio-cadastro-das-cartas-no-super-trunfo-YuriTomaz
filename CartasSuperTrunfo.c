#include <stdio.h>

    int main(){

        //declaracão de variaveis 
        char estado1[50], estado2[50], codigo_carta1[50], codigo_carta2[50], nome_cidade1[50], nome_cidade2[50];
        int populacao1, populacao2, total_pontoturistico1, total_pontoturistico2;
        float area1, area2, pib1, pib2;

        //perguntas para preencher as informaçoes da primeira carta
        printf("Preencha a primeira carta\n");
        printf("Escolha uma letra de A a H para representar um dos 8 estados: ");
        scanf("%s", estado1);
        
        //pergunta o codigo da carta e armazena o valor na variavel
        printf("Insira o codigo da carta tendo a letra do estado seguido de um numero de 01 a 04: ");
        scanf("%s", codigo_carta1);
        
        //pergunta o nome da cidade e armazena o valor na variavel
        printf("Insira o nome da cidade: ");
        scanf("%s", nome_cidade1);
        
        //pergunta o numero de habitantes e armazena o valor na variavel
        printf("Insira o numero de habitantes da cidade: ");
        scanf("%d", &populacao1);
        
        //pergunta a area da cidade e armazena o valor na variavel
        printf("Insira a area da cidade em quilometros quadrados: ");
        scanf("%f", &area1);
        
        //pergunta o valor do pib e armazena o valor na variavel
        printf("Insira o PIB da cidade: ");
        scanf("%f", &pib1);

        //pergunta a quantidade e pontos turistico e armazena o valor na variavel
        printf("Insira a quantidade de pontos turisticos na cidade: ");
        scanf("%d", &total_pontoturistico1);
        
        //faz as mesmas perguntas para a segunda carta
        printf("\nAgora preencha a segunda carta\n");
        printf("Escolha uma letra de A a H para representar um dos 8 estados: ");
        scanf("%s", estado2);

        printf("Insira o codigo da carta tendo a letra do estado seguido de um numero de 01 a 04: ");
        scanf("%s", codigo_carta2);

        printf("Insira o nome da cidade: ");
        scanf("%s", nome_cidade2);

        printf("Insira o numero de habitantes da cidade ");
        scanf("%d", &populacao2);

        printf("Insira a area da cidade em quilometros quadrados: ");
        scanf("%f", &area2);

        printf("Insira o PIB da cidade: ");
        scanf("%f", &pib2);

        printf("Insira a quantidade de pontos turisticos na cidade: ");
        scanf("%d", &total_pontoturistico2);
        
        //mostra as cartas com os dados informados da primeira carta
        printf("\nCarta 1\n"
                "Estado: %s\n"
                "Codigo: %s\n"
                "Nome da cidade: %s\n"
                "Populacao: %d\n"
                "Area: %3.f\n"
                "Pib: %3.f\n"
                "Numero de pontos turisticos: %d", estado1, codigo_carta1, nome_cidade1, populacao1, area1, pib1, total_pontoturistico1);
        //mostra as cartas com os dados informados da segunda carta
        printf("\nCarta 2\n"
                "Estado: %s\n"
                "Codigo: %s\n"
                "Nome da cidade: %s\n"
                "Populacao: %d\n"
                "Area: %3.f\n"
                "Pib: %.3f\n"
                "Numero de pontos turisticos: %d", estado2, codigo_carta2, nome_cidade2, populacao2, area2, pib2, total_pontoturistico2);
    

        return 0;

}