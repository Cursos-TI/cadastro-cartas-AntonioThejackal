#include <stdio.h>
#include <string.h> // Necessário para manipular strings

int main() {
    // Variáveis da carta 1
    char estado1;
    char codigo1[10];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontoturisticos1;

    // Variáveis da carta 2
    char estado2;
    char codigo2[10];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontoturisticos2;

    // --- CADASTRO DA CARTA 1 ---
    printf("Cadastro da carta 1\n");

    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1); // Espaço antes de %c limpa o buffer

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    getchar(); // Limpa o buffer do Enter anterior antes do fgets
    printf("Digite o nome da cidade: ");
    fgets(cidade1, 30, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0; // Remove a quebra de linha do fgets

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontoturisticos1);

    // --- CADASTRO DA CARTA 2 ---
    printf("\nCadastro da carta 2\n");

    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    getchar(); 
    printf("Digite o nome da cidade: ");
    fgets(cidade2, 30, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontoturisticos2);

    // --- EXIBIÇÃO DOS DADOS ---
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontoturisticos1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontoturisticos2);

    return 0;
}