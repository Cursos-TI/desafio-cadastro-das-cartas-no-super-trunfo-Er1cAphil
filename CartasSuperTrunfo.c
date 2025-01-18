#include <stdio.h>

int main() {
    
    printf("Super Trunfo - Paises\n");
    printf("Cadastro das Cartas\n");

    int codigo;
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;    
    
    printf("Qual Código da Cidade?\n");
    scanf("%d", &codigo);
    
    printf("Qual Nome da Cidade?\n");
    scanf(" %[^\n]", nome);
 
    printf("Qual a População?\n");
    scanf("%d", &populacao);

    printf("Qual Área da Cidade (Em km) ?\n");
    scanf("%f", &area);

    printf("Pib da Cidade?\n");
    scanf("%f", &pib);

    printf("Quantidade de Pontos Turísticos?\n");
    scanf("%d", &pontosturisticos);

    printf("Informações Cidade \n");

    printf("Código: %d\n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("Pib: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontosturisticos);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
