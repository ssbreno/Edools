/* #####

Breno Sobral 

Representacao de Conceitos em C

*/

#include <stdlib.h>
#include <stdio.h>
#include "lista.h"
#include "listaord.h"
#include "pilha.h"
#include "filaenc.h"


/*
- Fila Encadeada - OK
- Pilha Encadeada - OK
- Lista Encadeada - OK
- Lista Ord Encadeada - ?

*/

	
/*
ENCADEADA
*/  

void filaencadeada(int op)
{
	int ele;
	
	switch(op){
		case 0:
			exit(1);
			break;
		case 1:
		    Fvazia();
			break;
		case 2:
	 	    Imprime();
			break;

		case 3:
			printf("Novo Elemento:\n");
		    scanf("%d",&ele);	
			Insere(ele);	
			break;
		case 4:
			printf("Buscar Elemento:\n");
		    scanf("%d",&ele);	
			Pesquisa(ele);			
			break;
		case 5:
		 	Remove();
		 	Imprime();	
			break;

		default:
			printf("Comando invalido\n\n");
	}
	
}

void listaenc(int op){	

	switch(op){
		case 0:
        exit(1);
		break;	
		case 1:
		LVazia();		
		break;
		case 2:
		ImprimeLista();		
		break;
		case 3:
		  int d;
		  printf("Novo Elemento:\n");
		  scanf("%d",&d);   
		  InsereLista(d); 
			break;
		case 4:
			int x;
		  printf("Buscar Elemento:\n");
		  scanf("%d",&x);
		 PesquisaLista(x); 
			break;
	   	case 5:
		   int b;
		  printf("Remover Elemento:\n");
		  scanf("%d",&b);
	 	  RemoveLista(b); 
		  break;

		default:
			printf("Comando invalido\n\n");
	}
	
}

void listagemord(int op){	

	switch(op){
		case 0:
        exit(1);
		break;
		case 1:
		LVaziaOrd();	
		break;
		case 2:
		ImprimeListaORD();
		break;
		case 3:
		int d;
		  printf("Novo Elemento:\n");
		  scanf("%d",&d);
		  InsertOrdenado(d); 
			break;
		case 4:
		  int x;
		  printf("Buscar Elemento:\n");
		  scanf("%d",&x);
			break;
		case 5:

		  break;

		default:
			printf("Comando invalido\n\n");
	}
	
}


void pilhaenca(int op){	
    int tamanho = 0;
	switch(op){
		case 0:
        exit(1);
		break;
		case 1:
 	   PVazia();
		break;
		case 2:
      ImprimeP();
		break;
		case 3:
			int ele;
			printf("Novo Elemento:\n");
		    scanf("%d",&ele);	
			insereP(ele);
		break;
		case 4:
			int num;
			printf("Buscar Elemento:\n");
		    scanf("%d",&num);	
			BuscarP(num,tamanho);	
		break;
		case 5:
		RemoverP();
		  break;

		default:
			printf("Comando invalido\n\n");
	}
	
}

int menu(void)
{
	int opt;
	printf("Escolha a opcao\n");
	printf("0. Sair\n");
	printf("1. Criar Elementos\n");
	printf("2. Exibir Elementos\n");
	printf("3. Adicionar Elemento\n");
	printf("4. Buscar Elemento\n");	
	printf("5. Retirar Elemento\n");
	printf("Opcao: "); 
	scanf("%d", &opt);
	return opt;
}


int main(void)
{
	int op1,op;
	int choose,choose2;
	int opt;	
 	int x;
 			
	  printf("Escolha uma das duas opcoes: \n");             
	  printf("---- 1 - Lista Encadeada ---- \n");
	  scanf("%d", &op1); 
	  switch(op1){
	  case 1:
	  printf("---- 1 - Lista Encadeada ----");  
	  choose = 1;
	  break;
	   default:
		printf("Comando invalido\n\n");  
	  }  
	  system ("cls");	
	  
	  printf("---- 1 - Pilha ----\n");
	  printf("---- 2 - Fila ----\n");
	  printf("---- 3 - Lista Ordenada ----\n");
	  printf("---- 4 - Lista ----\n");

  scanf("%d", &op);        
  switch(op){
  case 1:
  printf("---- 1 - Pilha ----");  
  choose2 = 1;
  break;
  case 2:
  printf("---- 2 - Fila ----"); 
  choose2 = 2;     
  break;     
  case 3:
  printf("---- 3 - Lista Ordenada ----");   
  choose2 = 3;  
  break;      
  case 4:
  printf("---- 4 - Lista ----");    
  choose2 = 4; 
  break;     
   default:
	printf("Comando invalido\n\n");   
  }  
  system ("cls");
  

/*
ENCADEADAS
*/  
	
if(choose == 1 && choose2 == 2 ){	//Fila Encadeada
	do{
		opt=menu();
		filaencadeada(opt);
    	}while(opt);
	return 0;
	}
	
if(choose == 1 && choose2 == 4){ // lista Encadeada	
	do{
		opt=menu();
		listaenc(opt);
	}while(opt);
	return 0;
		}

if(choose == 1 && choose2 == 3){	// Lista Encadeada Ordenada	
	do{
		opt=menu();
		listagemord(opt);
	}while(opt);
	return 0;
		}

if(choose == 1 && choose2 == 1){	// Pilha Encadeada 	
	do{
		opt=menu();
		pilhaenca(opt);
	}while(opt);
	return 0;
		}
	
	
}	


