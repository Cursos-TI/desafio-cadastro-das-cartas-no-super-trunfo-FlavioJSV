#include<stdio.h>

int main()
{
//primeira parte (carta 01), variáveis, informações necessárias para alimentar as cartas. 
    char estado[20], codigo[10], cidade[20];    
    int turisticos;    
    unsigned long int populacao;
    float km², pib, desnsidadeDemografica, rendaPerCapita, superPoder;    

    printf("******JOGO SUPER TRUNFO******\n");
    printf("\n");

 //segunda parte (carta 01), tipos de dados, indicando cada variável e seus valores.
    printf("DADOS PRIMEIRA CARTA\n");
    printf("Código: ");
    scanf("%s", codigo);

    printf("Estado: ");
    scanf("%s", estado);

    printf("Cidade: ");
    scanf("%s", cidade);

    printf("População: ");
    scanf("%li", &populacao);

    printf("Qual o tamanho em km²?: ");
    scanf("%f", &km²);

    printf("Qual é o PIB?: ");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos?: ");
    scanf("%d", &turisticos);

    //primeira parte (carta 02), variáveis, informações necessárias para alimentar as cartas. 
        char estado2[20], codigo2[10], cidade2[20];    
        int turisticos2;
        float km²2, pib2;
        unsigned long int populacao2;
        float desnsidadeDemografica2;
        float rendaPerCapita2;
        float superPoder2;

     //segunda parte (carta 02), tipos de dados, indicando cada variável e seus valores. 
        printf("\n");
        printf("DADOS SEGUNDA CARTA\n");        
        
        printf("Código: ");
        scanf("%s", codigo2);
    
        printf("Estado: ");
        scanf("%s", estado2);

        printf("Cidade: ");
        scanf("%s", cidade2);

        printf("População: ");
        scanf("%li", &populacao2);

        printf("Qual o tamanho em km²?: ");
        scanf("%f", &km²2);

        printf("Qual é o PIB?: ");
        scanf("%f", &pib2);

        printf("Quantos pontos turísticos?: ");
        scanf("%d", &turisticos2);
        printf("\n");


//terceira parte (carta 01), imprimindo na tela do usuário os valores inseridos.
    printf("IMPRIMINDO DADOS DA CARTA 01");
    printf("\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %li\n", populacao);
    printf("Tamanho em km²: %.2f\n", km²);
    printf("Seu PIB é de: %.2f\n", pib);
    printf("Com %d pontos turísticos\n", turisticos);

    desnsidadeDemografica = populacao / km²;
    printf("Densidade demografica: %.2f hab/km²\n", desnsidadeDemografica);
    
    rendaPerCapita = pib / populacao;
    printf("Renda per capta: R$%.2f\n", rendaPerCapita); 

    superPoder = populacao + km² + pib + rendaPerCapita + (1 / desnsidadeDemografica) + turisticos;
    printf("Super Poder: %.2f", superPoder);
    
    printf("\n");    

    //terceira parte (carta 02), imprimindo na tela do usuário os valores inseridos.
        printf("IMPRIMINDO DADOS DA CARTA 02");
        printf("\n");
        printf("Estado: %s\n", estado2);
        printf("Código da carta: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %li\n", populacao2);
        printf("Tamanho em km²: %.2f\n", km²2);
        printf("PIB: %.2f\n", pib2);
        printf("Com %d pontos turísticos\n", turisticos2);
        
        desnsidadeDemografica2 = populacao2 / km²2;
        printf("Densidade demografica: %.2f hab/km²\n", desnsidadeDemografica2);
        
        rendaPerCapita2 = pib2 / populacao2;
        printf("Renda per capta: R$%.2f\n", rendaPerCapita2); 

        superPoder2 = populacao2 + km²2 + pib2 + rendaPerCapita2 + (1 / desnsidadeDemografica2) + turisticos2;
        printf("Super Poder: %.2f\n", superPoder2);
        printf("\n");
    
    //comparação entre atributos

        int comparacaoPopulacao, comparacaoArea, comparacaoPIB, comparacaoTuristico, comparacaoDensidade, comparacaoCapita, resultado;

        comparacaoPopulacao = populacao > populacao2;
        comparacaoArea = km² > km²2;
        comparacaoPIB = pib > pib2;
        comparacaoTuristico = turisticos > turisticos2;
        comparacaoDensidade = desnsidadeDemografica > desnsidadeDemografica2;
        comparacaoCapita = rendaPerCapita > rendaPerCapita2;
        resultado = superPoder > superPoder2;

        printf("COMPARAÇÃO DE CARTAS");
        printf("\n");

        printf("População: %d\n", comparacaoPopulacao);
        printf("Área: %d\n", comparacaoArea);
        printf("PIB: %d\n", comparacaoPIB);
        printf("Pontos Turísticos: %d\n", comparacaoTuristico);
        printf("Densidade Demografica: %d\n", comparacaoDensidade);
        printf("Renda Per Capita: %d\n", comparacaoCapita);
        printf("Super Poder: %d\n", resultado);

            //FAZENDO A COMPARAÇAO DE CARTAS POR ATRIBUTO
            //POPULAÇAO
            printf("\n");
            printf("COMPARAÇAO DE CARTAS (ATRIBUTO: POPULAÇÃO)\n");

            printf("Primeira Carta: %s(%s) População: %li\n", cidade, estado, populacao);
            printf("Segunda Carta: %s(%s) População: %li\n", cidade2, estado2, populacao2);

            if (populacao > populacao2){
                printf("Primeira Carta (%s) Venceu", cidade);
            }else{
                printf("Segunda Carta (%s) Venceu!\n", cidade2);
            }

            //ÁREA
            printf("\n");
            printf("COMPARAÇAO DE CARTAS (ATRIBUTO: ÁREA)\n");

            printf("Primeira Carta: %s(%s) Área: %f\n", cidade, estado, km²);
            printf("Segunda Carta: %s(%s) Área: %f\n", cidade2, estado2, km²2);

            if (km² > km²2){
                printf("Primeira Carta (%s) Venceu", cidade);
            }else{
                printf("Segunda Carta (%s) Venceu!\n", cidade2);
            }

            //PIB
            printf("\n");
            printf("COMPARAÇAO DE CARTAS (ATRIBUTO: PIB)\n");

            printf("Primeira Carta: %s(%s) PIB: %.2f\n", cidade, estado, pib);
            printf("Segunda Carta: %s(%s) PIB: %.2f\n", cidade2, estado2, pib2);

            if (pib > pib2){
                printf("Primeira Carta (%s) Venceu", cidade);
            }else{
                printf("Segunda Carta (%s) Venceu!\n", cidade2);
            }

            //PONTOS TURÍSTICO
            printf("\n");
            printf("COMPARAÇAO DE CARTAS (ATRIBUTO: PONTOS TURÍSTICOS)\n");

            printf("Primeira Carta: %s(%s) Pontos Turísticos: %d\n", cidade, estado, turisticos);
            printf("Segunda Carta: %s(%s) Pontos Turíticos: %d\n", cidade2, estado2, turisticos2);

            if (turisticos > turisticos2){
                printf("Primeira Carta (%s) Venceu", cidade);
            }else{
                printf("Segunda Carta (%s) Venceu!\n", cidade2);
            }

            //DENSIDADE DEMOGRAFICA
            printf("\n");
            printf("COMPARAÇAO DE CARTAS (ATRIBUTO: DENSIDADE DEMOGRAFICA)\n");

            printf("Primeira Carta: %s(%s) Densidade Demografica: %.2f\n", cidade, estado, desnsidadeDemografica);
            printf("Segunda Carta: %s(%s) Densidade Demografica: %.2f\n", cidade2, estado2, desnsidadeDemografica2);

            if (desnsidadeDemografica > desnsidadeDemografica2){
                printf("Primeira Carta (%s) Venceu", cidade);
            }else{
                printf("Segunda Carta (%s) Venceu!\n", cidade2);
            }

            //RENDA PER CAPITA
            printf("\n");
            printf("COMPARAÇAO DE CARTAS (ATRIBUTO: RENDA PER CAPITA)\n");

            printf("Primeira Carta: %s(%s) Renda Per Capita: %.2f\n", cidade, estado, rendaPerCapita);
            printf("Segunda Carta: %s(%s) Renda Per Capita: %.2f\n", cidade2, estado2, rendaPerCapita2);

            if (rendaPerCapita > rendaPerCapita2){
                printf("Primeira Carta (%s) Venceu", cidade);
            }else{
                printf("Segunda Carta (%s) Venceu!\n", cidade2);
            }

            //SUPER PODER
            printf("\n");
            printf("COMPARAÇAO DE CARTAS (ATRIBUTO: SUPER PODER)\n");

            printf("Primeira Carta: %s(%s) Super Poder: %.2f\n", cidade, estado, superPoder);
            printf("Segunda Carta: %s(%s) Super Poder: %.2f\n", cidade2, estado2, superPoder2);

            if (superPoder > superPoder2){
                printf("Primeira Carta (%s) Venceu", cidade);
            }else{
                printf("Segunda Carta (%s) Venceu!\n", cidade2);
            }

return 0;

}