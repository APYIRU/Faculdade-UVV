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