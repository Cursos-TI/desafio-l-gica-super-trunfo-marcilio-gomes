#include <stdio.h>
#include <string.h>
#include <locale.h>

// Definição da estrutura para armazenar os dados das cidades
typedef struct
{
    char estado[50];
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

// Função para cadastrar uma carta
void cadastrarCarta(Carta *carta)
{
    printf("\nCadastro de Carta:\n");

    printf("Estado: ");
    scanf("%49s", carta->estado); // %49s evita buffer overflow

    printf("Código: ");
    scanf("%d", &carta->codigo);

    printf("Nome da cidade: ");
    fgets(carta->nome, 50, stdin); // ✅ Agora fgets funciona corretamente

    getchar(); // ✅ Limpa o ENTER deixado pelo scanf("%d")

    printf("População: ");
    scanf("%d", &carta->populacao);

    printf("Área (km²): ");
    scanf("%f", &carta->area);

    printf("PIB (bilhões): ");
    scanf("%f", &carta->pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
}

// Função para comparar duas cartas com base em um atributo
void compararCartas(Carta c1, Carta c2, int atributo)
{
    printf("\nComparação entre %s e %s:\n", c1.nome, c2.nome);
    switch (atributo)
    {
    case 1:
        printf("Atributo: População\n");
        if (c1.populacao > c2.populacao)
            printf("%s vence!\n", c1.nome);
        else if (c1.populacao < c2.populacao)
            printf("%s vence!\n", c2.nome);
        else
            printf("Empate!\n");
        break;
    case 2:
        printf("Atributo: Área\n");
        if (c1.area > c2.area)
            printf("%s vence!\n", c1.nome);
        else if (c1.area < c2.area)
            printf("%s vence!\n", c2.nome);
        else
            printf("Empate!\n");
        break;
    case 3:
        printf("Atributo: PIB\n");
        if (c1.pib > c2.pib)
            printf("%s vence!\n", c1.nome);
        else if (c1.pib < c2.pib)
            printf("%s vence!\n", c2.nome);
        else
            printf("Empate!\n");
        break;
    case 4:
        printf("Atributo: Pontos Turísticos\n");
        if (c1.pontos_turisticos > c2.pontos_turisticos)
            printf("%s vence!\n", c1.nome);
        else if (c1.pontos_turisticos < c2.pontos_turisticos)
            printf("%s vence!\n", c2.nome);
        else
            printf("Empate!\n");
        break;
    default:
        printf("Atributo inválido!\n");
        break;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    Carta carta1, carta2;
    int atributo;

    printf("Bem-vindo ao Super Trunfo - Países!\n");

    // Cadastro das cartas
    cadastrarCarta(&carta1);
    cadastrarCarta(&carta2);

    // Escolha do atributo
    printf("\nEscolha um atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &atributo);

    // Comparação das cartas
    compararCartas(carta1, carta2, atributo);

    return 0;
}
