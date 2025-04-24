#include <stdio.h>
#include <string.h>

int main() {
    // criação de variavel para a escolha da atribuição no switch
    int escolha_atribuicao1, escolha_atribuicao2;
    //
    int resultado1, resultado2;
    float somaatributo1carta1, somaatributo2carta1, somaatributo1carta2, somaatributo2carta2, somaatributos1, somaatributos2;
    
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


      // Menu de Comparação do primerio atributo 1
      printf("Menu Atribuição de Comparação!! : \n");
      printf("1 - População\n");
      printf("2 - Área\n");
      printf("3 - PIB\n");
      printf("4 - Número de Pontos Turísticos\n");
      printf("5 - Densidade Demografica\n");
      printf("Escolha um Atributo: ");
      scanf("%d", &escolha_atribuicao1,"\n");

        // Switch para escolha da atribuição 1
      switch (escolha_atribuicao1){
        case 1:
            printf("Você Escolheu a Opção População!\n");
            resultado1 = populacao1 > populacao2? 1 : 0;
            somaatributo1carta1 = populacao1;
            somaatributo1carta2 = populacao2;
            
        break;

        case 2:
            printf("Você Escolheu a Opção Área!\n");
            resultado1 = area1 > area2? 1 : 0;
            somaatributo1carta1 = area1;
            somaatributo1carta2 = area2;
        break;

        case 3:
            printf("Você Escolheu a Opção PIB!\n");
            resultado1 = pib1 > pib2? 1 : 0;
            somaatributo1carta1 = pib1;
            somaatributo1carta2 = pib2;
        break;

        case 4:
            printf("Você Escolheu a Opção Pontos Turísticos!\n");
            resultado1 = turistico1 > turistico2? 1 : 0;
            somaatributo1carta1 = turistico1;
            somaatributo1carta2 = turistico2;
        break;

        case 5:
            printf("Você Escolheu a Opção Densidade Demográfica!\n");
            resultado1 = densidade_pop1 < densidade_pop2? 1 : 0;
            somaatributo1carta1 = densidade_pop1;
            somaatributo1carta2 = densidade_pop2;
        break;
      
      default:
            printf("Opção Inválida");
        break;
      }

    printf("\n");

      // Menu de Comparação do segundo atributo
      printf("Menu Atribuição de Comparação!! : \n");
      printf("1 - População\n");
      printf("2 - Área\n");
      printf("3 - PIB\n");
      printf("4 - Número de Pontos Turísticos\n");
      printf("5 - Densidade Demografica\n");
      printf("Escolha o segundo Atributo: ");
      scanf("%d", &escolha_atribuicao2,"\n");

      // If para fazer a verificação se a escolha do atributo 2 será a mesma do atributo 1, caso seja imprimirá "Você escolheu o mesmo atributo!"
      if (escolha_atribuicao1==escolha_atribuicao2){
        printf("Você escolheu o mesmo Atributo!");
      } else{
        switch (escolha_atribuicao2){
            case 1:
                printf("Você Escolheu a Opção População!\n");
                resultado2 = populacao1 > populacao2? 1 : 0;
                somaatributo2carta1 = populacao1;
                somaatributo2carta2 = populacao2;
                
            break;
    
            case 2:
                printf("Você Escolheu a Opção Área!\n");
                resultado2 = area1 > area2? 1 : 0;
                somaatributo2carta1 = area1;
                somaatributo2carta2 = area2;
            break;
    
            case 3:
                printf("Você Escolheu a Opção PIB!\n");
                resultado2 = pib1 > pib2? 1 : 0;
                somaatributo2carta1 = pib1;
                somaatributo2carta2 = pib2;
            break;
    
            case 4:
                printf("Você Escolheu a Opção Pontos Turísticos!\n");
                resultado2 = turistico1 > turistico2? 1 : 0;
                somaatributo2carta1 = turistico1;
                somaatributo2carta2 = turistico2;
            break;
    
            case 5:
                printf("Você Escolheu a Opção Densidade Demográfica!\n");
                resultado2 = densidade_pop1 < densidade_pop2? 1 : 0;
                somaatributo2carta1 = densidade_pop1;
                somaatributo2carta2 = densidade_pop2;
            break;
          
          default:
                printf("Opção Inválida");
            break;
          }

          printf("\n");
          

      // realizando a soma dos atributos das cartas
    somaatributos1 = somaatributo1carta1 + somaatributo2carta1;
    somaatributos2 = somaatributo1carta2 + somaatributo2carta2;   

        // Impressão dos Resultados
    printf("1 - %s || 2 - %s\n", cidade1,cidade2);
    // printf("Resultado 1: %d\n", resultado1);
    // printf("Resultado 2: %d\n", resultado2);
    printf("Carta 1 - %.1f Atributos\n",somaatributos1);
    printf("Carta 2 - %.1f Atributos\n",somaatributos2);

    //Fazendo a verificação do resultado de acordo com a soma dos atributos
    if (somaatributos1 > somaatributos2){
        printf("Carta 1 Venceu! ");
    } else if (somaatributos1 == somaatributos2){
        printf("Empate");
    }
    else{
        printf("Carta 2 Venceu");
    }
    
      

    return 0;

}
}