#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

int main() {
    Piloto piloto1;
    Piloto piloto2;
    int quantidadePontuacoes;
    
    printf("Digite a quantidade de pontuacoes: ");
    scanf("%d", &quantidadePontuacoes);
    
    pontuacoes(&piloto1, quantidadePontuacoes);
    pontuacoes(&piloto2, quantidadePontuacoes);
    
    
    media(&piloto1, quantidadePontuacoes);
    media(&piloto2, quantidadePontuacoes);
    
    mostrarPontuacoes(&piloto1, &piloto2, quantidadePontuacoes);
    mostrarMedia(&piloto1, &piloto2);
    maiorMedia(&piloto1, &piloto2);
    
    
    return 0;
}

