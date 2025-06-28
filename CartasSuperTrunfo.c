#include <stdio.h>

int main(){
    // Declarando as variáveis
    char estado1[30], estado2[30];
    char codigo_carta1[5], codigo_carta2[5], nome_cidade1[30], nome_cidade2[30];
    int populacao1, populacao2, pontos_turistico1, pontos_turistico2;
    float area1, area2, pib1, pib2;


    // Entrada do usuário para carta1
    printf("Carta1 \n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado1);

    printf("Digite o Código da carta: \n");
    scanf("%s", &codigo_carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade1);

    printf("Digite o total da população: \n");
    scanf("%d", &populacao1);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turistico1);

    printf("Digite o tamanho da área: \n");
    scanf("%f", &area1);

    printf("Digite o pib: \n");
    scanf("%f", &pib1);


    // Entrada do usuário para carta2
    printf("Carta2 \n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o Código da carta: \n");
    scanf("%s", &codigo_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade2);

    printf("Digite o total da população: \n");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turistico2);

    printf("Digite o tamanho da área: \n");
    scanf("%f", &area2);

    printf("Digite o pib: \n");
    scanf("%f", &pib2);
    printf("\n");

    //Exibindo os dados das cartas
    printf("Carta1 \n");
    printf("Estado: %s", estado1);
    printf("\nCódigo da carta: %s", codigo_carta1);
    printf("\nNome da cidade: %s", nome_cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea em km²: %f", area1);
    printf("\nPib: %f", pib1);
    printf("\nNúmero de pontos turísticos: %d", pontos_turistico1);
    printf("\n");
    printf("\nCarta2");
    printf("\nEstado: %s", estado2);
    printf("\nCódigo da carta: %s", codigo_carta2);
    printf("\nNome da cidade: %s", nome_cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea em km²: %f", area2);
    printf("\nPib: %f", pib2);
    printf("\nNúmero de pontos turísticos: %d", pontos_turistico2);

    return 0;

}