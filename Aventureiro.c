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
    int atributo;

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
    printf("Opção Para Comparação\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha: ");
    scanf("%d", &atributo);
    printf("\n");

    // Colocando a condição por cada atributo que o usuário escolher
    switch (atributo)
    {
        case 1:

        printf("Atributo: População\n");
        if (populacao1 > populacao2)
        {
            printf("País: %s\n", pais1);
            printf("População: %d\n", populacao1);
            printf("País: %s\n", pais2);
            printf("População: %d\n", populacao2);
            printf("Resultado: Carta 1 Venceu\n");
        }
        else if (populacao2 > populacao1)
        {
            printf("País: %s\n", pais1);
            printf("População: %d\n", populacao1);
            printf("País: %s\n", pais2);
            printf("População: %d\n", populacao2);
            printf("Resultado: Carta 2 Venceu\n");
        }
        else
        {
            printf("País: %s\n", pais1);
            printf("População: %d\n", populacao1);
            printf("País: %s\n", pais2);
            printf("População: %d\n", populacao2);
            printf("Resultado: Empate\n");
        }
        break;

    case 2:
        printf("Atributo: Área\n");
        if (area1 > area2)
        {
            printf("País: %s\n", pais1);
            printf("População: %.2f\n", area1);
            printf("País: %s\n", pais2);
            printf("População: %.2f\n", area2);
            printf("Resultado: Carta 1 Venceu\n");
        }
        else if (area2 > area1)
        {
            printf("País: %s\n", pais1);
            printf("Área: %.2f\n", area1);
            printf("País: %s\n", pais2);
            printf("Área: %.2f\n", area2);
            printf("Resultado: Carta 2 Venceu\n");
        }
        else
        {
            printf("País: %s\n", pais1);
            printf("Área: %.2f\n", area1);
            printf("País: %s\n", pais2);
            printf("Área: %.2f\n", area2);
            printf("Resultado: Empate\n");
        }
        break;

    case 3:
        printf("Atributo: PIB\n");
        if (pib1 > pib2)
        {
            printf("País: %s\n", pais1);
            printf("PIB: %.2f\n", pib1);
            printf("País: %s\n", pais2);
            printf("PIB: %.2f\n", pib2);
            printf("Resultado: Carta 1 Venceu\n");
        }
        else if (pib2 > pib1)
        {
            printf("País: %s\n", pais1);
            printf("PIB: %.2f\n", pib1);
            printf("País: %s\n", pais2);
            printf("PIB: %.2f\n", pib2);
            printf("Resultado: Carta 2 Venceu\n");
        }
        else
        {
            printf("País: %s\n", pais1);
            printf("PIB: %.2f\n", pib1);
            printf("País: %s\n", pais2);
            printf("PIB: %.2f\n", pib2);
            printf("Resultado: Empate\n");
        }
        break;

    case 4:
        printf("Atributo: Pontos Turísticos\n");
        if (pontosTuristicos1 > pontosTuristicos2)
        {
            printf("País: %s\n", pais1);
            printf("Pontos Turísticos: %d\n", pontosTuristicos1);
            printf("País: %s\n", pais2);
            printf("Pontos Turísticos: %d\n", pontosTuristicos2);
            printf("Resultado: Carta 1 Venceu\n");
        }
        else if (pontosTuristicos2 > pontosTuristicos1)
        {
            printf("País: %s\n", pais1);
            printf("Pontos Turísticos: %d\n", pontosTuristicos1);
            printf("País: %s\n", pais2);
            printf("Pontos Turísticos: %d\n", pontosTuristicos2);
            printf("Resultado: Carta 2 Venceu\n");
        }
        else
        {
            printf("País: %s\n", pais1);
            printf("Pontos Turísticos: %d\n", pontosTuristicos1);
            printf("País: %s\n", pais2);
            printf("Pontos Turísticos: %d\n", pontosTuristicos2);
            printf("Resultado: Empate\n");
        }
        break;

    case 5:
        printf("Atributo: Densidade Demográfica\n");
        if (densiPopulacionalCarta1 < densiPopulacionalCarta2)
        {
            printf("País: %s\n", pais1);
            printf("Densidade Demográfica: %.2f\n", densiPopulacionalCarta1);
            printf("País: %s\n", pais2);
            printf("Densidade Demográfica: %.2f\n", densiPopulacionalCarta2);
            printf("Resultado: Carta 1 Venceu\n");
        }
        else if (densiPopulacionalCarta2 < densiPopulacionalCarta1)
        {
            printf("País: %s\n", pais1);
            printf("Densidade Demográfica: %.2f\n", densiPopulacionalCarta1);
            printf("País: %s\n", pais2);
            printf("Densidade Demográfica: %.2f\n", densiPopulacionalCarta2);
            printf("Resultado: Carta 2 Venceu\n");
        }
        else
        {
            printf("País: %s\n", pais1);
            printf("Densidade Demográfica: %.2f\n", pontosTuristicos1);
            printf("País: %s\n", pais2);
            printf("Densidade Demográfica: %.2f\n", pontosTuristicos2);
            printf("Resultado: Empate\n");
        }
        break;
    // Essa opção e caso o usuário digite alguma opção indiferente do que foi sugerido
    default:
        printf("Opção Inválida!");
        break;
    }

    return 0; // Programa execultado corretamente
}