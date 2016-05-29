#include <stdlib.h>
#include <stdio.h>
// Fila com Lista Encadeada

struct Noxe{
	int cod;
	struct Noxe *prox;
};
typedef struct Noxe noxe;


struct Noxe *Primeiro;
struct Noxe *Ultimo;

void Fvazia(){
	noxe *Enc = ( noxe *)malloc(sizeof(noxe));
	Primeiro = Enc;
	Ultimo = Primeiro;
	Ultimo->prox = NULL;	
	printf("Lista criada vazia.\n");
}

void Insere(int x){
    noxe *Enc = (noxe *)malloc(sizeof(noxe));
    Enc->cod = x;
    Ultimo->prox = Enc;
    Ultimo = Ultimo->prox;
    Enc->prox = Primeiro;
}

void Imprime(){
	int z = 0;
	noxe *Enc = Primeiro->prox;
	while(Enc != Primeiro){
		printf("Item %d = %d \n",z,Enc->cod);
		Enc = Enc->prox;
		z++;
	}
}

void Pesquisa( int x){
	int flag = 0;
	noxe *Enc = Primeiro->prox;
    while(Enc != Primeiro){
    	if(Enc->cod == x){
    	printf("Achou Item %d \n",x);
    	flag = 1;
    	Enc = Primeiro;
	}else
	Enc = Enc->prox;
	}
	if(flag == 0)
	printf("Item %d nao se encontra nesta lista.\n",x);
}

void Remove(){
	if(Primeiro->prox == NULL){	
	  printf("Lista vazia.");
}
	Primeiro->prox = Primeiro->prox->prox;
}




