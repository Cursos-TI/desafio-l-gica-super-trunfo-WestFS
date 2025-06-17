#include <stdio.h>

int main() {        
    // <!--- VARIAVEIS DA CARTA 1 --->
    char estado_1;
    char codigo_carta_1[5];
    char nome_cidade_1[50];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontos_turisticos_1;
    float densidade_populacional_1;

    // <!--- VARIAVEIS DA CARTA 2 --->
    char estado_2;
    char codigo_carta_2[5];
    char nome_cidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turisticos_2;
    float densidade_populacional_2;

    
    printf("Vamos cadastrar duas cartas para compará-las!\n\n");

    // <!--- CADASTRO DA CARTA 1 --->
    printf("<!--- CADASTRO DA CARTA 1 --->\n\n");
    printf("CARTA 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado_1);

    printf("Código da Carta (Ex: A01): ");
    scanf("%s", codigo_carta_1);

    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade_1);

    printf("População: ");
    scanf("%lu", &populacao_1);

    printf("Área (em km²): ");
    scanf("%f", &area_1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib_1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos_1);

    // Calcular a Densidade Populacional (CARTA 1)
    densidade_populacional_1 = (float) populacao_1 / area_1;

    printf("\n\n");

    // <!--- CADASTRO DA CARTA 2 --->
    printf("<!--- CADASTRO DA CARTA 2 --->\n\n");
    printf("CARTA 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado_2);

    printf("Código da Carta (Ex: A01): ");
    scanf("%s", codigo_carta_2);

    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade_2);

    printf("População: ");
    scanf("%lu", &populacao_2);

    printf("Área (em km²): ");
    scanf("%f", &area_2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib_2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos_2);

    // Calcular a Densidade Populacional (CARTA 2)
    densidade_populacional_2 = (float) populacao_2 / area_2;

    // --- EXIBIÇÃO DAS CARTAS CADASTRADAS ---
    printf("\n--- Cartas Cadastradas ---\n\n");

    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_carta_1);
    printf("Nome da Cidade: %s\n", nome_cidade_1);
    printf("População: %lu habitantes\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_1);
    printf("\n");

    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_carta_2);
    printf("Nome da Cidade: %s\n", nome_cidade_2);
    printf("População: %lu habitantes\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_2);
    printf("\n");

    // --- COMPARAÇÃO DAS CARTAS ---
    printf("--- Comparação de Cartas ---\n");
    printf("---------------------------------\n\n");

    // Comparação Population
    printf("1. POPULAÇÃO:\n");
    printf("   %s: %lu habitantes\n", nome_cidade_1, populacao_1);
    printf("   %s: %lu habitantes\n", nome_cidade_2, populacao_2);
    if (populacao_1 > populacao_2) {
        printf("Vencedor: %s (maior população)\n", nome_cidade_1);
    } else if (populacao_2 > populacao_1) {
        printf("Vencedor: %s (maior população)\n", nome_cidade_2);
    } else {
        printf("Empate na população!\n");
    }
    printf("\n");

    // Comparação Área
    printf("2. ÁREA:\n");
    printf("   %s: %.2f km²\n", nome_cidade_1, area_1);
    printf("   %s: %.2f km²\n", nome_cidade_2, area_2);
    if (area_1 > area_2) {
        printf("Vencedor: %s (maior área)\n", nome_cidade_1);
    } else if (area_2 > area_1) {
        printf("Vencedor: %s (maior área)\n", nome_cidade_2);
    } else {
        printf("Empate na área!\n");
    }
    printf("\n");

    // Comparação PIB
    printf("3. PIB:\n");
    printf("   %s: %.2f bilhões\n", nome_cidade_1, pib_1);
    printf("   %s: %.2f bilhões\n", nome_cidade_2, pib_2);
    if (pib_1 > pib_2) {
        printf("Vencedor: %s (maior PIB)\n", nome_cidade_1);
    } else if (pib_2 > pib_1) {
        printf("Vencedor: %s (maior PIB)\n", nome_cidade_2);
    } else {
        printf("Empate no PIB!\n");
    }
    printf("\n");

    // Comparação Pontos Turísticos
    printf("4. PONTOS TURÍSTICOS:\n");
    printf("   %s: %d pontos\n", nome_cidade_1, pontos_turisticos_1);
    printf("   %s: %d pontos\n", nome_cidade_2, pontos_turisticos_2);
    if (pontos_turisticos_1 > pontos_turisticos_2) {
        printf("Vencedor: %s (mais pontos turísticos)\n", nome_cidade_1);
    } else if (pontos_turisticos_2 > pontos_turisticos_1) {
        printf("Vencedor: %s (mais pontos turísticos)\n", nome_cidade_2);
    } else {
        printf("Empate nos pontos turísticos!\n");
    }
    printf("\n");

    // Comparação Densidade Populacional (menor vence)
    printf("5. DENSIDADE POPULACIONAL:\n");
    printf("   %s: %.2f hab/km²\n", nome_cidade_1, densidade_populacional_1);
    printf("   %s: %.2f hab/km²\n", nome_cidade_2, densidade_populacional_2);
    if (densidade_populacional_1 < densidade_populacional_2) {
        printf("Vencedor: %s (menor densidade populacional)\n", nome_cidade_1);
    } else if (densidade_populacional_2 < densidade_populacional_1) {
        printf("Vencedor: %s (menor densidade populacional)\n", nome_cidade_2);
    } else {
        printf("Empate na densidade populacional!\n");
    }
    printf("\n");

    // Contagem de vitórias usando comparações simples
    int vitorias_carta_1 = 0;
    int vitorias_carta_2 = 0;

    // Conta vitórias da carta 1
    if (populacao_1 > populacao_2) vitorias_carta_1++;
    if (area_1 > area_2) vitorias_carta_1++;
    if (pib_1 > pib_2) vitorias_carta_1++;
    if (pontos_turisticos_1 > pontos_turisticos_2) vitorias_carta_1++;
    if (densidade_populacional_1 < densidade_populacional_2) vitorias_carta_1++;

    // Conta vitórias da carta 2
    if (populacao_2 > populacao_1) vitorias_carta_2++;
    if (area_2 > area_1) vitorias_carta_2++;
    if (pib_2 > pib_1) vitorias_carta_2++;
    if (pontos_turisticos_2 > pontos_turisticos_1) vitorias_carta_2++;
    if (densidade_populacional_2 < densidade_populacional_1) vitorias_carta_2++;

    // --- RESULTADO FINAL ---
    printf("=== RESULTADO FINAL ===\n");
    printf("Vitórias de %s: %d\n", nome_cidade_1, vitorias_carta_1);
    printf("Vitórias de %s: %d\n", nome_cidade_2, vitorias_carta_2);

    if (vitorias_carta_1 > vitorias_carta_2) {
        printf("CARTA VENCEDORA: %s (%s)!\n", nome_cidade_1, codigo_carta_1);
    } else if (vitorias_carta_2 > vitorias_carta_1) {
        printf("CARTA VENCEDORA: %s (%s)!\n", nome_cidade_2, codigo_carta_2);
    } else {
        printf("EMPATE GERAL!\n");
    }

    return 0;
}