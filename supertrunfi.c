#include <stdio.h>

int main() {
    //variaveis
    int populacao1, populacao2;
    int num_pontos_tur1, num_pontos_tur2;
    char estado1, estado2;
    char codig_d_carta1 [3], codig_d_carta2 [3];
    char nome_cidad1 [20], nome_cidad2 [20];
    float area1, area2;
    float pib1, pib2;

    //Cadastro da carta
    printf("carta1: \n");

    printf("Digite uma letra (A-H) que represente um estado: \n");
    scanf("%s", estado1);
    printf("Digite o codigo da carta (ex:A01, A02) \n");
    scanf("%s", codig_d_carta1);
    printf("Digite a Cidade: \n");
    scanf("%s", nome_cidad1);
    printf("Digite a população: \n ");
    scanf("%d", populacao1);
    printf("Digite a área (km): \n");
    scanf("%f", area1);
    printf("Digite o PIB: \n");
    scanf("%f", pib1);
    printf("Digite numero de pontos turisticos: \n");
    scanf("%d", num_pontos_tur1);

    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);



    return 0;


}
