#include <stdio.h>
#include <string.h>

int main() {
    // variaveis carta 1
    char estado1[30], codigo1[30], cidade1[30];
    int populacao1, turistico1;
    float area1, pib1, densidade_pop1, pib_perca1, superpoder1;

    // variaveis carta2
    char estado2[30], codigo2[30], cidade2[30];
    int populacao2, turistico2;
    float area2, pib2, densidade_pop2, pib_perca2, superpoder2;

    // Entrada de Dados Carta 1
    printf("Carta 1\n");
    printf("Escolha o Estado (A - H): ");
    scanf("%s", &estado1,"\n");
    
    printf("Escolha o Código (01 - 04): ");
    scanf("%s", &codigo1,"\n");
    
    printf("Nome da Cidade: ");
    scanf("%s", cidade1,"\n");

    printf("População: ");
    scanf("%d",&populacao1,"\n");
   
    printf("Área (em km²): ");
    scanf("%f", &area1,"\n");
    
    printf("PIB: ");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turistico1,"\n");
    
    printf("\n");


    // Entrada de Dados Carta 2
    printf("Carta 2\n");
    printf("Escolha o Estado (A - H): ");
    scanf("%s", &estado2,"\n");
    
    printf("Escolha o Código (01 - 04): ");
    scanf("%s", &codigo2,"\n");
    
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    
    printf("População: ");
    scanf("%d",&populacao2,"\n");
    
    printf("Área (em km²): ");
    scanf("%f", &area2,"\n");
   
    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turistico2,"\n");
    printf("\n");

     // Cálculos Carta 1
     densidade_pop1 = (float)populacao1/area1;
     pib_perca1 = (float) pib1/populacao1;
     superpoder1 = populacao1+area1+pib1+turistico1+pib_perca1 + (area1/populacao1);
 
     // Cálculos Carta 2
     densidade_pop2 = (float) populacao2/area2;
     pib_perca2 = pib2/populacao2;
     superpoder2 = populacao2+area2+pib2+turistico2+pib_perca2 + (area2/populacao2);

  


            // Visualização da Saída de Dados

     printf("*** Comparação de Cartas (Atributo: População) ***\n");
     if (populacao1 > populacao2){

        printf("Carta 1 - %s: %d\n", cidade1, populacao1);
        printf("Carta 2 - %s: %d\n", cidade2, populacao2);
        printf("A Carta 1 - (%s) Venceu!\n", cidade1);
    } else{
        printf("Carta 1 - %s: %d\n", cidade1, populacao1);
        printf("Carta 2 - %s: %d\n", cidade2, populacao2);
        printf("A Carta 2 - (%s) Venceu!\n", cidade2);


    }
     

    
    
     

    return 0;

}