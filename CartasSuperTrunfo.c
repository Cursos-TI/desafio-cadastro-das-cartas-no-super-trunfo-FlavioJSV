#include<stdio.h>

int main()
{
    //Variáveis (primeira carta)
    char estado[20], codigo[10], cidade[20];    
    int turisticos;    
    unsigned long int populacao;
    float km², pib, desnsidadeDemografica, rendaPerCapita, superPoder;    

    printf("******JOGO SUPER TRUNFO******\n");
    printf("\n");

    //Dados (primeira carta)
    printf("INSIRA OS DADOS DA PRIMEIRA CARTA\n");
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

    //variáveis (segunda carta)
    char estado2[20], codigo2[10], cidade2[20];    
    int turisticos2;
    float km²2, pib2;
    unsigned long int populacao2;
    float desnsidadeDemografica2;
    float rendaPerCapita2;
    float superPoder2;

    //Dados (segunda carta)
    printf("\nINSIRA OS DADOS DA SEGUNDA CARTA\n");        

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

    //Imprimindo os valores inseridos (primeira carta)
    printf("\nIMPRIMINDO DADOS DA PRIMEIRA CARTA\n");    
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

    //Imprimindo os valores inseridos (segunda carta)
    printf("\nIMPRIMINDO DADOS DA SEGUNDA CARTA\n");    
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

        //comparação entre atributos das cartas
        int comparacaoPopulacao, comparacaoArea, comparacaoPIB, comparacaoTuristico, comparacaoDensidade, comparacaoCapita, resultado;

        comparacaoPopulacao = populacao > populacao2;
        comparacaoArea = km² > km²2;
        comparacaoPIB = pib > pib2;
        comparacaoTuristico = turisticos > turisticos2;
        comparacaoDensidade = desnsidadeDemografica > desnsidadeDemografica2;
        comparacaoCapita = rendaPerCapita > rendaPerCapita2;
        resultado = superPoder > superPoder2;
        
        //Imprimindo as comprações dos atributos
        printf("COMPARAÇÃO DE CARTAS\n");
        printf("População: %d\n", comparacaoPopulacao);
        printf("Área: %d\n", comparacaoArea);
        printf("PIB: %d\n", comparacaoPIB);
        printf("Pontos Turísticos: %d\n", comparacaoTuristico);
        printf("Densidade Demografica: %d\n", comparacaoDensidade);
        printf("Renda Per Capita: %d\n", comparacaoCapita);
        printf("Super Poder: %d\n", resultado);

            //Fazendo a comparação de cartas por atributo
            //População            
            printf("\nCOMPARAÇAO DE CARTAS (ATRIBUTO: POPULAÇÃO)\n");

            printf("Primeira Carta: %s(%s) População: %li\n", cidade, estado, populacao);
            printf("Segunda Carta: %s(%s) População: %li\n", cidade2, estado2, populacao2);

            if (populacao > populacao2){
                printf("Primeira Carta (%s) Venceu", cidade);
            }else{
                printf("Segunda Carta (%s) Venceu!\n", cidade2);
            }

            //Área            
            printf("\nCOMPARAÇAO DE CARTAS (ATRIBUTO: ÁREA)\n");

            printf("Primeira Carta: %s(%s) Área: %.2f\n", cidade, estado, km²);
            printf("Segunda Carta: %s(%s) Área: %.2f\n", cidade2, estado2, km²2);

            if (km² > km²2){
                printf("Primeira Carta (%s) Venceu", cidade);
            }else{
                printf("Segunda Carta (%s) Venceu!\n", cidade2);
            }

            //PIB            
            printf("\nCOMPARAÇAO DE CARTAS (ATRIBUTO: PIB)\n");

            printf("Primeira Carta: %s(%s) PIB: %.2f\n", cidade, estado, pib);
            printf("Segunda Carta: %s(%s) PIB: %.2f\n", cidade2, estado2, pib2);

            if (pib > pib2){
                printf("Primeira Carta (%s) Venceu", cidade);
            }else{
                printf("Segunda Carta (%s) Venceu!\n", cidade2);
            }

            //Pontos Turísticos           
            printf("\nCOMPARAÇAO DE CARTAS (ATRIBUTO: PONTOS TURÍSTICOS)\n");

            printf("Primeira Carta: %s(%s) Pontos Turísticos: %d\n", cidade, estado, turisticos);
            printf("Segunda Carta: %s(%s) Pontos Turíticos: %d\n", cidade2, estado2, turisticos2);

            if (turisticos > turisticos2){
                printf("Primeira Carta (%s) Venceu", cidade);
            }else{
                printf("Segunda Carta (%s) Venceu!\n", cidade2);
            }

            //Densidade Demográfica           
            printf("\nCOMPARAÇAO DE CARTAS (ATRIBUTO: DENSIDADE DEMOGRÁFICA)\n");

            printf("Primeira Carta: %s(%s) Densidade Demografica: %.2f\n", cidade, estado, desnsidadeDemografica);
            printf("Segunda Carta: %s(%s) Densidade Demografica: %.2f\n", cidade2, estado2, desnsidadeDemografica2);

            if (desnsidadeDemografica < desnsidadeDemografica2){
                printf("Primeira Carta (%s) Venceu", cidade);
            }else{
                printf("Segunda Carta (%s) Venceu!\n", cidade2);
            }

            //Renda Per Capita            
            printf("\nCOMPARAÇAO DE CARTAS (ATRIBUTO: RENDA PER CAPITA)\n");

            printf("Primeira Carta: %s(%s) Renda Per Capita: %.2f\n", cidade, estado, rendaPerCapita);
            printf("Segunda Carta: %s(%s) Renda Per Capita: %.2f\n", cidade2, estado2, rendaPerCapita2);

            if (rendaPerCapita > rendaPerCapita2){
                printf("Primeira Carta (%s) Venceu", cidade);
            }else{
                printf("Segunda Carta (%s) Venceu!\n", cidade2);
            }

            //Super Poder            
            printf("\nCOMPARAÇAO DE CARTAS (ATRIBUTO: SUPER PODER)\n");

            printf("Primeira Carta: %s(%s) Super Poder: %.2f\n", cidade, estado, superPoder);
            printf("Segunda Carta: %s(%s) Super Poder: %.2f\n", cidade2, estado2, superPoder2);

            if (superPoder > superPoder2){
                printf("Primeira Carta (%s) Venceu", cidade);
            }else{
                printf("Segunda Carta (%s) Venceu!\n", cidade2);
            }

                //INTERAÇÃO DO USUÁRIO
                //MENU
                int opcao;
                
                printf("\nDIGITE A OPÇÃO DESEJADA PARA MAIS INFORMAÇÕES!\n");
                printf("1. População\n");
                printf("2. Tamanho\n");
                printf("3. PIB\n");
                printf("4. Pontos Turístico\n");
                printf("5. Densidade Demográfica\n");
                printf("6. Renda Per Capita\n");
                printf("7. Super Poder\n");
                scanf("%d", &opcao);

                //entrando com a opção escolhida pelo usuário
                switch (opcao){
                case 1:                    
                    printf("\nVOCÊ ESCOLHEU POPULAÇÃO!\n");                                      
                    if(populacao < populacao2){ //segunda carta vence
                        printf("Segunda Carta venceu: %s\nCom uma população de: %li\n", cidade2, populacao2);
                        break;
                    }else if (populacao > populacao2){ //primeira carta vence
                        printf("Primeira Carta venceu: %s\nCom uma população de: %li\n", cidade, populacao);
                        break;
                    }else{ //valores iguais, sem vencedor
                        printf("Nenhuma carta venceu pois a quantidade de habitantes é a mesma!\n%scom uma população é de: %li\n%scom uma população é de: %li", cidade, populacao, cidade2, populacao2);
                        break;
                    }

                    case 2:                    
                    printf("\nVOCÊ ESCOLHEU TAMANHO!\n");                                      
                    if(km² < km²2){ //segunda carta vence
                        printf("Segunda Carta venceu: %s\nCom um tamanho em km² de: %.2f\n", cidade2, km²2);
                        break;
                    }else if (km² > km²2){ //primeira carta vence
                        printf("Primeira Carta venceu: %s\nCom um tamanho em km² de: %.2f\n", cidade, km²);
                        break;
                    }else{ //valores iguais, sem vencedor
                        printf("Nenhuma carta venceu pois o tamanho em km² são igaus!\n%s com um tamanho em km² de: %.2f\n%s com um tamanho em km² de: %.2f", cidade, km², cidade2, km²2);
                        break;
                    }

                    case 3:                   
                    printf("\nVOCÊ ESCOLHEU PIB!\n");                                      
                    if(pib < pib2){ //segunda carta vence                     
                        printf("Segunda Carta venceu: %s\nCom um PIB de: %.2f\n", cidade2, pib2);
                        break;
                    }else if (pib > pib2){ //primeira carta vence
                        printf("Primeira Carta venceu: %s\nCom um PIB de: %.2f\n", cidade, pib);
                        break;
                    }else{ //valores iguais, sem vencedor
                        printf("Nenhuma carta venceu pois o PIB são iguais!\n%s com um PIB de: %.2f\n%s com um PIB de: %.2f", cidade, pib, cidade2, pib2);
                        break;
                    }

                    case 4:                    
                    printf("\nVOCÊ ESCOLHEU PONTOS TURÍSTICOS!\n");                                      
                    if(turisticos < turisticos2){ //segunda carta vence                     
                        printf("Segunda Carta venceu: %s\nCom uma quantidade de: %d\n", cidade2, turisticos2);
                        break;
                    }else if (turisticos > turisticos2){ //primeira carta vence
                        printf("Primeira Carta venceu: %s\nCom uma quantidade de: %d\n", cidade, turisticos);
                        break;
                    }else{ //valores iguais, sem vencedor
                        printf("Nenhuma carta venceu pois a quantidade de pontos turísticos são iguais!\n%s com a quantidade de: %d\n%s com a quantidade de: %d", cidade, turisticos, cidade2, turisticos2);
                        break;
                    }

                    case 5:                    
                    printf("\nVOCÊ ESCOLHEU DENSIDADE DEMOGRÁFICA!\n");                                      
                    if(desnsidadeDemografica > desnsidadeDemografica2){ //Segunda carta vence                     
                        printf("Segunda Carta venceu: %s\nCom uma densidade demográfica de: %.2f\n", cidade2, desnsidadeDemografica2);
                        break;
                    }else if (desnsidadeDemografica < desnsidadeDemografica2){ //primeira carta vence
                        printf("Primeira Carta venceu: %s\nCom uma densidade demográfica de: %.2f\n", cidade, desnsidadeDemografica);
                        break;
                    }else{ //valores iguais, sem vencedor
                        printf("Nenhuma carta venceu pois a densidade demográfica são iguais!\n%s com a densidade demográfica de: %.2f\n%s com a densidade demográfica de: %.2f", cidade, desnsidadeDemografica, cidade2, desnsidadeDemografica2);
                        break;
                    }
                    
                    case 6:                    
                    printf("\nVOCÊ ESCOLHEU RENDA PER CAPITA!\n");                                      
                    if(rendaPerCapita < rendaPerCapita2){ //segunda carta vence                     
                        printf("Segunda Carta venceu: %s\nCom uma renda per capita de: %.2f\n", cidade2, rendaPerCapita2);
                        break;
                    }else if (rendaPerCapita > rendaPerCapita2){ //primeira carta vence
                        printf("Primeira Carta venceu: %s\nCom uma renda per capita de: %.2f\n", cidade, rendaPerCapita);
                        break;
                    }else{ //valores iguais, sem vencedor
                        printf("Nenhuma carta venceu pois a renda per capita são iguais!\n%s com uma renda per capita de: %.2f\n%s com uma renda per capita de: %.2f", cidade, rendaPerCapita, cidade2, rendaPerCapita2);
                        break;
                    }

                    case 7:                    
                    printf("\nVOCÊ ESCOLHEU SUPER PODER!\n");                                      
                    if(superPoder < superPoder2){ //segunda carta vence                     
                        printf("Segunda Carta venceu: %s\nCom um super poder de: %.2f\n", cidade2, superPoder2);
                        break;
                    }else if (superPoder > superPoder2){ //primeira carta vence
                        printf("Primeira Carta venceu: %s\nCom um super poder de: %.2f\n", cidade, superPoder);
                        break;
                    }else{ //valores iguais, sem vencedor
                        printf("Nenhuma carta venceu pois os super poderes são iguais!\n%s com um super poder de: %.2f\n%s com um super poder de: %.2f", cidade, superPoder, cidade2, superPoder2);
                        break;
                    }default:
                        printf("Opção Inválida!");                
                
                }


    //DESAFIO MESTRE - TURMA 3
    int atributo1, atributo2;
    int resultadoAtrib1, resultadoAtrib2;   
    
    printf("\n### BEM VINDO AO JOGO DE COMPARAÇÕES ENTRE 2 ATRIBUTOS ###\n");
    printf("ATENÇÂO! Proibido Escolhar Um Atributo Igual Ao Outro!\n");       
    printf("1. População\n");
    printf("2. Tamanho\n");
    printf("3. PIB\n");
    printf("4. Pontos Turístico\n");
    printf("5. Densidade Demográfica\n");
    printf("6. Renda Per Capita\n");
    printf("7. Super Poder\n");    
    printf("\nEscolha o Primeiro Atributo: "); //entrando com o primeiro atributo
    scanf("%d", &atributo1);//POR ALGUM MOTIVO QUE NÃO DESCOBRI, A MINHA VARIAVEL (char) NÃO FUNCIONOU 

    printf("Escolha o Segundo Atributo: "); //entrando com segundo atributo     
    scanf("%d", &atributo2);      

    switch (atributo1){ //saída e comparação do primeiro atributo
    case 1:                
        printf("\nPrimeiro Atributo Escolhido: POPULAÇÃO!\n"); 
        printf("Cidade: %s, População: %li\n",cidade, populacao); 
        printf("Cidade: %s, População: %li\n",cidade2, populacao2);    
        resultadoAtrib1 = (populacao > populacao2) ? 1 : (populacao < populacao2 ? 2 : 0);          
        break;
    case 2:        
        printf("\nPrimeiro Atributo Escolhido: TAMANHO!\n");        
        printf("Cidade: %s, Tamanho: %.2f\n",cidade, km²); 
        printf("Cidade: %s, Tamanho: %.2f\n",cidade2, km²2);
        resultadoAtrib1 = (km² > km²) ? 1 : (km² < km²2 ? 2 : 0);                                  
        break; 
    case 3:        
        printf("\nPrimeiro Atributo Escolhido: PIB!\n");
        printf("Cidade: %s, PIB: %.2f\n",cidade, pib);
        printf("Cidade: %s, PIB: %.2f\n",cidade2, pib2);
        resultadoAtrib1 = (pib > pib2) ? 1 : (pib < pib2 ? 2 : 0);                                            
        break;
    case 4:        
        printf("\nPrimeiro Atributo Escolhido: PONTOS TURÍSTICOS!\n");
        printf("Cidade: %s, Pontos Turísticos: %d\n",cidade, turisticos);
        printf("Cidade: %s, Pontos Turísticos: %d\n",cidade2, turisticos2);
        resultadoAtrib1 = (turisticos > turisticos2) ? 1 : (turisticos < turisticos2? 2 : 0); 
        break;        
    case 5:        
        printf("\nPrimeiro Atributo Escolhido: DENSIDADE DEMOGRÁFICA!\n");
        printf("Cidade: %s, Densidade Demográfica: %.2f\n",cidade, desnsidadeDemografica);
        printf("Cidade: %s, Densidade Demográfica: %.2f\n",cidade2, desnsidadeDemografica2);        
        resultadoAtrib1 = (desnsidadeDemografica < desnsidadeDemografica2) ? 1 : (desnsidadeDemografica > desnsidadeDemografica2 ? 2 : 0);                                              
        break;        
    case 6:        
        printf("\nPrimeiro Atributo Escolhido: RENDA PER CAPITA!\n");
        printf("Cidade: %s, Renda Per Capita: %.2f\n",cidade, rendaPerCapita);
        printf("Cidade: %s, Renda Per Capita: %.2f\n",cidade2, rendaPerCapita2); 
        resultadoAtrib1 = (rendaPerCapita > rendaPerCapita2) ? 1 : (rendaPerCapita < rendaPerCapita2? 2 : 0);                                   
        break;
    case 7:        
        printf("\nPrimeiro Atributo Escolhido: SUPER PODER!\n");        
        printf("Cidade: %s, Super Poder: %.2f\n",cidade, superPoder);
        printf("Cidade: %s, Super Poder: %.2f\n",cidade2, superPoder2);
        resultadoAtrib1 = (superPoder > superPoder2) ? 1 : (superPoder < superPoder2? 2 : 0); 
        break;                                  
    default:
        printf("Opção Inválida!");                

    }    
     if(atributo1 == atributo2){//escolhendo mesmo atributo
            printf("Você Escolheu o Mesmo Atributo!\n");                                       
        }else{
            switch (atributo2){//saída e comparação do segundo atributo                
     case 1:
        printf("\n");              
        printf("Segundo Atributo Escolhido: POPULAÇÃO!\n");
        printf("Cidade: %s, População: %li\n",cidade, populacao);
        printf("Cidade: %s, População: %li\n",cidade2, populacao2);         
        resultadoAtrib2 = (populacao > populacao2) ? 1 : (populacao < populacao2 ? 2 : 0);                                             
        break;
    case 2: 
        printf("\n");
        printf("Segundo Atributo Escolhido: TAMANHO!\n");
        printf("Cidade: %s, Tamanho: %.2F\n",cidade, km²);
        printf("Cidade: %s, Tamanho: %.2f\n",cidade2, km²2);
        resultadoAtrib2 = (km² > km²2) ? 1 : (km² < km²2 ? 2 : 0);                                     
        break; 
    case 3:
        printf("\n");
        printf("Segundo Atributo Escolhido: PIB!\n");
        printf("Cidade: %s, PIB: %.2f\n",cidade, pib);
        printf("Cidade: %s, PIB: %.2f\n",cidade2, pib2);
        resultadoAtrib2 = (pib > pib2) ? 1 : (pib < pib2 ? 2 : 0);                                               
        break;
    case 4:   
        printf("\n");
        printf("Segundo Atributo Escolhido: PONTOS TURÍSTICOS!\n");
        printf("Cidade: %s, Pontos Turísticos: %d\n",cidade, turisticos);
        printf("Cidade: %s, Pontos Turísticos: %d\n",cidade2, turisticos2);
        resultadoAtrib2 = (turisticos > turisticos2) ? 1 : (turisticos < turisticos2 ? 2 : 0);  
        break;        
    case 5:   
        printf("\n");
        printf("Segundo Atributo Escolhido: DENSIDADE DEMOGRÁFICA!\n");
        printf("Cidade: %s, Densidade Demográfica: %.2f\n",cidade, desnsidadeDemografica);
        printf("Cidade: %s, Densidade Demográfica: %.2f\n",cidade2, desnsidadeDemografica2);
        resultadoAtrib2 = (desnsidadeDemografica < desnsidadeDemografica2) ? 1 : (desnsidadeDemografica >  desnsidadeDemografica2 ? 2 : 0);                                              
        break;        
    case 6:   
        printf("\n");
        printf("Segundo Atributo Escolhido: RENDA PER CAPITA!\n");
        printf("Cidade: %s, Renda Per Capita: %.2f\n",cidade, rendaPerCapita);
        printf("Cidade: %s, Renda Per Capita: %.2f\n",cidade2, rendaPerCapita2); 
        resultadoAtrib2 = (rendaPerCapita > rendaPerCapita2) ? 1 : (rendaPerCapita < rendaPerCapita2 ? 2 : 0);                                   
        break;
    case 7:  
        printf("\n");
        printf("Segundo Atributo Escolhido: SUPER PODER!\n");
        printf("Cidade: %s, Super Poder: %.2f\n",cidade, superPoder);
        printf("Cidade: %s, Super Poder: %.2f\n",cidade2, superPoder2); 
        resultadoAtrib2 = (superPoder > superPoder2) ? 1 : (superPoder < superPoder2 ? 2 : 0);  
        break;                                  
    default:
        printf("Opção Inválida!");
            }
        }
        
    //resultado atributo 1   
    if (resultadoAtrib1 == 0)        
        printf("\nCOMPARAÇÃO ENTRE OS ATRIBUTOS\nPrimeiro Atributo: EMPATE! Os Valores São Iguais!\n");
    else if (resultadoAtrib1 == 1)
        printf("\nCOMPARAÇÃO ENTRE OS ATRIBUTOS\nPrimeiro Atributo: %s VENCEU!\n", cidade);
    else
        printf("\nCOMPARAÇÃO ENTRE OS ATRIBUTOS\nPrimeiro Atributo: %s VENCEU!\n", cidade2);

    //resultado atributo 2   
    if (resultadoAtrib2 == 0)
        printf("Segundo Atributo: EMPATE! Os Valores São Iguais!\n");
    else if (resultadoAtrib2 == 1)
        printf("Sengundo Atributo: %s VENCEU!\n", cidade);
    else
        printf("Segundo Atributo: %s VENCEU!\n", cidade2);

    // SOMA DOS 2 ATRIBUTOS ESCOLHIDOS
    float somaCarta1 = 0, somaCarta2 = 0;
    
    switch(atributo1){//Verifica o atributo 1
    case 1: 
        somaCarta1 += populacao; somaCarta2 += populacao2; 
        break;
    case 2: 
        somaCarta1 += km²; somaCarta2 += km²2; 
        break;
    case 3: 
        somaCarta1 += pib; somaCarta2 += pib2; 
        break;
    case 4: 
        somaCarta1 += turisticos; somaCarta2 += turisticos2; 
        break;
    case 5: 
        somaCarta1 += desnsidadeDemografica; somaCarta2 += desnsidadeDemografica2; 
        break;
    case 6: 
        somaCarta1 += rendaPerCapita; somaCarta2 += rendaPerCapita2;
         break;
    case 7: 
        somaCarta1 += superPoder; somaCarta2 += superPoder2; 
        break;
    }
    
    switch(atributo2) {// Verifica o atributo 2
    case 1: 
        somaCarta1 += populacao; somaCarta2 += populacao2; 
        break;
    case 2: 
        somaCarta1 += km²; somaCarta2 += km²2; 
        break;
    case 3: 
        somaCarta1 += pib; somaCarta2 += pib2; 
        break;
    case 4: 
        somaCarta1 += turisticos; somaCarta2 += turisticos2; 
        break;
    case 5: 
        somaCarta1 += desnsidadeDemografica; somaCarta2 += desnsidadeDemografica2; 
        break;
    case 6: 
        somaCarta1 += rendaPerCapita; somaCarta2 += rendaPerCapita2; 
        break;
    case 7: 
        somaCarta1 += superPoder; somaCarta2 += superPoder2; 
        break;
    }

    // ostrar os resultados
    printf("\n### SOMA DOS ATRIBUTOS ESCOLHIDOS DE CADA CARTA ###\n");
    printf("Carta 1 %s: %.2f\n", cidade, somaCarta1);
    printf("Carta 2 %s: %.2f\n", cidade2, somaCarta2);

    //Determinar o vencedor
    if (somaCarta1 > somaCarta2){
        printf("VENCEDOR: %s\n", cidade);
    }else if (somaCarta2 > somaCarta1){
        printf("VENCEDOR: %s!\n", cidade2);
    }else{
        printf("EMPATE! As Cartas Tem o Mesmo Valor!\n");
    }


return 0;
}               
      