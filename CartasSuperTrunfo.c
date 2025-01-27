#include <stdio.h>

    int main() {
        printf("Desafio do Xadrez! \n");
        int populacao;
        int pontos;
        float area, pib;
        char estado;
        char cidade; 
        char carta [10];
        
        printf("Digite a população do estado: \n");
        scanf("%d", &populacao);

        printf("Digite os pontos Turísticos: \n");
        scanf("%d", &pontos);

        printf("Quantos metros quadrados por área o estado tem: \n");
        scanf("%f", &area);

        printf("Qual PIB do estado: \n");
        scanf("%f", &pib);
        
        printf("Escolha um estado: \n");
        scanf("%s", &estado);

        printf("Qual a cidade do estado: \n");
        scanf("%s", &cidade);
        
        printf("Código da carta: \n");
        scanf("%s", &carta);

        printf("Carta: %s, Estado: %s, Cidade: %s, - População: %d\n, Pontos Turísticos: %d\n", populacao, pontos);
        printf("Metros: %d, - PIB %f", area, pib);

        return 0;
        
}
        
      
