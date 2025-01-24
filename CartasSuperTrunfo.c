#include <stdio.h>
#include <string.h>

#define MAX_CIDADES 4 // Número máximo de cidades a serem cadastradas

// Estrutura para representar uma cidade
typedef struct {
    int codigo;            // Código da cidade
    char nome[30];         // Nome da cidade
    int populacao;         // População
    float area;            // Área da cidade em km²
    float pib;             // PIB da cidade
    int pontosTuristicos;  // Número de pontos turísticos
} Cidade;

// Função para cadastrar as cidades
void cadastrarCidades(Cidade cidades[], int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("\nCadastro da Cidade %d:\n", i + 1);

        printf("Qual Código da Cidade?\n");
        scanf("%d", &cidades[i].codigo);

        printf("Qual Nome da Cidade?\n");
        scanf(" %[^\n]", cidades[i].nome);

        printf("Qual a População?\n");
        scanf("%d", &cidades[i].populacao);

        printf("Qual Área da Cidade (Em km²)?\n");
        scanf("%f", &cidades[i].area);

        printf("PIB da Cidade (em milhões)?\n");
        scanf("%f", &cidades[i].pib);

        printf("Quantidade de Pontos Turísticos?\n");
        scanf("%d", &cidades[i].pontosTuristicos);
    }
}

// Função para exibir as cidades cadastradas
void exibirCidades(Cidade cidades[], int qtd) {
    printf("\n------------------- CARTAS CADASTRADAS -------------------\n");
    for (int i = 0; i < qtd; i++) {
        printf("\nInformações da Cidade %d:\n", i + 1);
        printf("Código: %d\n", cidades[i].codigo);
        printf("Nome da Cidade: %s\n", cidades[i].nome);
        printf("População: %d\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: %.2f milhões\n", cidades[i].pib);
        printf("Pontos Turísticos: %d\n", cidades[i].pontosTuristicos);
        printf("----------------------------------------------------------\n");
    }
}

int main() {
    Cidade cidades[MAX_CIDADES]; // Array para armazenar as cidades

    printf("Super Trunfo - Países\n");
    printf("Cadastro das Cartas\n");

    // Cadastro das cidades
    cadastrarCidades(cidades, MAX_CIDADES);

    // Exibição das cidades cadastradas
    exibirCidades(cidades, MAX_CIDADES);

    return 0;
}
