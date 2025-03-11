#include <stdio.h>

int main(){

    char Estado;
    char Codigo[20];
    char Cidade[20];
    int Populacao;
    float AreaKm;
    float PIB;
    int PontoTuristicos;
    float densidadePopulacional;
    float PIBperCapita;
    float SuperPoder1;
    float SuperPoder2;

    float resultado;

    printf("carta 1 \n");


    printf("Letra do Estado: \n");
    scanf("%c", &Estado);

    printf("Digite seu Codigo: \n");
    scanf("%s", &Codigo);
 
    printf("Nome da Cidade: \n");
    scanf("%s", &Cidade);

    printf("Digite a População: \n");
    scanf("%d", &Populacao);

    printf("Digite a AreaKm: \n");
    scanf("%f", &AreaKm);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Ponto Turisticos: \n");
    scanf("%d", &PontoTuristicos);

    densidadePopulacional = (float) Populacao / AreaKm;
    PIBperCapita = (float) (PIB*(1000000000) / Populacao);

    SuperPoder1 = (float) Populacao + AreaKm + PIB + PIBperCapita + (1/densidadePopulacional) + PontoTuristicos;

    printf("Carta 1 \n");

    printf("Estado: %c\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Populacao: %d\n", Populacao);
    printf("AreaKm: %.2f\n", AreaKm);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", PontoTuristicos);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional);
    printf("PIB per capita: %.2f\n", PIBperCapita);


    printf("carta 2 \n");


    printf("Letra do Estado: \n");
    scanf(" %c", &Estado);

    printf("Digite seu Codigo: \n");
    scanf("%s", &Codigo);

    printf("Nome da Cidade: \n");
    scanf("%s", &Cidade);

    printf("Digite a População: \n");
    scanf("%d", &Populacao);

    printf("Digite a AreaKm: \n");
    scanf("%f", &AreaKm);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Ponto Turisticos: \n");
    scanf("%d", &PontoTuristicos);

    densidadePopulacional = (float) Populacao / AreaKm;
    PIBperCapita = (float) (PIB*(1000000000) / Populacao);

    SuperPoder2 = (float) Populacao + AreaKm + PIB + PIBperCapita + (1/densidadePopulacional) + PontoTuristicos;

    resultado = SuperPoder1 > SuperPoder2;

    printf("carta 2 \n");
    
    printf("Estado: %c\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Populacao: %d\n", Populacao);
    printf("AreaKm: %.2f\n", AreaKm);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", PontoTuristicos);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional);
    printf("PIB per capita: %.2f\n", PIBperCapita);

    printf("Carta 1 (%.2f) VS Carta 2 (%.2f) Vencedor: %s\n", 
       SuperPoder1, SuperPoder2, 
       (SuperPoder1 > SuperPoder2) ? "Carta 1" : (SuperPoder1 < SuperPoder2)? "Carta 2" : "Empate");


    return 0;
    
}