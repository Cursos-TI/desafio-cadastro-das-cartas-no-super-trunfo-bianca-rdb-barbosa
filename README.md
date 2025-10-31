# Desafio Super Trunfo - Países - Cadastro das Cartas

Bem-vindo ao desafio "Super Trunfo - Países"! No jogo Super Trunfo, os jogadores comparam os atributos das cartas para determinar a mais forte. O tema deste Super Trunfo é "Países", onde você comparará os atributos das cidades.

A empresa MateCheck contratou você para desenvolver a parte inicial do jogo, que consiste no cadastro das cartas.

O desafio está dividido em três níveis: Novato, Aventureiro e Mestre, com cada nível adicionando mais complexidade ao anterior.  **Você deve escolher qual desafio quer realizar.**

🚨 **Atenção:** O nível Novato do desafio é focado apenas no cadastro das cartas, utilizando as funções `scanf` para ler os dados e `printf` para exibi-los.

## 🎮 Nível Novato: Cadastro Básico

No nível Novato, você iniciará criando o sistema básico do jogo Super Trunfo com o tema "Países". As cartas serão divididas por estados, cada um com quatro cidades.  Imagine um país dividido em oito estados (A a H), e cada estado com quatro cidades (1 a 4).  A combinação forma o código da carta (ex: A01, B02).

🚩 **Objetivo:** Criar um programa em C que cadastra **duas** cartas com os seguintes atributos:

*   População (`int`)
*   Área (`float`)
*   PIB (`float`)
*   Número de pontos turísticos (`int`)

⚙️ **Funcionalidades do Sistema:**

*   O sistema permitirá ao usuário cadastrar os dados de **duas** cartas manualmente via terminal.
*   Após o cadastro, o sistema exibirá os dados de cada cidade de forma organizada.

📥 **Entrada** e 📤 **Saída de Dados:**

*   O usuário insere os dados de cada carta interativamente via `scanf`.
*   O programa exibe os dados cadastrados usando `printf`, com cada atributo em uma nova linha.

**Simplificações para o Nível Novato:**

*   Cadastre apenas **duas** cartas.
*   Concentre-se na leitura, armazenamento e exibição. Não implemente comparações ou outros recursos.
*   **Não use** laços (`for`, `while`) ou condicionais (`if`, `else`).


## 🛡️ Nível Aventureiro: Cálculo de Atributos

No nível Aventureiro, você expandirá o sistema para incluir o cálculo de dois novos atributos: Densidade Populacional e PIB per Capita.

🆕 **Diferença em relação ao Nível Novato:**

*   **Novos Atributos:**
    *   Densidade Populacional: População / Área (`float`)
    *   PIB per Capita: PIB / População (`float`)

⚙️ **Funcionalidades do Sistema:**

*   O sistema calculará automaticamente a Densidade Populacional e o PIB per Capita.
*   Os novos atributos serão exibidos junto com os demais.

📥 **Entrada** e 📤 **Saída de Dados:**

*   Mesma entrada do nível Novato.
*   A saída exibirá também os atributos calculados.

**Simplificações para o Nível Intermediário:**

*   Continue cadastrando apenas **duas** cartas.
*   Continue **sem usar** laços (`for`, `while`) ou condicionais (`if`, `else`).



## 🏆 Nível Mestre: Comparação e Super Poder

No nível Mestre, você implementará a comparação entre duas cartas e o cálculo do "Super Poder".

🆕 **Diferença em relação ao Nível Aventureiro:**

*   **Comparação de Cartas:** O usuário poderá comparar as duas cartas.
*   **Super Poder:** Soma de todos os atributos (inclusive os calculados), com a densidade populacional *invertida* antes da soma (1/densidade).  Tipo: `float`.

⚙️ **Funcionalidades do Sistema:**

*   Comparação atributo a atributo, mostrando qual carta venceu (1 se a Carta 1 vence, 0 se a Carta 2 vence).
*   Para Densidade Populacional, vence a carta com o *menor* valor.
*   Para os demais atributos (e o Super Poder), vence a carta com o *maior* valor.

📥 **Entrada** e 📤 **Saída de Dados:**

*   Mesma entrada dos níveis anteriores, mas a População agora é `unsigned long int`.
*   A saída mostrará o resultado da comparação para cada atributo e o Super Poder.

**Observação:**  Preste atenção à conversão de tipos ao calcular o Super Poder!

## 🏁 Instruções de como compilar e executar
Primeiro clone esse repositório para o seu ambiente local, após dê um duplo click no arquivo CartasSuperTrunfo.exe.Com isso o programa será excecutado e você podera adicionar valores, segue abaixo exemplos do que vc pode adicionar:

EXEMPLO DE EXCUÇÃO:

Cadastro da Carta 1
Digite o Estado (A-H): A
Digite o Codigo da Carta (ex: C07): C01
Digite o Nome da Cidade: Curitiba
Digite a Populacao: 1963726
Digite a Area (em km²): 435.0
Digite o PIB (em bilhoes de reais): 90.0
Digite o Numero de Pontos Turisticos: 22

Cadastro da Carta 2
Digite o Estado (A-H): B
Digite o Codigo da Carta (ex: C07): C02
Digite o Nome da Cidade: Florianopolis
Digite a Populacao: 516524
Digite a Area (em km²): 675.0
Digite o PIB (em bilhoes de reais): 30.0
Digite o Numero de Pontos Turisticos: 15

=== MENU DE COMPARACAO ===
1 - Populacao
2 - Area
3 - PIB
4 - Numero de Pontos Turisticos
5 - Densidade Demografica
Escolha o atributo para comparacao: 3

Atributo: PIB
Curitiba: 90.00 bilhões de reais
Florianopolis: 30.00 bilhões de reais
Vencedor: Curitiba

EXEMPLO DO NÍVEL MESTRE:

=== NÍVEL MESTRE: Comparação com Dois Atributos ===
Escolha o primeiro atributo:
1 - Populacao
2 - Area
3 - PIB
4 - Pontos Turisticos
5 - Densidade Demografica
> 3

Escolha o segundo atributo (diferente do primeiro):
1 - Populacao
2 - Area
4 - Pontos Turisticos
5 - Densidade Demografica
> 4

=== RESULTADO FINAL (Nível Mestre) ===
Carta 1 (Curitiba): 90.00 + 22.00 = 112.00
Carta 2 (Florianopolis): 30.00 + 15.00 = 45.00
Vencedor: Curitiba



## 🏁 Conclusão

Ao concluir qualquer um dos níveis, você terá dado um passo importante no desenvolvimento do Super Trunfo - Países. Boa sorte e divirta-se programando!

Equipe de Ensino - MateCheck
content_copy
