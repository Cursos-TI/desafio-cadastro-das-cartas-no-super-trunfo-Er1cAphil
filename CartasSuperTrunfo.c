#include <stdio.h>

int main() {
    
    printf("Super Trunfo - Paises\n");
    printf("Cadastro das Cartas\n");

    //Dados para variaveis

    int codigo;
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;    
    
    //informações 4 cidades

  for (int i = 1; i <= 4; i++) {
    printf("\nCadastro da Cidade %d:\n", i); //i é a cidade cadastrada
        

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

    printf("-----------------------------------------------\n"); //espaçamento divisório

    printf("Informações Cidade %d:\n", i);

    printf("Código: %d\n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("Pib: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontosturisticos);

   printf("-----------------------------------------------\n"); //espaçamento divisório

    }

 return 0;

}
