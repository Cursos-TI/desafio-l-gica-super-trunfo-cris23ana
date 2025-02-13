#include <stdio.h>

/*DESAFIO INICIANTE: Continuar a criação de um jogo de Super Trunfo com o tema Países, onde o sistema permitirá ao usuário cadastrar cartas de cidades,
fornecendo informações detalhadas como estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos.
Com base nesses dados, o sistema deverá calcular automaticamente a densidade populacional e o PIB per capita.
As entradas serão feitas via terminal de comando e, após o cadastro, os dados serão exibidos de forma clara e organizada.
Neste nível, você implementará a lógica de comparação entre as cartas utilizando estruturas de decisão if e if-else para o desenvolvimento
do sistema, onde você deverá escolher uma das propriedades numéricas (int ou float) para realizar a comparação entre as cartas.
A comparação das cartas será feita diretamente no código.

DESAFIO INTERMEDIÁRIO: Mesma mecânica do nível iniciante, mas agora o sistema permitirá aos jogadores compararem cartas do jogo Super Trunfo com base
em diferentes atributos numéricos, permitindo a escolha de diferentes atributos para comparação. Além disso, um menu interativo será implementado
para facilitar a navegação e a escolha dos atributos a serem comparados. Neste nível, você deverá implementar a comparação aninhada entre as cartas,
além de criar um menu interativo utilizando o switch.

DESAFIO AVANÇADO: Mesma mecânica dos outros níveis, mas agora você integrará funcionalidades avançadas, como a criação de menus dinâmicos e a
implementação de lógica complexa utilizando operadores ternários. O sistema deve ser capaz de permitir a escolha de dois atributos numéricos para
comparação, implementar lógica de decisão complexa com estruturas aninhadas e encadeadas para comparar os dois atributos, e criar menus dinâmicos
e responsivos utilizando switch. A carta vencedora será aquela que tiver o maior valor na SOMA dos atributos escolhidos.
Para todas as propriedades, o valor vencedor é o maior.*/

int main() {
//Declaração das variáveis
//primeira carta
    int populacao, pontosturisticos;
    char estado;
    char codigocarta[20];
    char cidade[20];
    float area, densidadepop, pib, pibpercapita;
//segunda carta
    int populacao2, pontosturisticos2;
    char estado2;
    char codigocarta2[20];
    char cidade2[20];
    float area2, densidadepop2, pib2, pibpercapita2;
//super poder
    float superpoder1, superpoder2;
//resultado da escolha para comparação
    int escolha1, escolha2;
    float atributo1, atributo2, resultado1, resultado2;

//Instruções para a inserção de dados no cadastro
    printf("\n");
    printf("######### CADASTRO DAS DUAS CARTAS #########\n");
    printf("\n");
    printf("OBSERVAÇÕES:\n");
    printf("Os Estados são identificados pelas letras A-H. \n");
    printf("As Cidades são numeradas de 01-04. \n");
    printf("A combinação da letra do Estado e número da Cidade define o código da carta. \n");
    printf("\n");

//Cadastro das propriedades
//Estado
    printf("Digite o Estado da primeira Carta: \n");
    scanf(" %c", &estado);
    printf("Digite o Estado da segunda Carta: \n");
    scanf(" %c", &estado2);

//Código da carta
// Por ser uma propriedade char[], aqui não precisa colocar o & antes da variável
    printf("Digite o Código da primeira Carta: \n");
    scanf(" %s", codigocarta);
    printf("Digite o Código da segunda Carta: \n");
    scanf(" %s", codigocarta2);

//Nome da cidade
// O formato %[^\n] é usado para que o scanf leia a string até o proximo \n assim contando espaços e mais de uma palavra
    printf("Digite o Nome da primeira Cidade: \n");
    scanf(" %[^\n]", cidade);
    printf("Digite o Nome da segunda Cidade: \n");
    scanf(" %[^\n]", cidade2);

//População
    printf("Digite a População da primeira Cidade: \n");
    scanf("%d", &populacao);
    printf("Digite a População da segunda Cidade: \n");
    scanf("%d", &populacao2);

//Área
    printf("Digite a Área da primeira Cidade (em km²): \n");
    scanf("%f", &area);
    printf("Digite a Área da segunda Cidade (em km²): \n");
    scanf("%f", &area2);

//PIB
    printf("Digite o PIB da primeira Cidade: \n");
    scanf("%f", &pib);
    printf("Digite o PIB da segunda Cidade: \n");
    scanf("%f", &pib2);

//Número de pontos turísticos
    printf("Digite o número de Pontos Turísticos da primeira Cidade: \n");
    scanf("%d", &pontosturisticos);
    printf("Digite o número de Pontos Turísticos da segunda Cidade: \n");
    scanf("%d", &pontosturisticos2);

//Cálculo da densidade populacional (população / área)
    densidadepop = (float) populacao / area;
    densidadepop2 = (float) populacao2 / area2;

//Cálculo do PIB per capita (pib / população)
    pibpercapita = pib / (float) populacao;
    pibpercapita2 = pib2 / (float) populacao2;

//Cálculo do super poder (soma de todos os atributos)
    superpoder1 = (float) populacao + (float) pontosturisticos + area + densidadepop + pib + pibpercapita;
    superpoder2 = (float) populacao2 + (float) pontosturisticos2 + area2 + densidadepop2 + pib2 + pibpercapita2;

//Exibição das propriedades da carta
    printf("\n");
    printf("######### Suas cartas foram cadastradas com sucesso! #########\n");
    printf("\n");
    printf("Estado da primeira Carta: %c - Estado da segunda Carta: %c \n", estado, estado2);
    printf("Código da primeira Carta: %s - Código da segunda Carta: %s \n", codigocarta, codigocarta2);
    printf("Nome da primeira Cidade: %s - Nome da segunda Cidade: %s \n", cidade, cidade2);
    printf("População da primeira Cidade: %d Habitantes - População da segunda Cidade: %d Habitantes \n", populacao, populacao2);
    printf("Área da primeira Cidade: %.2f km² - Área da segunda Cidade: %.2f km² \n", area, area2);
    printf("Densidade Populacional da primeira Cidade: %.2f habitantes/km² - Densidade Populacional da segunda Cidade: %.2f habitantes/km² \n", densidadepop, densidadepop2);
    printf("PIB da primeira Cidade: %.2f bilhões de reais - PIB da segunda Cidade: %.2f bilhões de reais \n", pib, pib2);
    printf("PIB per Capita da primeira Cidade: %.2f reais - PIB per Capita da segunda Cidade: %.2f reais \n", pibpercapita, pibpercapita2);
    printf("Número de Pontos Turísticos da primeira Cidade: %d - Número de Pontos Turísticos da segunda Cidade: %d \n", pontosturisticos, pontosturisticos2);
    printf("\n");
    printf("Super-Poder: Cada carta terá um super poder que é a soma de todas as propriedades.\n");
    printf("Super-Poder! da primeira Carta: %.4f - Super-Poder! da segunda Carta: %.4f \n", superpoder1, superpoder2);
    printf("\n");

    //Cálculo das comparações
    /*
    Implementar a lógica de comparação de cartas com base em diferentes atributos escolhidos pelo jogador (população, área, PIB, número de pontos turísticos).
    Somente podem ser escolhidos valores numéricos (int ou float). Você deverá escolher duas das propriedades numéricas (int ou float) para realizar a comparação entre as cartas.
     */

    printf("######### COMPARAÇÃO DAS DUAS CARTAS #########\n");
    printf("\n");
    printf("A comparação entre as duas Cartas será feita por meio da escolha de dois atributos para cada.\n");
    printf("A carta vencedora será aquela que tiver o maior valor resultante da soma dos dois atributos escolhidos.\n");
    printf("Dentre as opções a seguir, escolha as que representarem os atributos desejados para a comparação. \n");
    printf("\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Número de Pontos Turísticos.\n");
    printf("\n");
    printf("Primeiro Atributo: ");
    scanf("%d", &escolha1);

    switch(escolha1)
    {
        case 1:
        printf("Atributo 1: População\n");
        atributo1 = populacao;
        break;
        case 2:
        printf("Atributo 1: Área\n");
        atributo1 = area;
        break;
        case 3:
        printf("Atributo 1: PIB\n");
        atributo1 = pib;
        break;
        case 4:
        printf("Atributo 1: Nº de Pontos Turísticos\n");
        atributo1 = pontosturisticos;
        break;
        default:
        printf("Opção Inválida. Tente Novamente.\n");
    }

    printf("Segundo Atributo: ");
    scanf("%d", &escolha2);

    switch(escolha2)
    {
        case 1:
        printf("Atributo 2: População\n");
        atributo2 = populacao;
        break;
        case 2:
        printf("Atributo 2: Área\n");
        atributo2 = area;
        break;
        case 3:
        printf("Atributo 2: PIB\n");
        atributo2 = pib;
        break;
        case 4:
        printf("Atributo 2: Nº de Pontos Turísticos\n");
        atributo2 = pontosturisticos;
        break;
        default:
        printf("Opção Inválida. Tente Novamente.\n");
    }

    printf("\n");

//escolhas de atributo populacao com outros atributos
    if(atributo1 == populacao)
    {
        if(atributo2 == populacao)
        {
            printf("##### Carta 1 #####\n");
            printf("Atributo 1 (População): %d - Atributo 2 (População): %d \n", populacao, populacao);
            printf("##### Carta 2 #####\n");
            printf("Atributo 1 (População): %d - Atributo 2 (População): %d \n", populacao2, populacao2);
            resultado1 = populacao + populacao; //resultado da soma dos atributos da carta 1
            resultado2 = populacao2 + populacao2; //resultado da soma dos atributos da carta 2
        } else if(atributo2 == area){
            printf("##### Carta 1 #####\n");
            printf("Atributo 1 (População): %d - Atributo 2 (Área): %.2f \n", populacao, area);
            printf("##### Carta 2 #####\n");
            printf("Atributo 1 (População): %d - Atributo 2 (Área): %.2f \n", populacao2, area2);
            resultado1 = populacao + area;
            resultado2 = populacao2 + area2;
        } else if(atributo2 == pib){
            printf("##### Carta 1 #####\n");
            printf("Atributo 1 (População): %d - Atributo 2 (PIB): %.2f \n", populacao, pib);
            printf("##### Carta 2 #####\n");
            printf("Atributo 1 (População): %d - Atributo 2 (PIB): %.2f \n", populacao2, pib2);
            resultado1 = populacao + pib;
            resultado2 = populacao2 + pib2;
        } else if(atributo2 == pontosturisticos){
            printf("##### Carta 1 #####\n");
            printf("Atributo 1 (População): %d - Atributo 2 (Pontos Turísticos): %d \n", populacao, pontosturisticos);
            printf("##### Carta 2 #####\n");
            printf("Atributo 1 (População): %d - Atributo 2 (Pontos Turísticos): %d \n", populacao2, pontosturisticos2);
            resultado1 = populacao + pontosturisticos;
            resultado2 = populacao2 + pontosturisticos2;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

//escolhas de atributo area com outros atributos
    if(atributo1 == area)
    {
        if(atributo2 == populacao)
        {
            printf("##### Carta 1 #####\n");
            printf("Atributo 1 (Área): %.2f - Atributo 2 (População): %d \n", area, populacao);
            printf("##### Carta 2 #####\n");
            printf("Atributo 1 (Área): %.2f - Atributo 2 (População): %d \n", area2, populacao2);
            resultado1 = area + populacao; //resultado da soma dos atributos da carta 1
            resultado2 = area2 + populacao2; //resultado da soma dos atributos da carta 2
        } else if(atributo2 == area){
            printf("##### Carta 1 #####\n");
            printf("Atributo 1 (Área): %.2f - Atributo 2 (Área): %.2f \n", area, area);
            printf("##### Carta 2 #####\n");
            printf("Atributo 1 (Área): %.2f - Atributo 2 (Área): %.2f \n", area2, area2);
            resultado1 = area + area;
            resultado2 = area2 + area2;
        } else if(atributo2 == pib){
            printf("##### Carta 1 #####\n");
            printf("Atributo 1 (Área): %.2f - Atributo 2 (PIB): %.2f \n", area, pib);
            printf("##### Carta 2 #####\n");
            printf("Atributo 1 (Área): %.2f - Atributo 2 (PIB): %.2f \n", area2, pib2);
            resultado1 = area + pib;
            resultado2 = area2 + pib2;
        } else if(atributo2 == pontosturisticos){
            printf("##### Carta 1 #####\n");
            printf("Atributo 1 (Área): %.2f - Atributo 2 (Pontos Turísticos): %d \n", area, pontosturisticos);
            printf("##### Carta 2 #####\n");
            printf("Atributo 1 (Área): %.2f - Atributo 2 (Pontos Turísticos): %d \n", area2, pontosturisticos2);
            resultado1 = area + pontosturisticos;
            resultado2 = area2 + pontosturisticos2;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

//escolhas de pib populacao com outros atributos
    if(atributo1 == pib)
    {
        if(atributo2 == populacao)
        {
            printf("##### Carta 1 #####\n");
            printf("Atributo 1 (PIB): %.2f - Atributo 2 (População): %d \n", pib, populacao);
            printf("##### Carta 2 #####\n");
            printf("Atributo 1 (PIB): %.2f - Atributo 2 (População): %d \n", pib2, populacao2);
            resultado1 = pib + populacao; //resultado da soma dos atributos da carta 1
            resultado2 = pib2 + populacao2; //resultado da soma dos atributos da carta 2
        } else if(atributo2 == area){
            printf("##### Carta 1 #####\n");
            printf("Atributo 1 (PIB): %.2f - Atributo 2 (Área): %.2f \n", pib, area);
            printf("##### Carta 2 #####\n");
            printf("Atributo 1 (PIB): %.2f - Atributo 2 (Área): %.2f \n", pib2, area2);
            resultado1 = pib + area;
            resultado2 = pib2 + area2;
        } else if(atributo2 == pib){
            printf("##### Carta 1 #####\n");
            printf("Atributo 1 (PIB): %.2f - Atributo 2 (PIB): %.2f \n", pib, pib);
            printf("##### Carta 2 #####\n");
            printf("Atributo 1 (PIB): %.2f - Atributo 2 (PIB): %.2f \n", pib2, pib2);
            resultado1 = pib + pib;
            resultado2 = pib2 + pib2;
        } else if(atributo2 == pontosturisticos){
            printf("##### Carta 1 #####\n");
            printf("Atributo 1 (PIB): %.2f - Atributo 2 (Pontos Turísticos): %d \n", pib, pontosturisticos);
            printf("##### Carta 2 #####\n");
            printf("Atributo 1 (PIB): %.2f - Atributo 2 (Pontos Turísticos): %d \n", pib2, pontosturisticos2);
            resultado1 = pib + pontosturisticos;
            resultado2 = pib2 + pontosturisticos2;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

//escolhas de atributo pontos turisticos com outros atributos
    if(atributo1 == pontosturisticos)
    {
        if(atributo2 == populacao)
        {
            printf("##### Carta 1 #####\n");
            printf("Atributo 1 (Pontos Turísticos): %d - Atributo 2 (População): %d \n", pontosturisticos, populacao);
            printf("##### Carta 2 #####\n");
            printf("Atributo 1 (Pontos Turísticos): %d - Atributo 2 (População): %d \n", pontosturisticos2, populacao2);
            resultado1 = pontosturisticos + populacao; //resultado da soma dos atributos da carta 1
            resultado2 = pontosturisticos2 + populacao2; //resultado da soma dos atributos da carta 2
        } else if(atributo2 == area){
            printf("##### Carta 1 #####\n");
            printf("Atributo 1 (Pontos Turísticos): %d - Atributo 2 (Área): %.2f \n", pontosturisticos, area);
            printf("##### Carta 2 #####\n");
            printf("Atributo 1 (Pontos Turísticos): %d - Atributo 2 (Área): %.2f \n", pontosturisticos2, area2);
            resultado1 = pontosturisticos + area;
            resultado2 = pontosturisticos2 + area2;
        } else if(atributo2 == pib){
            printf("##### Carta 1 #####\n");
            printf("Atributo 1 (Pontos Turísticos): %d - Atributo 2 (PIB): %.2f \n", pontosturisticos, pib);
            printf("### Carta 2 ###\n");
            printf("Atributo 1 (Pontos Turísticos): %d - Atributo 2 (PIB): %.2f \n", pontosturisticos2, pib2);
            resultado1 = pontosturisticos + pib;
            resultado2 = pontosturisticos2 + pib2;
        } else if(atributo2 == pontosturisticos){
            printf("##### Carta 1 #####\n");
            printf("Atributo 1 (Pontos Turísticos): %d - Atributo 2 (Pontos Turísticos): %d \n", pontosturisticos, pontosturisticos);
            printf("##### Carta 2 #####\n");
            printf("Atributo 1 (Pontos Turísticos): %d - Atributo 2 (Pontos Turísticos): %d \n", pontosturisticos2, pontosturisticos2);
            resultado1 = pontosturisticos + pontosturisticos;
            resultado2 = pontosturisticos2 + pontosturisticos2;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }
    
//soma dos dois atributos selecionados
    printf("\n");
    printf("### Somatória dos atributos das duas Cartas ###\n");
    printf("Carta 1: %.2f - Carta 2: %.2f \n", resultado1, resultado2);

//resultado das comparações
/*
    printf("\n");
    printf("### Resultado ###\n");
    if(resultado1 > resultado2)
    {
        printf("A primeira Carta ganhou!\n");
    } else if(resultado1 < resultado2){
        printf("A segunda Carta ganhou!\n");
    } else {
        printf("Deu empate!\n");
    }*/

    //OU, com operador ternário aninhado
    (resultado1 == resultado2) ? printf("Deu empate!") : 
    ((resultado1 > resultado2) ? printf("A primeira Carta venceu!") : printf("A segunda Carta venceu!"));

    return 0;
}
