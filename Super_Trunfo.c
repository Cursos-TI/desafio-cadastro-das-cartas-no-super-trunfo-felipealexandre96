#include<stdio.h>

int main(){
// Atributos das cartas
    char estado1 = 'A';
    char estado2 = 'B';
    char codigo1[50] = "A01";
    char codigo2[50] = "B02";
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos1, pontos2;
    float densidade1;
    float densidade2;
    float capita1;
    float capita2;
    float superpoder1;
    float superpoder2;
   

//Entrada dos dados dos atributos
    printf("digite o nome da cidade 1: \n");
    scanf("%s", nome1);

    printf("digite a populacao da cidade 1: \n");
    scanf("%d", &populacao1);

    printf("digite a area da cidade 1: \n");
    scanf("%f", &area1);

    printf("digite o PIB da cidade 1: \n");
    scanf("%f", &PIB1);

    printf("digite os pontos turisticos da cidade 1: \n");
    scanf("%d", &pontos1);

    printf("digite o nome da cidade 2: \n");
    scanf("%s", nome2);

    printf("digite a população da cidade 2: \n");
    scanf("%d", &populacao2);

    printf("digite a area da cidade 2: \n");
    scanf("%f", &area2);

    printf("digite o PIB da cidade 2: \n");
    scanf("%f", &PIB2);

    printf("digite os pontos turisticos da cidade 2: \n");
    scanf("%d", &pontos2);

//Calculo das densidades e per capitas
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;
    capita1 = (float) PIB1 / populacao1;
    capita2 = (float) PIB2 / populacao2;

//calculo do super poder
    superpoder1 = (float) populacao1 + area1 + PIB1 + pontos1 + capita1 + (1 /densidade1);
    superpoder2 = (float) populacao2 + area2 + PIB2 + pontos2 + capita2 + (1 / densidade2);

//Saida dos atributos    
    printf("Carta1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nome1);
    printf("População: %d \n", populacao1);
    printf("Área: %f Km² \n", area1);
    printf("PIB: %f Bilhões de reais \n", PIB1);
    printf("Número de pontos turisticos: %d \n", pontos1);
    printf("Densidade populacional: %f hab/km² \n", densidade1);
    printf("PIB per capita: %f reais \n", capita1);
    printf("Super poder: %f\n", superpoder1);


    printf("\nCarta2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %f Km² \n", area2);
    printf("PIB: %f \n", PIB2);
    printf("Número de pontos turisticos: %d \n", pontos2);
    printf("Densidade populacional: %f hab/km² \n", densidade2);
    printf("PIB per capita: %f reais \n", capita2);
    printf("Super poder: %f\n", superpoder2);

//comparação dos atributos
    printf("\nPopulação 1 é maior que a População 2?: %d\n", populacao1 > populacao2);
    printf("Área 1 é maior que Área 2?: %d\n", area1 > area2);
    printf("PIB 1 é maior que PIB 2?: %d\n", PIB1 > PIB2);
    printf("Pontos turisticos de 1 é maior que Pontos turisticos de 2?: %d\n", pontos1 > pontos2);
    printf("Densidade 1 é menor que Densidade 2?: %d\n", densidade1 < densidade2);
    printf("PIB per capita 1 é maior que PIB per capita 2?: %d\n", capita1 > capita2);
    printf("Super poder 1 é maior que Super poder 2?: %d\n", superpoder1 > superpoder2);

    return 0;
    

}