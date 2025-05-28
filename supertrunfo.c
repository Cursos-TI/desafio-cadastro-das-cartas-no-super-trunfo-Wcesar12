#include <stdio.h>

// Definindo a estrutura da carta
struct Carta {
    char estado[3];           // Ex: "SP"
    char codigo[10];          // Código da carta, ex: "C001"
    char cidade[50];          // Nome da cidade
    int populacao;            // Número de habitantes
    float area;               // Área em km²
    float pib;                // Produto Interno Bruto
    int pontosTuristicos;     // Quantidade de pontos turísticos
    float densidade;          // Calculado: população / área
    float pibPerCapita;       // Calculado: pib / população
};

int main() {
    // Declarando duas cartas
    struct Carta carta1, carta2;

    // Entrada de dados da Carta 1 
    printf("Digite os dados da Carta 1:\n");

    printf("Estado (ex: SP): ");
    scanf("%s", carta1.estado);

    printf("Código da carta: ");
    scanf("%s", carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.cidade); 

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em milhões): ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    //Entrada de dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado (ex: RJ): ");
    scanf("%s", carta2.estado);

    printf("Código da carta: ");
    scanf("%s", carta2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em milhões): ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;

    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // -------- Comparação de um atributos
    // Altere esta parte para mudar o atributo comparado
    // Atributo escolhido: PIB per capita

    printf("\nComparação de cartas (Atributo: PIB per capita):\n\n");

    printf("Carta 1 - %s (%s): R$ %.2f por habitante\n", carta1.cidade, carta1.estado, carta1.pibPerCapita);
    printf("Carta 2 - %s (%s): R$ %.2f por habitante\n\n", carta2.cidade, carta2.estado, carta2.pibPerCapita);

    if (carta1.pibPerCapita > carta2.pibPerCapita) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.pibPerCapita > carta1.pibPerCapita) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
