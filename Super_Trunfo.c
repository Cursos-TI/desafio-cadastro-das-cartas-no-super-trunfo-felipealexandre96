#include<stdio.h>

int main(){
    char estado1 = 'A';
    char estado2 = 'B';
    char codigo1[50] = "A01";
    char codigo2[50] = "B02";
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos1, pontos2;

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

    printf("Carta1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nome1);
    printf("População: %d \n",populacao1);
    printf("Área: %f Km² \n", area1);
    printf("PIB: %f Bilhões de reais \n", PIB1);
    printf("Número de pontos turisticos: %d \n", pontos1);


    printf("\nCarta2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %f Km² \n", area2);
    printf("PIB: %f \n", PIB2);
    printf("Número de pontos turisticos: %d \n", pontos2);

    return 0;
    

}