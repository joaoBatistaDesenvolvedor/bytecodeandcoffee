#include "tad.h"
#include <stdio.h>
#include <stdlib.h>
int main(){
    Pessoa *p1 = pessoa_criar("Joao", 20, 1.80);
    Pessoa *p2 = pessoa_criar("Maria", 18, 1.60);
    Pessoa *p3 = pessoa_criar("Jose", 25, 1.70);
    pessoa_imprimir(p1);
    pessoa_imprimir(p2);
    pessoa_imprimir(p3);

    return 0;
}
