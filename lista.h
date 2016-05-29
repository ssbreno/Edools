#include <stdio.h>
#include <stdlib.h>

struct Lista{
	int cod;
	struct Lista *prox;
};
typedef struct Lista lista;

struct Lista *Primeiro1;
struct Lista *Ultimo1;

void LVazia(){
	lista *aux = ( lista *)malloc(sizeof(lista));
	Primeiro1 = aux;
	Ultimo1 = Primeiro1;
	printf("Lista criada vazia.\n");
}

void InsereLista(int x){
	lista *aux = ( lista *)malloc(sizeof(lista));
    aux->cod = x;
    Ultimo1->prox = aux;
    Ultimo1 = Ultimo1->prox;
    aux->prox = NULL;
}


void ImprimeLista(){
	int z = 0;
	lista *aux = Primeiro1->prox;
	while(aux != NULL){
		printf("Item %d = %d \n",z,aux->cod);
		aux = aux->prox;
		z++;
	}
}

void PesquisaLista(int x){
	int flag = 0;
	lista *aux = Primeiro1->prox;
    while(aux != NULL){
    	if(aux->cod == x){
    	printf("Achou Item %d - Item : %d \n",x,aux->cod);
    	flag = 1;
    	aux = NULL;
	}else
	aux = aux->prox;
	}
	if(flag == 0)
	printf("Item %d nao se encontra nesta lista.\n",x);
}

void RemoveLista(int x){
	int flag = 0;
	lista *aux;
	lista *sentinela;	
	aux = Primeiro1->prox;
	sentinela = Primeiro1;
    while(aux != NULL){
    	if(aux->cod == x){
    	printf("Removeu Item %d \n",x);
    	sentinela->prox = aux->prox;
    	flag = 1;
    	aux = NULL;
	}else
	aux = aux->prox;
	sentinela = sentinela->prox;
	}
	if(flag == 0)
	printf("Item %d nao se encontra nesta lista.\n",x);
}

