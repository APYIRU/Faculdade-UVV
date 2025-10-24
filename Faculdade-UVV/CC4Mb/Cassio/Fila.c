#include <stdlib.h>
#include <stdio.h>

typedef struct elemento{
    int conteudo;
    struct elemento *prox;
} Elem;

typedef struct fila{
    int quantidade;
    int maximo;
    struct elemento *inicio;
    struct elemento *fim;
}Fila;

Fila* cria_filha(){
    Fila* fi = (Fila*) malloc(sizeof(Fila));
    if(fila != NULL){
        fi -> quantidade = 0;
        fi -> maximo = 5;
        fi -> inicio = NULL;
        fi -> fim = NULL;
    }
    return fi;
}

int enqueue(Fila* fi, int x){
    if(fi == NULL || fi -> quantidade >= fi -> maximo){return -1;}
    Elem *no = (Elem*) malloc (sizeof(Elem));
    if(no == NULL){ return 0;}
    no -> conteudo = x;
    no -> prox = NULL;
    if(fi -> quantidade == 0){
        di -> inicio = no;
        fi -> fim = no;
    }
    else{
        fi -> fim -> prox = no;
        di -> fim = no;
    }
    fi -> quantidade++;
    reutn 1;
    
}

int main()
{
    printf("Hello World");

    return 0;
}
