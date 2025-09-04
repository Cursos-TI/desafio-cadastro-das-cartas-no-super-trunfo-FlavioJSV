#include<stdio.h>

int main()
{
    char estado[20], codigo[10], cidade[20];    
    int turisticos;
    float km², pib, populacao;
//primeira parte (carta 01), variáveis, informações necessárias para alimentar as cartas. 

    printf("******JOGO SUPER TRUNFO******\n");
    printf("\n");
   
    printf("DADOS PRIMEIRA CARTA\n");
    printf("Código: ");
    scanf("%s", codigo);

    printf("Estado: ");
    scanf("%s", estado);

    printf("Cidade: ");
    scanf("%s", cidade);

    printf("População: ");
    scanf("%f", &populacao);

    printf("Qual o tamanho em km²?: ");
    scanf("%f", &km²);

    printf("Qual é o PIB?: ");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos?: ");
    scanf("%d", &turisticos);
//segunda parte (carta 01), tipos de dados, indicando cada variável e seus valores.

    printf("Seu Estado é o: %s\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Sua cidade é: %s\n", cidade);
    printf("População: %.2f\n", populacao);
    printf("Com tamanho de: %.2fkm²\n", km²);
    printf("Seu PIB é de: %.2f\n", pib);
    printf("Com %d pontos turísticos\n", turisticos);
    printf("Com uma densidade demografica de: %.2f hab/km²\n", populacao / km²);//Desafio 2, Nível Aventureiro
    printf("Com uma renda per capta de: R$%.2f\n", pib / populacao);//Desafio 2, Nível Aventureiro
//terceira parte (carta 01), imprimindo na tela do usuário os valores inseridos.


        char estado2[20], codigo2[10], cidade2[20];    
        int turisticos2;
        float km²2, pib2, populacao2;
    //primeira parte (carta 02), variáveis, informações necessárias para alimentar as cartas. 

        printf("\n");
        printf("DADOS SEGUNDA CARTA\n");        
        
        printf("Código: ");
        scanf("%s", codigo2);
    
        printf("Estado: ");
        scanf("%s", estado2);

        printf("Cidade: ");
        scanf("%s", cidade2);

        printf("População: ");
        scanf("%f", &populacao2);

        printf("Qual o tamanho em km²?: ");
        scanf("%f", &km²2);

        printf("Qual é o PIB?: ");
        scanf("%f", &pib2);

        printf("Quantos pontos turísticos?: ");
        scanf("%d", &turisticos2);
    //segunda parte (carta 02), tipos de dados, indicando cada variável e seus valores.

        printf("Seu Estado é o: %s\n", estado2);
        printf("Código da carta: %s\n", codigo2);
        printf("Sua cidade é: %s\n", cidade2);
        printf("População: %.2f\n", populacao2);
        printf("Com tamanho de: %.2fkm²\n", km²2);
        printf("Seu PIB é de: %.2f\n", pib2);
        printf("Com %d pontos turísticos\n", turisticos2);
        printf("Com uma densidade demografica de: %.2f hab/km²\n", populacao2 / km²2);//Desafio 2, Nível Aventureiro.
        printf("Com uma renda per capta de: R$%.2f\n", pib2 / populacao2);//Desafio 2, Nível Aventureiro
    //terceira parte (carta 02), imprimindo na tela do usuário os valores inseridos.



return 0;

}