#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Estrutura para representar um país
typedef struct {
    char nome[20];
    int populacao;
    int area;
    int pib;
} Carta;

// Função para obter uma carta aleatória
Carta obterCartaAleatoria() {
    Carta cartas[4] = {
        {"Brasil", 214000000, 8516000, 1444735},
        {"EUA", 331000000, 9834000, 21427700},
        {"China", 1441000000, 9597000, 14342903},
        {"Índia", 1393000000, 3287000, 2875142}
    };
    
    int indice = rand() % 4;
    return cartas[indice];
}

int main() {
    srand(time(NULL));
    
    printf("Bem-vindo ao jogo Super Trunfo dos países!\n");
    
    // O jogador recebe uma carta aleatória
    Carta jogador = obterCartaAleatoria();
    printf("Sua carta: %s\nPopulação: %d\nÁrea: %d km²\nPIB: %d\n", jogador.nome, jogador.populacao, jogador.area, jogador.pib);
    
    // Oponente recebe uma carta aleatória
    Carta oponente = obterCartaAleatoria();
    printf("Carta do oponente: %s\nPopulação: %d\nÁrea: %d km²\nPIB: %d\n", oponente.nome, oponente.populacao, oponente.area, oponente.pib);
    
    // Escolha do atributo
    int escolha;
    printf("Escolha o atributo para comparação:\n1 - População\n2 - Área\n3 - PIB\n");
    scanf("%d", &escolha);
    
    int resultado;
    switch (escolha) {
        case 1:
            resultado = (jogador.populacao > oponente.populacao) ? 1 : (jogador.populacao < oponente.populacao) ? -1 : 0;
            break;
        case 2:
            resultado = (jogador.area > oponente.area) ? 1 : (jogador.area < oponente.area) ? -1 : 0;
            break;
        case 3:
            resultado = (jogador.pib > oponente.pib) ? 1 : (jogador.pib < oponente.pib) ? -1 : 0;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }
    
    // Determinar o vencedor
    if (resultado == 1) {
        printf("Parabéns! Você venceu!\n");
    } else if (resultado == -1) {
        printf("Você perdeu! O oponente venceu!\n");
    } else {
        printf("Empate!\n");
    }
    
    return 0;
}
