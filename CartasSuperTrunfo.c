#include <stdio.h>

int main(){

    char Estado[20];
    int Codigo;
    char Cidade[20];
    int Populacao;
    float AreaKm;
    float PIB;
    int PontoTuristicos;


    printf("Nome do Estado: \n");
    scanf("%s", &Estado);

    printf("Digite seu Codigo: \n");
    scanf("%d", &Codigo);

    printf("Nome da Cidade: %s\n", Cidade);
    scanf("%s", &Cidade);

    printf("Digite a População: \n");
    scanf("%d", &Populacao);

    printf("Digite a AreaKm: \n");
    scanf("%f", &AreaKm);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Ponto Turisticos: \n");
    scanf("%d", &PontoTuristicos);

    printf("Estado: %s\n", Estado);
    printf("Codigo: %d\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Populacao: %d\n", Populacao);
    printf("AreaKm: %f\n", AreaKm);
    printf("PIB: %f\n", PIB);
    printf("Pontos Turisticos: %d\n", PontoTuristicos);

}
