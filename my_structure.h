#include <stdio.h>
#include <stdlib.h>



typedef struct dados{
  int num;
  struct dados *prox;
}dados;

typedef struct dadosREP{
    int repetidos;
    struct dadosREP *prox2;
}dadosREP;


typedef struct {
  dados *inicio;
}estrutura;

typedef struct {
 dadosREP *inicio2;
}estrutura2;


/*
void empty_list(estrutura *list);

void listaVazia(estrutura2 *lista);

int checkList(estrutura *list,int x);

void insert(estrutura *list,int x);

void insertRep(estrutura2 *lista, int x);

void imprime(estrutura **list);

void imprime2(estrutura2 *lista);

*/
//void empty_list(estrutura *);

//void listaVazia(estrutura2 *);

int checkList(estrutura*,int);

void insere(estrutura*,int);

void insertRep(estrutura2*, int);

void imprime(estrutura**);

void imprime2(estrutura2*);

