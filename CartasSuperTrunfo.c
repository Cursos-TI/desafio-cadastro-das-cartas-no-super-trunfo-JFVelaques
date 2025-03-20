#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste joao felipe

int main() {
    printf("Desafio Super Trunfo Novato!\n");
    char estado1 [50], estado2 [50], codigo1 [50], codigo2 [50], cidade1 [50], cidade2 [50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    printf("Digite seu estado: \n");
    scanf("%s, estado1");

    printf("Digite o código: \n");
    scanf("%s, codigo1");

    printf("Digite a cidade: \n");
    scanf("%s, cidade1");

    printf("Digite a população: \n");
    scanf("%d, &populacao1");

    printf("Digite a área: \n");
    scanf("%f, &area1");

    printf("Digite o PIB: \n");
    scanf("%f, &pib1");

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d, &pontosturisticos1");

    printf("Digite seu estado: \n");
    scanf("%s, estado2");

    printf("Digite o código: \n");
    scanf("%s, codigo2");

    printf("Digite a cidade: \n");
    scanf("%s, cidade2");

    printf("Digite a população: \n");
    scanf("%d, &populacao2");

    printf("Digite a área: \n");
    scanf("%f, &area2");

    printf("Digite o PIB: \n");
    scanf("%f, &pib2");

    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d, &pontosturisticos2");


    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
