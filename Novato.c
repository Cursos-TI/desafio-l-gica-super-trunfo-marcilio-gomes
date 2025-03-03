// Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Biblioteca para o terminal interpretar os caracteres
    setlocale(LC_ALL, "Portuguese_Brazil");

    // variáveis
    char estado[10];
    char codigo[10];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densiPopulacionalCarta1 = 0, densiPopulacionalCarta2 = 0;
    float pibPercapitoCarta1 = 0, pibPercapitoCarta2 = 0;

    // Inicio do Jogo
    printf("### Super Trunfo ###\n");
    printf("### Cadastro de Cartas ###\n\n");

    // Carta 1 informações
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %2s", estado);
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
    printf("Estado: ");
    scanf(" %2s", estado);
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
    printf("*** Comparação das Cartas (Atributo: População) ***\n\n");

    printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado, populacao1);
    printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado, populacao2);

    // Lógica para saber qual maior
    if (populacao1 > populacao2)
    {
        printf("Resultado: Carta 1 %s venceu!", nomeCidade1);
    }
    else if (populacao2 > populacao1)
    {
        printf("Resultado: Carta 2 %s venceu!", nomeCidade2);
    }
    else
    {
        printf("Resultado: Empate!");
    }

    return 0; // Programa execultado corretamente
}