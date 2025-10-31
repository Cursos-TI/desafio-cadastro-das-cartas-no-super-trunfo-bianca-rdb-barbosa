#include <stdio.h>
// Inclui a biblioteca padrão de entrada e saída em C.

int main() {//função prinicipal, toda aplicação em C começa com a função main

//Declaração das variaveis carta 1
    char estado1; //char armazena dados do tipo caracter
    char codigo1[4];//array de char que armazena varios caracteres
    char cidade1[50];//array de char que armazena varios caracteres
    unsigned long int populacao1;// unsigned long int armazena valores inteiros muito grandes e positivos
    float area1;//armazena como tipo de dado valores com casas decimais e pontos flutuantes
    float pib1;//armazena como tipo de dado valores com casas decimais e pontos flutuantes
    int pontosTuristicos1;//armazena como tipo de dado valores inteiros
    float superPoder1;//float armazena como tipo de dado valores com casas decimais e pontos flutuantes

     // Variáveis para cálculo da Carta 1 adicionadas no nível aventurireiro 

    float densidadePopulacional1; // População dividida pela área
    float pibPerCapita1; // PIB dividido pela população

     // Declaração das variáveis da Carta 2

    char estado2;//char armazena dados do tipo caracter
    char codigo2[4];//array de char que armazena varios caracteres
    char cidade2[50];//array de char que armazena varios caracteres
    unsigned long int populacao2;// unsigned long int armazena valores inteiros muito grandes e positivos
    float area2;//armazena como tipo de dado valores com casas decimais e pontos flutuantes
    float pib2;//armazena como tipo de dado valores com casas decimais e pontos flutuantes
    int pontosTuristicos2;//armazena como tipo de dado valores inteiros
    float superPoder2;//float armazena como tipo de dado valores com casas decimais e pontos flutuantes

     // Variáveis para cálculo da Carta 2

    float densidadePopulacional2; // População dividida pela área
    float pibPerCapita2; // PIB dividido pela população

    // Cadastro da Carta 1

    printf(" Cadastro da Carta 1\n"); // printf: imprime texto na tela
    //  "\n" significa "quebra de linha"
    printf("Digite o Estado (A-H): ");// printf: imprime texto na tela
    scanf("%c", &estado1);//scanf é um comando de entrada de dados, lê dados do teclado
    //escificador de formato %c imprime um único caractere (char)
    //& é o endereço de memória,o scanf precisa saber onde guardar o valor digitado

    printf("Digite o Codigo da Carta (ex: C07): "); // printf: imprime texto na tela
    scanf("%s", codigo1);// especificador de formato %s para strings(conjunto de caracteres)

    printf("Digite o Nome da Cidade: "); // printf: imprime texto na tela
    scanf("%s", cidade1); // especificador de formato %s para strings(conjunto de caracteres)

    printf("Digite a Populacao: "); // printf: imprime texto na tela
    scanf("%d", &populacao1);//escificador de formato %d para valores inteiros

    printf("Digite a Area (em km²): "); // printf: imprime texto na tela
    scanf("%f", &area1);//especificador de formato de valores decimais com ponto flutuante

    printf("Digite o PIB (em bilhoes de reais): "); // printf: imprime texto na tela
    scanf("%f", &pib1);//especificador de formato de valores decimais com ponto flutuante

    printf("Digite o Numero de Pontos Turisticos: "); // printf: imprime texto na tela
    scanf("%d", &pontosTuristicos1);//escificador de formato %d para valores inteiros

     // Cálculos da Carta 1

    densidadePopulacional1 = populacao1 / area1; // População dividida pela Área
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; 
    // PIB está em bilhões → multiplica por 1.000.000.000 para obter em reais
    // Depois divide pela população
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);
    // o float antes de populacao1 converte o valor inteiro para decimal.
    //o float antes de populacao1 é uma conversão explícita, também chamada de cast

    // Cadastro da Carta 2

    printf("\n=== Cadastro da Carta 2 ===\n");// printf: imprime texto na tela
    //  "\n" significa "quebra de linha"
    printf("Digite o Estado (A-H): ");// printf: imprime texto na tela
    scanf(" %c", &estado2);//scanf é um comando de entrada de dados, lê dados do teclado
    //escificador de formato %c imprime um único caractere (char)
    //& é o endereço de memória,o scanf precisa saber onde guardar o valor digitado

    printf("Digite o Codigo da Carta (ex: D08): "); // printf: imprime texto na tela
    scanf("%s", codigo2);// especificador de formato %s para strings(conjunto de caracteres)

    printf("Digite o Nome da Cidade: "); // printf: imprime texto na tela
    scanf("%s", cidade2);// especificador de formato %s para strings(conjunto de caracteres)

    printf("Digite a Populacao: "); // printf: imprime texto na tela
    scanf("%d", &populacao2);//escificador de formato %d para valores inteiros

    printf("Digite a Area (em km²): "); // printf: imprime texto na tela
    scanf("%f", &area2);//especificador de formato de valores decimais com ponto flutuante

    printf("Digite o PIB (em bilhoes de reais): "); // printf: imprime texto na tela
    scanf("%f", &pib2);//especificador de formato de valores decimais com ponto flutuante

    printf("Digite o Numero de Pontos Turisticos: "); // printf: imprime texto na tela
    scanf("%d", &pontosTuristicos2);//escificador de formato %d para valores inteiros

     // Cálculos da Carta 2

    densidadePopulacional2 = populacao2 / area2; // Fórmula: População dividida pela Área
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; 
    // PIB está em bilhões → multiplica por 1.000.000.000 para obter em reais
    // Depois divide pela população
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2+ pibPerCapita2 + (1.0 / densidadePopulacional2);
    // o float antes de populacao1 converte o valor inteiro para decimal.
    //o float antes de populacao1 é uma conversão explícita, também chamada de cast

    // Exibição da Carta 1

    printf("\n=== Carta 1 ===\n");// printf: imprime texto na tela
    printf("Estado: %c\n", estado1); // printf: imprime texto na tela
    //%c especificador de formato para um único caractere, \n pula linha
    printf("Codigo: %s\n", codigo1);// printf: imprime texto na tela
    //%s especificador de formato para strings, \n pula linha
    printf("Nome da Cidade: %s\n", cidade1);// printf: imprime texto na tela
    //%s especificador de formato para strings, \n pula linha
    printf("Populacao: %d\n", populacao1);// printf: imprime texto na tela
    //%d especificador de formato para valores inteiros, \n pula linha
    printf("Area: %f km²\n", area1);// printf: imprime texto na tela
    //%f escificador de formato de valores decimais com ponto flutuante
    printf("PIB: %f bilhoes de reais\n", pib1);// printf: imprime texto na tela
    //%f escificador de formato de valores decimais com ponto flutuante,\n pula linha
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);// printf: imprime texto na tela
    //%d especificador de formato para valores inteiros, \n pula linha
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);//printf: imprime texto na tela
    //%.2f especificador de formato para valores decimais com ponto flutuante com 2 casas decimais,\n pula linha
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);//printf: imprime texto na tela
    //%.2f especificador de formato para valores decimais com ponto flutuante com 2 casas decimais,\n pula linha
    printf("Super Poder: %.2f\n", superPoder1);//printf: imprime texto na tela
    //%.2f especificador de formato para valores decimais com ponto flutuante com 2 casas decimais,\n pula linha


    // Exibição da Carta 2

    printf("\n=== Carta 2 ===\n");// printf: imprime texto na tela
    printf("Estado: %c\n", estado2);// printf: imprime texto na tela
     //%c especificador de formato para um único caractere, \n pula linha
    printf("Codigo: %s\n", codigo2);// printf: imprime texto na tela
    //%s especificador de formato para strings, \n pula linha
    printf("Nome da Cidade: %s\n", cidade2);// printf: imprime texto na tela
    //%s especificador de formato para strings, \n pula linha
    printf("Populacao: %d\n", populacao2);// printf: imprime texto na tela
    //%d especificador de formato para valores inteiros, \n pula linha
    printf("Area: %f km²\n", area2);// printf: imprime texto na tela
    //%f escificador de formato de valores decimais com ponto flutuante,\n pula linha
    printf("PIB: %f bilhoes de reais\n", pib2);// printf: imprime texto na tela
    //%f escificador de formato de valores decimais com ponto flutuante,\n pula linha
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);// printf: imprime texto na tela
    //%d especificador de formato para valores inteiros, \n pula linha
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);//printf: imprime texto na tela
    //%.2f especificador de formato para valores decimais com ponto flutuante com 2 casas decimais,\n pula linha
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);//printf: imprime texto na tela
    //%.2f especificador de formato para valores decimais com ponto flutuante com 2 casas decimais,\n pula linha
    printf("Super Poder: %.2f\n", superPoder2);//printf: imprime texto na tela
    //%.2f especificador de formato para valores decimais com ponto flutuante com 2 casas decimais,\n pula linha

   //Comparação das cartas

    printf("\n Comparacao de Cartas \n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);


     // Comparação com if else nível novato
    // Escolha do atributo: POPULAÇÃO
    printf("\n=== Comparacao de Cartas (Atributo: Populacao) ===\n");
    printf("Carta 1 - %s (%c): %lu habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu habitantes\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

 //MENU INTERATIVO nível aventureiro com switch case
    int opcao;
    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha o atributo para comparacao: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO DA COMPARACAO ===\n");
    switch (opcao) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", cidade1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões de reais\n", cidade1, pib1);
            printf("%s: %.2f bilhões de reais\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", cidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d pontos\n", cidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", cidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedor: %s\n", cidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidadePopulacional1);
            printf("%s: %.2f hab/km²\n", cidade2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2)
                printf("Vencedor: %s\n", cidade1);
            else if (densidadePopulacional2 < densidadePopulacional1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida! Escolha um número de 1 a 5.\n");
            break;
    }

    
    //NÍVEL MESTRE: Implementando Comparações Avançadas com Atributos Múltiplos em C 

    int atributo1, atributo2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma1 = 0, soma2 = 0;

    printf("\n=== NÍVEL MESTRE: Comparação com Dois Atributos ===\n");

    // Escolha do primeiro atributo
    printf("Escolha o primeiro atributo:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n");
    scanf("%d", &atributo1);

    // Escolha do segundo atributo (menu dinâmico)
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) printf("%d - %s\n", i,
            (i==1)?"Populacao":(i==2)?"Area":(i==3)?"PIB":(i==4)?"Pontos Turisticos":"Densidade Demografica");
    }
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("Erro: os atributos devem ser diferentes!\n");
        return 0;
    }

    // Função de comparação dos atributos
    switch (atributo1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; break;
        case 5: valor1_carta1 = 1 / densidadePopulacional1; valor1_carta2 = 1 / densidadePopulacional2; break;
        default: printf("Atributo inválido!\n"); return 0;
    }

    switch (atributo2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; break;
        case 5: valor2_carta1 = 1 / densidadePopulacional1; valor2_carta2 = 1 / densidadePopulacional2; break;
        default: printf("Atributo inválido!\n"); return 0;
    }

    // Soma dos atributos
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // Resultado
    printf("\n=== RESULTADO FINAL (Nível Mestre) ===\n");
    printf("Carta 1 (%s): %.2f + %.2f = %.2f\n", cidade1, valor1_carta1, valor2_carta1, soma1);
    printf("Carta 2 (%s): %.2f + %.2f = %.2f\n", cidade2, valor1_carta2, valor2_carta2, soma2);

    (soma1 > soma2) ? printf("Vencedor: %s\n", cidade1)
    : (soma2 > soma1) ? printf("Vencedor: %s\n", cidade2)
    : printf("Resultado: Empate!\n");
 return 0;//indica que o programa terminou sem erros
}




   

