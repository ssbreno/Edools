#include <stdlib.h>
#include <stdio.h>

struct pilha{
	int cod;
	struct pilha *prox;	
	
};
typedef struct pilha Pilha;

int tamanho = 0;	
struct pilha *Topo;
struct pilha *Fundo;

void PVazia(){
	Pilha *aux = (Pilha *)malloc(sizeof(Pilha));
	Topo = aux;
	Fundo = Topo;
	Fundo->prox = NULL;	
	printf("Pilha criada vazia.\n");	
}

void insereP(int x){
	Pilha *aux = (Pilha *)malloc(sizeof(Pilha));
	aux->prox = Topo;
	aux->cod = x;
	Topo = aux;
	tamanho++;
}

void ImprimeP(){
	int z=0;
	Pilha *aux;
	aux = Topo;
	while(aux->prox != NULL){
		printf("Item %d = %d\n",z, aux->cod);
		aux = aux->prox;
		z++;
	}
}

void RemoverP(){
	Topo = Topo->prox;
}


void BuscarP(int x, int tam){
	int flag = 0;
	Pilha *aux;
	aux = Topo;
	while(aux->prox != NULL){
		if(aux->cod == x){
			printf("Achou Item %d na posicao da pilha %d.\n",x,tam);
			flag = 1;
			aux->prox = NULL;
		}else{
			tam--;
			aux = aux->prox;
		}
	}
	if(flag == 0)
	  printf("Item %d nao foi encontrado.\n",x);
}



