#include<stdio.h>

int main(){
// Atributos das cartas
    char estado1 = 'A';
    char estado2 = 'B';
    char codigo1[50] = "A01";
    char codigo2[50] = "B02";
    char nome1[50], nome2[50];
    int populacao1, populacao2, opcao, opcao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos1, pontos2;
    float densidade1;
    float densidade2;
    float capita1;
    float capita2;
    float superpoder1;
    float superpoder2;
    float resultado, resultado2;
   

//Entrada dos dados dos atributos
    printf("Bem-Vindo ao jogo super trunfo!!!\n");
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
    printf("Escolha o primeiro atributo para duelar\n");
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
       printf("Você escolheu a opção População\n");
       resultado = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu a opção Área\n");
        resultado = area1 > area2 ? 1 : 0;
        break;
    case 3:
       printf("Você escolheu a opção PIB\n");
       resultado = PIB1 > PIB2 ? 1 : 0;
        break;
    case 4:
       printf("Você escolheu a opção Pontos Turísticos\n");
       resultado = pontos1 > pontos2 ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu a opção Densidade Populacional\n");
        resultado = densidade1 < densidade2 ? 1 : 0;
        break;
    case 6:
        printf("Você escolheu a opção PIB Per Capita\n");
        resultado = capita1 > capita2 ? 1 : 0;
        break;
    default:
        printf("Opção inválida\n");
        break;
    }

    printf("Escolha o segundo atributo para duelar\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao2);

    if(opcao == opcao2)
    {
        printf("Você escolheu o mesmo atributo\n");
    } else {
        switch (opcao2)
        {
        case 1:
        printf("Você escolheu a opção População\n");
        resultado2 = populacao1 > populacao2 ? 1 : 0;
         break;
     case 2:
         printf("Você escolheu a opção Área\n");
         resultado2 = area1 > area2 ? 1 : 0;
         break;
     case 3:
        printf("Você escolheu a opção PIB\n");
        resultado2 = PIB1 > PIB2 ? 1 : 0;
         break;
     case 4:
        printf("Você escolheu a opção Pontos Turísticos\n");
        resultado2 = pontos1 > pontos2 ? 1 : 0;
         break;
     case 5:
         printf("Você escolheu a opção Densidade Populacional\n");
         resultado2 = densidade1 < densidade2 ? 1 : 0;
         break;
     case 6:
         printf("Você escolheu a opção PIB Per Capita\n");
         resultado2 = capita1 > capita2 ? 1 : 0;
         break;
     default:
         printf("Opção inválida\n");
         break;
           
        }

        if(resultado && resultado2) {
            printf("A carta 1 (%s) venceu!\n", nome1);
        } else if (resultado != resultado2) {
            printf("As cartas 1 (%s) e 2 (%s) empataram!\n", nome1, nome2);
        } else {
            printf("A carta 2 (%s) venceu!\n", nome2);
        }
        
    }



    return 0;
    

}