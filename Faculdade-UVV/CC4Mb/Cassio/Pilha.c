#include <stdio.h>
#include <stdlib.h>

typedef struct cel{
    int conteudo;
    struct cel *seg;
} cel;

typedef struct cel* Pilha;

Pilha* cria_pilha(){
    Pilha *pi = (Pilha*) malloc (sizeof(Pilha));
    if(pi != NULL){
        *pi = NULL;
    }
    return pi;
}

int empilhar(Pilha* pilha, int x){//adiciona o valor no cemoço da pilha
    if (pilha == NULL){return 0;}
    cel* aux = (cel*) malloc(sizeof(cel));
    if(aux == NULL){ return 0;}
    aux -> conteudo = x;
    aux -> seg = *pilha;
    *pilha = aux;
    return 1;
}

void imprimir_pilha(Pilha* pilha){
    if (pilha == NULL) return;
    cel* temp = *pilha;
    printf("Pilha: ");
    while(temp != NULL){
        printf("%d ", temp->conteudo);
        temp = temp->seg;
    }
    printf("\n");
}


int main()
{

    Pilha *pil;
    pil = cria_pilha();
    
    empilhar(pil, 1);
    empilhar(pil, 2);
    empilhar(pil, 3);
    
    
    cel* temp = *pil;
    
    empilhar(pil, 5);
    imprimir_pilha(pil);
    empilhar(pil, 12);
    imprimir_pilha(pil);
}


Versão Cassio:



#include <stdio.h>
#include <stdlib.h>

typedef struct elemento{
    int conteudo;
    struct elemento *prox;
} Elem;

typedef struct elemento* Pilha;

Pilha* cria_pilha(){
    Pilha* pi = (Pilha*) malloc (sizeof(Pilha));
    if( pi != NULL){
        *pi = NULL;
    }
    return pi;
}

int push(Pilha* pi, int x){
    if(pi == NULL) {return 0;}
    Elem *no = (Elem*) malloc (sizeof(Elem));
    if(no == NULL){ return 0;}
    no -> conteudo = x;
    no -> prox = (*pi);
    *pi = no;
    return 1;
}

int topo(Pilha* pi){
    if(pi == NULL || *pi == NULL){printf("Ta vazio");}
    else {printf("\nTopo: %d", (*pi) -> conteudo);}
}

int consulta_topo(Pilha *pi){
    if(pi == NULL || (*pi) == NULL){
        return -1;
    }
    return (*pi) -> conteudo;
}

int pop(Pilha *pi){
    if(pi == NULL || (*pi) == NULL){return -1;}
    Elem *no = *pi;
    *pi = no -> prox;
    int valor_retorno = no -> conteudo;
    free(no);
    return valor_retorno;
}

void libera_pilha(Pilha* pi){
    if(pi != NULL){
        Elem *no;
        while((*pi) == NULL){
            no = *pi;
            *pi = (*pi) -> prox;
            free(no);
        }
        free(pi);
    }
}

void imprimir(Pilha* pi){
    if(pi != NULL){
        Elem* no = *pi;
        printf("\nTOPOPILHA");
        while(no != NULL){
            printf("\nConteudo: %d", no -> conteudo);
            no = no -> prox;
        }
        printf("\nBASEPILHA");
    }
}



int main()
{
    Pilha *pil;
    pil = cria_pilha();
    push(pil, 1);
    push(pil, 2);
    push(pil, 3);
    push(pil, 4);
    push(pil, 5);
    push(pil, 6);
    
    printf("Topo: %d",consulta_topo(pil));
    
    pop(pil);
    
    printf("\nTopo: %d",consulta_topo(pil));
    
    imprimir(pil);
    
    topo(pil);

    return 0;
}
