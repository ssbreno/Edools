#include <stdio.h>
#include <stdlib.h>

struct Listaord{
	int cod;
	struct Listaord *prox;
};
typedef struct Listaord listaord;

struct Listaord *Prim;
struct Listaord *Ulti;

void LVaziaOrd(){
	listaord *aux = ( listaord *)malloc(sizeof(listaord));
	aux == NULL;
	printf("Lista criada vazia.\n");
}

void InsertOrdenado(int x){
	listaord *novo;
	listaord *ant=NULL;
	listaord *p;
	while(p != NULL && p->cod < x){
		ant = p;
		p = p->prox;
	novo = (listaord *)malloc(sizeof(listaord));
	novo->cod = x;
	}
	if(ant == NULL){
		novo->prox = p;
		p = novo;
	}else{
		novo->prox = ant->prox;
		ant->prox = novo;
	}
	
}

void ImprimeListaORD(){
	int z = 0;
	listaord *aux = Prim->prox;
	while(aux != NULL){
		printf("Item %d = %d \n",z,aux->cod);
		aux = aux->prox;
		z++;
	}
}


