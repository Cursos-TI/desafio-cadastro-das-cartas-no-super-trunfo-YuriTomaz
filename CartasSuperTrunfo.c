#include <stdio.h>

    int main(){

        //declaracão de variaveis 
        char estado1[50], estado2[50], codigo_carta1[50], codigo_carta2[50], nome_cidade1[50], nome_cidade2[50];
        unsigned long  populacao1, populacao2;
        int total_pontoturistico1, total_pontoturistico2;
        float area1, area2, pib1, pib2, pibpercapita1, pibpercapita2, densidadepopu1, densidadepopu2;
        float superpoder1, superpoder2;
        
        
        
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
        scanf("%lu", &populacao1);
        
        //pergunta a area da cidade e armazena o valor na variavel
        printf("Insira a area da cidade em quiilometros quadrados: ");
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
        scanf("%lu", &populacao2);

        printf("Insira a area da cidade em quilometros quadrados: ");
        scanf("%f", &area2);

        printf("Insira o PIB da cidade: ");
        scanf("%f", &pib2);

        printf("Insira a quantidade de pontos turisticos na cidade: ");
        scanf("%d", &total_pontoturistico2);
        
        densidadepopu1 = (float)populacao1 / area1;
        densidadepopu2 = (float)populacao2 / area2;
        pibpercapita1 = pib1 * 1000000000 / populacao1;
        pibpercapita2 = pib2 * 1000000000 / populacao2;
        superpoder1 = (float)populacao1 + area1 + pib1 + total_pontoturistico1 + pibpercapita1 + (1 / densidadepopu1);
        superpoder2 = (float)populacao2 + area2 + pib2 + total_pontoturistico2 + pibpercapita2 + (1 / densidadepopu2); 
        
        //mostra as cartas com os dados informados da primeira carta
        printf("Carta 1\n"
                "Estado: %s\n"
                "Codigo: %s\n"
                "Nome da cidade: %s\n"
                "Populacao: %lu\n"
                "Area: %.2f km\n"
                "Pib: %2.f bilhoes de reais\n"
                "Numero de pontos turisticos: %d\n"
                "Densidade populacional: %.2fhab/km\n"
                "Pib per Capita: %.2f reais\n"
                "Super Poder: %.2ff\n", estado1, codigo_carta1, nome_cidade1, populacao1, area1, pib1, total_pontoturistico1, densidadepopu1, pibpercapita1, superpoder1);

                
        //mostra as cartas com os dados informados da segunda carta
        printf("\nCarta 2\n"
                "Estado: %s\n"
                "Codigo: %s\n"
                "Nome da cidade: %s\n"
                "Populacao: %lu\n"
                "Area: %.2f km\n"
                "Pib: %.2f bilhoes de reais\n"
                "Numero de pontos turisticos: %d\n"
                "Densidade populacional: %.2fhab/km\n"
                "Pib per Capita: %.2f reais\n"
                "Super Poder: %.2f\n", estado2, codigo_carta2, nome_cidade2, populacao2, area2, pib2, total_pontoturistico2, densidadepopu2, pibpercapita2, superpoder2);

        // compara as cartas
        printf("Populacao: Carta 1 venceu: (%d)\n", populacao1 > populacao2);
        printf("Area: Carta 1 venceu: (%d)\n", area1 > area2);
        printf("Pib: Carta 1 venceu: (%d)\n", pibpercapita1 > pibpercapita2);
        printf("Pontos turisticos: Carta 1 venceu: (%d)\n", total_pontoturistico1 > total_pontoturistico2);
        printf("Densidade populacional: Carta 1 venceu: (%d)\n", densidadepopu1 < densidadepopu2);
        printf("Pib per capita: Carta 1 venceu: (%d)\n", pibpercapita1 > pibpercapita2);
        printf("Super Poder: Carta 1 venceu: (%d)\n", superpoder1 > superpoder2);


    

        return 0;

}