// Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Biblioteca para o terminal interpretar os caracteres
    setlocale(LC_ALL, "Portuguese_Brazil");

    // variáveis
    char pais1[50], pais2[50];
    char codigo[10];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densiPopulacionalCarta1 = 0, densiPopulacionalCarta2 = 0;
    float pibPercapitoCarta1 = 0, pibPercapitoCarta2 = 0;
    int atributo1, atributo2;
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2, soma1, soma2;

    // Inicio do Jogo
    printf("### Super Trunfo ###\n");
    printf("### Cadastro de Cartas ###\n\n");

    // Carta 1 informações
    printf("Carta 1:\n");
    printf("País: ");
    scanf("%s", pais1);
    printf("Código: ");
    scanf("%9s", codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (Km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Comparação de duas variáveis para saber se e diferente de 0
    if (area1 != 0)
        densiPopulacionalCarta1 = populacao1 / area1;
    printf("Densidade Populacional: %.2f\n", densiPopulacionalCarta1);

    if (populacao1 != 0)
        pibPercapitoCarta1 = (pib1 * 1000000000) / populacao1;
    printf("PIB per capita: %.2f\n", pibPercapitoCarta1);

    // separação das cartas pulando a linha
    printf("\n");

    // Carta 2 informações
    printf("Carta 2:\n");
    printf("País: ");
    scanf("%s", pais2);
    printf("Código: ");
    scanf("%9s", codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (Km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Comparação de duas variáveis para saber se e diferente de 0
    if (area2 != 0)
        densiPopulacionalCarta2 = populacao2 / area2;
    printf("Densidade Populacional: %.2f\n", densiPopulacionalCarta2);

    if (populacao2 != 0)
        pibPercapitoCarta2 = (pib2 * 1000000000) / populacao2;
    printf("PIB per capita: %.2f\n\n", pibPercapitoCarta2);

    // Comparação das cartas
    printf("*** Comparação das Cartas***\n\n");

    // Menu interativo
    printf("Menu \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Sair\n");

    // Escolha do primeiro atributo
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &atributo1);

    // Escolha do segundo atributo, garantindo que não seja igual ao primeiro
    printf("Escolha o segundo atributo (diferente do primeiro): ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2)
    {
        printf("O segundo atributo não pode ser igual ao primeiro! Escolha outro: ");
        scanf("%d", &atributo2);
    }

    // Definição dos valores dos atributos escolhidos

    switch (atributo1)
    {
    case 1:
        valor1_carta1 = populacao1;
        valor1_carta2 = populacao2;
        break;

    case 2:
        valor1_carta1 = area1;
        valor1_carta2 = area2;
        break;

    case 3:
        valor1_carta1 = pib1;
        valor1_carta2 = pib2;
        break;

    case 4:
        valor1_carta1 = pontosTuristicos1;
        valor1_carta2 = pontosTuristicos2;
        break;

    case 5:
        valor1_carta1 = densiPopulacionalCarta1;
        valor1_carta2 = densiPopulacionalCarta2;
        break;

    case 6:
        printf("Saindo...");
        break;

    default:
        printf("Opção Inválida!\n");
        break;
    }

    switch (atributo2)
    {
    case 1:
        valor2_carta1 = populacao1;
        valor2_carta2 = populacao2;
        break;

    case 2:
        valor2_carta1 = area1;
        valor2_carta2 = area2;
        break;

    case 3:
        valor2_carta1 = pib1;
        valor2_carta2 = pib2;
        break;

    case 4:
        valor2_carta1 = pontosTuristicos1;
        valor2_carta2 = pontosTuristicos2;
        break;

    case 5:
        valor2_carta1 = densiPopulacionalCarta1;
        valor2_carta2 = densiPopulacionalCarta2;
        break;

    case 6:
        printf("Saindo...");
        break;

    default:
        printf("Opção Inválida!\n");
        break;
    }

    // Soma dos atributos escolhidos para definir o vencedor
    soma1 = valor1_carta1 + valor1_carta2;
    soma2 = valor1_carta2 + valor2_carta2;

    // Imprimir os resultados
    printf("\n*** Resultado das comparações ***\n\n");
    printf("1º País: %s\n", pais1);
    printf("1º Atributo: %d\n", atributo1);
    printf("Valor: %.2f + %.2f\n", valor1_carta1, valor1_carta2);
    printf("Soma dos atributos da Carta 1: %.2f\n\n", soma1);

    printf("2º País: %s\n", pais2);
    printf("2º Atributo: %d\n", atributo2);
    printf("Valor: %.2f + %.2f\n", valor1_carta2, valor2_carta2);
    printf("Soma dos atributos da Carta 2: %.2f\n", soma2);

    if (soma1 > soma2)
    {
        printf("Resultado: Carta 1 venceu!\n");
    }
    else if (soma2 > soma1)
    {
        printf("Resultado: Carta 2 venceu!\n");
    }
    else
    {
        printf("Resultado: Empate!\n");
    }

    return 0; // Programa execultado corretamente
}