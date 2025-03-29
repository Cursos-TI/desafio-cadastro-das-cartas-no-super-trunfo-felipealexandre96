#include<stdio.h>

int main(){
// Atributos das cartas
    char estado1 = 'A';
    char estado2 = 'B';
    char codigo1[50] = "A01";
    char codigo2[50] = "B02";
    char nome1[50], nome2[50];
    int populacao1, populacao2, opcao;
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
    printf("Informe os dados das cartas\n");
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

//Menu interativo para escolha dos atributos que vão se enfrentar
    printf("Escolha um atributo para duelar\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
       if(populacao1 > populacao2) {
        printf("Carta 1 (%s) venceu!: %d\n", nome1, populacao1);
       } else if (populacao1 < populacao2) {
        printf("Carta 2 (%s) venceu!: %d\n", nome2, populacao2);
       } else if (populacao1 == populacao2) {
        printf("Empate\n");
       }
        break;
    case 2:
        if (area1 > area2){
        printf("Carta 1 (%s) venceu!: %f\n", nome1, area1);
        } else if (area1 < area2) {
        printf("Carta 2 (%s) venceu!: %f\n", nome2, area2);
        } else if (area1 == area2) {
        printf("Empate!\n");
        }
        break;
    case 3:
        if (PIB1 > PIB2) {
            printf("Carta 1 (%s) venceu! %f\n", nome1, PIB1);
        } else if (PIB1 < PIB2) {
            printf("Carta 2 (%s) venceu! %f\n", nome2, PIB2);
        } else if (PIB1 == PIB2) {
            printf("Empate!\n");
        }
        break;
    case 4:
        if (pontos1 > pontos2) {
            printf("Carta 1 (%s) venceu! %d\n", nome1, pontos1);
        } else if (pontos1 < pontos2){
            printf("Carta 2 (%s) venceu! %d\n", nome2, pontos2);
        } else if (pontos1 == pontos2) {
            printf("Empate!\n");
        }
        break;
    case 5:
        if (densidade1 > densidade2) {
            printf("Carta 2 (%s) venceu! %f\n", nome2, densidade2);
        } else if (densidade1 < densidade2) {
            printf("Carta 1 (%s) venceu! %f\n", nome1, densidade1);
        } else if (densidade1 == densidade2) {
            printf("Empate!\n");
        }
        break;
    case 6:
        if (capita1 > capita2) {
            printf("Carta 1 (%s) venceu! %f\n", nome1, capita1);
        } else if (capita1 < capita2) {
            printf("Carta 2 (%s) venceu! %f\n", nome2, capita2);
        }
        break;
    default:
        printf("Opção inválida\n");
        break;
    }


    return 0;
    

}