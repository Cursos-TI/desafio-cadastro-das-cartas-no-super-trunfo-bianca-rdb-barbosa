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


    return 0;//indica que o programa terminou sem erros
}











   

   