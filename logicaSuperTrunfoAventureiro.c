#include <stdio.h>
#include <string.h>

int main() {
    // criação de variavel para a escolha da atribuição no switch
    int escolha_atribuicao;
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


     // Saída de Dados - Menu de Comparação
    printf("Menu Atribuição de Comparação!! : \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demografica\n");
    printf("\n");
    printf("Escolha a Atribuição de Comparação!!: ");
    scanf("%d", &escolha_atribuicao,"\n");


        //Criação de switch para escolha de atribuições
    switch (escolha_atribuicao){
    case 1: // Caso 1 faz a comparação da população
        printf("***População***\n1 - %s | 2 - %s\n", cidade1,cidade2);
        printf("Carta 1: %d\n",populacao1);
        printf("Carta 2: %d\n",populacao2);
        if (populacao1>populacao2){        
            printf("Carta 1 Venceu!\n");
        }else if(populacao1 == populacao2){
            printf("Empate\n");
        }else{
            printf("Carta 2 Venceu!\n");
        }
        break;

        case 2: // Caso 2 faz a comparação da Área
        printf("***Área***\n1 - %s | 2 - %s\n", cidade1,cidade2);
        printf("Carta 1: %.2f km²\n",area1);
        printf("Carta 2: %.2f km²\n",area2);
        if (area1>area2){        
            printf("Carta 1 Venceu!\n");
        }else if(area1 == area2){
            printf("Empate\n");
        }else{
            printf("Carta 2 Venceu!\n");
        }
        break;

        case 3: // Caso 3 faz a comparação do PIB
        printf("***PIB***\n1 - %s | 2 - %s\n", cidade1,cidade2);
        printf("Carta 1: %.2f\n",pib1);
        printf("Carta 2: %.2f\n",pib2);
        if (pib1>pib2){        
            printf("Carta 1 Venceu!\n");
        }else if(pib1 == pib2){
            printf("Empate\n");
        }else{
            printf("Carta 2 Venceu!\n");
        }
        break;

        case 4: // Caso 4 faz a comparação da quantidade de pontos turísticos
        printf("***Pontos Turísticos***\n1 - %s | 2 - %s\n", cidade1,cidade2);
        printf("Carta 1: %d\n",turistico1);
        printf("Carta 2: %d\n",turistico2);
        if (turistico1>turistico2){        
            printf("Carta 1 Venceu!\n");
        }else if(turistico1 == turistico2){
            printf("Empate\n");
        }else{
            printf("Carta 2 Venceu!\n");
        }
        break;

        case 5: // Caso 5 faz a comparação da densidade demográfica
        printf("***Densidade Demográfica***\n1 - %s | 2 - %s\n", cidade1,cidade2);
        printf("Carta 1: %.2f\n",densidade_pop1);
        printf("Carta 2: %.2f\n",densidade_pop2);
        if (densidade_pop1<densidade_pop2){        
            printf("Carta 1 Venceu!\n");
        }else if(densidade_pop1 == densidade_pop2){
            printf("Empate\n");
        }else{
            printf("Carta 2 Venceu!\n");
        }
        break;
    
    default:
        break;
    }




  


    
    
     

    return 0;

}