#ifndef VETOR_H
#define VETOR_H

struct piloto {
    float *pontuacao;
    float *mediaPontuacao;
};

typedef struct piloto Piloto;

void pontuacoes(Piloto *p, int quantidadePontuacoes);
void media(Piloto *p, int quantidadePontuacoes);
void maiorMedia(Piloto *p1, Piloto *p2);
void mostrarPontuacoes(Piloto *p1, Piloto *p2, int quantidadePontuacoes);
void mostrarMedia(Piloto *p1, Piloto *p2);

#endif

