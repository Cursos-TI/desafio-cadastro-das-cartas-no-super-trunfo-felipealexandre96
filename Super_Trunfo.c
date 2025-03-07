#include<stdio.h>

int main(){
    char estado1;
    char codigo1[50];
    char nome1[50];
    int populacao1;
    float area1;
    float PIB1;
    int pontos1;

    printf("digite o estado da cidade 1: \n");
    scanf("%c", &estado1);

    printf("digite o codigo da cidade 1: \n");
    scanf("%S", codigo1);

    printf("digite o nome da cidade 1: \n");
    scanf("%S", nome1);

    printf("digite a populacao da cidade 1: \n");
    scanf("%d", &populacao1);

    printf("digite a area da cidade 1: \n");
    scanf("%f", area1);

    printf("digite o PIB da cidade 1: \n");
    scanf("%f", &PIB1);

    printf("digite os pontos turisticos da cidade 1: \n");
    scanf("%d", &pontos1);

    return 0;





}