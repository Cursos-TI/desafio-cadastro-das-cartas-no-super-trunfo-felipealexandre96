#include<stdio.h>

int main(){
    char estado1 = 'a';
    char codigo1[50] = 'a01';
    char nome1[50];
    int populacao1;
    float area1;
    float PIB1;
    int pontos1;

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

    printf("carta 1: \n");
    printf("Estado: %c", estado1);
    printf("Codigo: %s", codigo1);
    printf("Nome da cidade: %s", nome1);
    printf("População: %d", populacao1);
    printf("Área: %f", area1);
    printf("PIB: %f Bilhões de reais", PIB1);
    printf("Número de pontos turisticos: %d", pontos1);


}