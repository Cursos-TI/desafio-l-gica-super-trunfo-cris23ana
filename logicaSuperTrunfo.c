#include <stdio.h>

/*
DESAFIO INICIANTE: Continuar a criação de um jogo de Super Trunfo com o tema Países, onde o sistema permitirá ao usuário cadastrar cartas de cidades,
fornecendo informações detalhadas como estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos.
Com base nesses dados, o sistema deverá calcular automaticamente a densidade populacional e o PIB per capita.
As entradas serão feitas via terminal de comando e, após o cadastro, os dados serão exibidos de forma clara e organizada.
Neste nível, você implementará a lógica de comparação entre as cartas utilizando estruturas de decisão if e if-else para o desenvolvimento
do sistema, onde você deverá escolher uma das propriedades numéricas (int ou float) para realizar a comparação entre as cartas.
A comparação das cartas será feita diretamente no código.
*/

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
    int escolha;

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
    Você deverá escolher uma das propriedades numéricas (int ou float) para realizar a comparação entre as cartas.
    As propriedades disponíveis para comparação são:
    População, Área, PIB, Densidade populacional (calculada), PIB per capita (calculado)
    A comparação será feita com base em uma propriedade específica, definida no código. */

    printf("######### COMPARAÇÃO DAS DUAS CARTAS #########\n");
    printf("\n");
    printf("Escolha um dos atributos a seguir para comparar entre duas cartas e decidir quem é o vencedor.\n");
    printf("OBSERVAÇÕES:\n");
    printf("A propriedade de densidade populacional será considerada vencedora quando tiver o menor valor.\n");
    printf("As outras propriedades vencerão quando tiverem o maior valor.\n");
    printf("\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Número de Pontos Turísticos.\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha);

    //comparação usando o switch
    switch(escolha)
    {
        case 1:
        printf("Tipo de comparação: População.\n");
        printf("Primeira Cidade: %s - Estado: %c, Código: %s, População: %d \n", cidade, estado, codigocarta, populacao);
        printf("Segunda Cidade: %s - Estado: %c, Código: %s, População: %d \n ", cidade2, estado2, codigocarta2, populacao2);
        if(populacao > populacao2)
        {
        printf("A População da primeira Cidade é maior do que a da segunda Cidade. A primeira Carta venceu!\n");
        } else {
        printf("A População da segunda Cidade é maior do que a da primeira Cidade. A segunda Carta venceu!\n");
        }
        break;

        case 2:
        printf("Tipo de comparação: Área.\n");
        printf("Primeira Cidade: %s - Estado: %c, Código: %s, Área: %.2f \n", cidade, estado, codigocarta, area);
        printf("Segunda Cidade: %s - Estado: %c, Código: %s, Área: %.2f \n ", cidade2, estado2, codigocarta2, area2);
        if(area > area2)
        {
        printf("A Área da primeira Cidade é maior do que a da segunda Cidade. A primeira Carta venceu!\n");
        } else {
        printf("A Área da segunda Cidade é maior do que a da primeira Cidade. A segunda Carta venceu!\n");
        }
        break;

        case 3:
        printf("Tipo de comparação: PIB.\n");
        printf("Primeira Cidade: %s - Estado: %c, Código: %s, PIB: %.2f \n", cidade, estado, codigocarta, pib);
        printf("Segunda Cidade: %s - Estado: %c, Código: %s, PIB: %.2f \n ", cidade2, estado2, codigocarta2, pib2);
        if(pib > pib2)
        {
        printf("O PIB da primeira Cidade é maior do que o da segunda Cidade. A primeira Carta venceu!\n");
        } else {
        printf("O PIB da segunda Cidade é maior do que o da primeira Cidade. A segunda Carta venceu!\n");
        }
        break;

        case 4:
        printf("Tipo de comparação: Pontos Turísticos..\n");
        printf("Primeira Cidade: %s - Estado: %c, Código: %s, Pontos Turísticos.: %d \n", cidade, estado, codigocarta, pontosturisticos);
        printf("Segunda Cidade: %s - Estado: %c, Código: %s, Pontos Turísticos.: %d \n ", cidade2, estado2, codigocarta2, pontosturisticos2);
        if(pib > pib2)
        {
        printf("O número de Pontos Turísticos da primeira Cidade é maior do que o da segunda Cidade. A primeira Carta venceu!\n");
        } else {
        printf("O número de Pontos Turísticos da segunda Cidade é maior do que a da primeira Cidade. A segunda Carta venceu!\n");
        }
        break;

        default:
        printf("Opção Inválida. Tente novamente.\n");
    }

    return 0;
}
