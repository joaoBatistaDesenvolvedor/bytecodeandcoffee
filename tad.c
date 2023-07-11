#include "tad.h"
struct pessoa
{ char nome[50];int idade;float altura; };

Pessoa *pessoa_criar(char *nome, int idade, float altura){
    Pessoa *p = (Pessoa *)malloc(sizeof(Pessoa));
    strcpy(p->nome, nome);
    p->idade = idade;
    p->altura = altura;
    return p;
}
void pessoa_imprimir(Pessoa *p){
    printf("Nome: %s\n", p->nome);
    printf("Idade: %d\n", p->idade);
    printf("Altura: %.2f\n", p->altura);
}
void pessoa_apagar(Pessoa *p){
    free(p);
}
