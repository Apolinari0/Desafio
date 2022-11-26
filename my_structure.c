#include <stdio.h>
#include <stdlib.h>
#include "my_structure.h"


void empty_list(estrutura *list){
    list->inicio=NULL;
}

void lista_vazia(estrutura2 *lista){
    lista->inicio2=NULL;
}


int checkList(estrutura *list,int x){
    dados *aux=malloc(sizeof(dados));
    aux=list->inicio;
    if(list->inicio ==  NULL)
        return 0;
    else{
        aux=list->inicio;
        while(aux){
            if(aux->num == x)
                return 1;
            else
                return 0;
            aux=aux->prox;
        }
    }
}

void insere(estrutura *list,int x){
    dados *novo=malloc(sizeof(dados));
    dados *aux;
    int cont=x;
    if(novo){
     novo->num=x;
     novo->prox=list->inicio;
     list->inicio=novo;
    }
}

void insertRep(estrutura2 *lista, int x){
    dadosREP *novo=malloc(sizeof(dadosREP));
    dadosREP *aux;
    if(novo){
        novo->repetidos=x;
        novo->prox2=lista->inicio2;
        lista->inicio2=novo;
    }
}

void imprime(estrutura **list){
    dados *aux;
    aux=*list;
    printf("numeros\n");
    FILE *arq=fopen("NewArq.txt","w+");
    fprintf(arq,"\nNúmeros\n");
    while(aux){
        fprintf(arq,"%i ",aux->num);
        printf("%d ",aux->num);
        aux=aux->prox;
    }
    fclose(arq);
}
void imprime2(estrutura2 *lista){
    dadosREP *aux=malloc(sizeof(dadosREP));
    aux=lista->inicio2;
    FILE *arq=fopen("NewArq.txt","a+");
    fprintf(arq,"Numeros repetidos:\n");
    printf("\n numeros repetidos:\n");
    while(aux){
        fprintf(arq,"%i ",aux->repetidos);
        printf("%d ",aux->repetidos);
        aux=aux->prox2;
    }
    fclose(arq);
}
