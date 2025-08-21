
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

#include <stdio.h>

int main()
{
    char estado[20], codigo[10], cidade[20];    
    int populacao, turisticos;
    float km², pib;    
//primeira parte (carta 01), variáveis, informações necessárias para alimentar a carta. 

    printf("Código da carta: ");    
    scanf("%s", codigo);

    printf("Estado: ");
    scanf("%s", estado);

    printf("Cidade: ");
    scanf("%s", cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Qual o tamanho em km²?: ");
    scanf("%f", &km²);

    printf("Qual é o PIB?: ");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos?: ");
    scanf("%d", &turisticos);
//segunda parte (carta 01), tipos de dados, indicando cada variável e seus valores.

    printf("Código da carta: %s\n", codigo);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Com tamanho em km² de: %.2f\n", km²);
    printf("PIB: %.2f\n", pib);
    printf("Com %d pontos turísticos\n", turisticos);
//terceira parte (carta 01), imprimindo na tela do usuário os valores inseridos.


        char estado2[20], codigo2[10], cidade2[20];    
        int populacao2, turisticos2;
        float km²2, pib2;
    //primeira parte (carta 02), variáveis, informações necessárias para alimentar a carta. 

        printf("Código da carta: ");
        scanf("%s", codigo2);

        printf("Estado: ");
        scanf("%s", estado2);

        printf("Cidade: ");
        scanf("%s", cidade2);

        printf("População: ");
        scanf("%d", &populacao2);

        printf("Qual o tamanho em km²?: ");
        scanf("%f", &km²2);

        printf("Qual é o PIB?: ");
        scanf("%f", &pib2);

        printf("Quantos pontos turísticos?: ");
        scanf("%d", &turisticos2);
    //segunda parte (carta 02), tipos de dados, indicando cada variável e seus valores.

        printf("Código da carta: %s\n", codigo2);
        printf("Estado: %s\n", estado2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Com tamanho em km² de: %.2f\n", km²2);
        printf("PIB: %.2f\n", pib2);
        printf("Com %d pontos turísticos\n", turisticos2);
    //terceira parte (carta 02), imprimindo na tela do usuário os valores inseridos.


return 0;

}

