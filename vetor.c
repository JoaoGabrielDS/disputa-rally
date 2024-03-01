#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

void pontuacoes(Piloto *p, int quantidadePontuacoes) {
    p->pontuacao = malloc(quantidadePontuacoes * sizeof(float)); 
    if (p->pontuacao == NULL) {
        printf("Erro ao alocar memoria!\n");
        exit(EXIT_FAILURE);
    }
    
    int i;
    for (i = 0; i < quantidadePontuacoes; i++) {
        printf("Digite a %d pontuacao: ", i + 1);
        scanf("%f", &p->pontuacao[i]);
    }
}

void media(Piloto *p, int quantidadePontuacoes) {
    p->mediaPontuacao = malloc(sizeof(float)); 
    if (p->mediaPontuacao == NULL) {
        printf("Erro ao alocar memoria!\n");
        exit(EXIT_FAILURE);
    }
    
    int i;
    float soma = 0;
    for (i = 0; i < quantidadePontuacoes; i++) {
        soma += p->pontuacao[i];
    }
    
    *p->mediaPontuacao = soma / quantidadePontuacoes;
}

void mostrarPontuacoes(Piloto *p1, Piloto *p2, int quantidadePontuacoes){
	int i;
	for (i=0;i<quantidadePontuacoes;i++){
		printf("\n%d Rodada\n", i+1);
		printf("Primeiro Piloto: %0.1f\n",p1->pontuacao[i]);
		printf("Segundo Piloto: %0.1f\n",p2->pontuacao[i]);
	}
}

void mostrarMedia(Piloto *p1, Piloto *p2){
	printf("\nMedia Piloto 1: %0.1f\n", *p1->mediaPontuacao);
	printf("Media Piloto 2: %0.1f\n", *p2->mediaPontuacao);
}

void maiorMedia(Piloto *p1, Piloto *p2) {
    if (p1->mediaPontuacao == NULL || p2->mediaPontuacao == NULL) {
        printf("Erro: Uma ou ambas as médias sao NULAS.\n");
        return;
    }

    if (*(p1->mediaPontuacao) > *(p2->mediaPontuacao)) {
        printf("Piloto 1 tem media maior que o Piloto 2.\n");
    } else if (*(p1->mediaPontuacao) < *(p2->mediaPontuacao)) {
        printf("Piloto 2 tem media maior que o Piloto 1.\n");
    } else {
        printf("Os dois pilotos tem medias iguais.\n");
    }
}

