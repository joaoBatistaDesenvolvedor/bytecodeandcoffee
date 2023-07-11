
typedef struct pessoa Pessoa;

Pessoa *pessoa_criar(char *nome, int idade, float altura);
void pessoa_apagar(Pessoa *p);
void pessoa_imprimir(Pessoa *p);
