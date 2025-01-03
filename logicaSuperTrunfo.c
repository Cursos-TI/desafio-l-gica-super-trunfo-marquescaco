#include <stdio.h>

int main() {
    //primeira carta
    char codigo1[4], nome1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    //segunda carta
    char codigo2[4], nome2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    

    printf("=== Cadastro da primeira carta ===\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf (" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1); //captura nomes com espaço 
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade: ");
    scanf(" %f", &area1);
    printf ("Digite o PIB da cidade : ");
    scanf (" %f", &pib1);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1);

    printf("=== Cadastro da segunda carta ===\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf (" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2); //captura nomes com espaço 
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade: ");
    scanf(" %f", &area2);
    printf ("Digite o PIB da cidade : ");
    scanf (" %f", &pib2);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos2);

    int escolha;
        printf("\nEscolha o atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de pontos turísticos\n");
        scanf("%d", &escolha);

        // Variáveis para armazenar o resultado
        char *vencedora;
            // Comparação com base na escolha do usuário
        switch (escolha) {
            case 1: // Comparação por População
                if (populacao1 > populacao2) {
                    vencedora = nome1;
                    } else if (populacao2 > populacao1) {
            vencedora = nome2;
        } else {
            printf("As duas cidades têm a mesma população.\n");
            return 0;
            }
        printf("Resultado: A cidade com maior população é %s.\n", vencedora);
        break;
            case 2: // Comparação por Área
        if (area1 > area2) {
            vencedora = nome1;
        } else if (area2 > area1) {
            vencedora = nome2;
        } else {
            printf("As duas cidades têm a mesma área.\n");
            return 0;
        }
        printf("Resultado: A cidade com maior área é %s.\n", vencedora);
        break;
            case 3: // Comparação por PIB
        if (pib1 > pib2) {
            vencedora = nome1;
        } else if (pib2 > pib1) {
            vencedora = nome2;
        } else {
            printf("As duas cidades têm o mesmo PIB.\n");
            return 0;
        }
        printf("Resultado: A cidade com maior PIB é %s.\n", vencedora);
        break;
        case 4: // Comparação por Número de Pontos Turísticos
        if (pontos_turisticos1 > pontos_turisticos2) {
            vencedora = nome1;
        } else if (pontos_turisticos2 > pontos_turisticos1) {
            vencedora = nome2;
        } else {
            printf("As duas cidades têm o mesmo número de pontos turísticos.\n");
            return 0;
        }
        printf("Resultado: A cidade com mais pontos turísticos é %s.\n", vencedora);
        break;
        
        default:
        printf("Opção inválida. Tente novamente.\n");
        return 1; // Encerra o programa com erro
        }
    return 0;
}
