#include <stdio.h>

int main() {
    // Variáveis
    int populacao1, populacao2;
    int num_pontos_tur1, num_pontos_tur2;
    char estado1, estado2;
    char codig_d_carta1[3], codig_d_carta2[3];
    char nome_cidad1[20], nome_cidad2[20];
    float area1, area2;
    float pib1, pib2;
    
    // Cadastro da carta 1
    printf("Carta 1: \n");
    
    printf("Digite uma letra (A-H) que represente um estado: \n");
    scanf("%c", &estado1);  

    printf("Digite o codigo da carta (ex: A01, A02): \n");
    scanf("%s", codig_d_carta1);  

    printf("Digite a Cidade: \n");
    scanf("%s", nome_cidad1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área (km): \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite numero de pontos turisticos: \n");
    scanf("%d", &num_pontos_tur1);


    // Cadastro da carta 2
    printf("Carta 2: \n");
    
    printf("Digite uma letra (A-H) que represente um estado: \n");
    scanf(" %c", &estado2);  

    printf("Digite o codigo da carta (ex: A01, A02): \n");
    scanf("%s", codig_d_carta2);

    printf("Digite a Cidade: \n");
    scanf("%s", nome_cidad2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (km): \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite numero de pontos turisticos: \n");
    scanf("%d", &num_pontos_tur2);


    // Exibindo as informações da carta 1
    printf("Carta 1: \n");    

    printf("Estado: %c\n", estado1);  

    printf("Código da carta: %s\n", codig_d_carta1);

    printf("Cidade: %s\n", nome_cidad1);

    printf("População: %d\n", populacao1);

    printf("Área: %.2f km²\n", area1);  

    printf("PIB: %.2f\n", pib1);  

    printf("Pontos turísticos: %d\n", num_pontos_tur1);

    // Exibindo as informações da carta 2
    printf("Carta 2: \n");    

    printf("Estado: %c\n", estado2);

    printf("Código da carta: %s\n", codig_d_carta2);

    printf("Cidade: %s\n", nome_cidad2);

    printf("População: %d\n", populacao2);

    printf("Área: %.2f km²\n", area2);

    printf("PIB: %.2f\n", pib2);

    printf("Pontos turísticos: %d\n", num_pontos_tur2);
    
    return 0;
}
