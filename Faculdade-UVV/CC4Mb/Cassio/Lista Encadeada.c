
#include <stdio.h>
#include <stdlib.h>

typedef struct cel{
    int conteudo;
    struct cel *seg;
    
} cel;
typedef struct cel* Lista;

Lista* cria_lista(){
    Lista *li = (Lista*) malloc (sizeof(Lista));
    if(li != NULL){
        *li = NULL;
    }
    return li;
}

int insere_lista_fim(Lista *lista, int x){
    if(lista == NULL){ return 0; }
    cel* aux = (cel*) malloc(sizeof(cel));
    if(aux == NULL){ return 0; }
    aux -> conteudo = x;
    aux -> seg = NULL;
    if((*lista) == NULL) { //estou inserindo o primeiro elemento
    *lista = aux;
    } else {
        cel *temp;
        temp = *lista;
        while(temp->seg != NULL){
            temp = temp->seg;
        }
        temp->seg = aux;
    }
    return 1;
}

int main()
{
    Lista *lst;
    lst = cria_lista();
    
    cel c1, c2, c3;
    c1.conteudo = 1;
    c2.conteudo = 2;
    c3.conteudo = 3;
    c1.seg = &c2;
    c2.seg = &c3;
    c3.seg = NULL;
    
    *lst = &c1;
    
    cel* temp = *lst;
    
    while(temp != NULL){
        printf("\t%d", temp->conteudo);
        temp = temp->seg;
    }
    
    
}


Buscar + Imprimir:
#include <stdio.h>
#include <stdlib.h>

typedef struct cel{
    int conteudo;
    struct cel *seg;
    
} cel;
typedef struct cel* Lista;

Lista* cria_lista(){
    Lista *li = (Lista*) malloc (sizeof(Lista));
    if(li != NULL){
        *li = NULL;
    }
    return li;
}

int Buscar(Lista *lista, int x){
    if(lista == NULL){ return 0; }
    cel *temp;
    temp = *lista;
    while(temp != NULL){
        if(temp->conteudo == x){
            printf("%d", x);
            return x;
        }
        temp = temp->seg;
    }
    printf("não ta na lista");
}

int imprimir(Lista* lista){
    if (lista==NULL){
        printf("Lista não exite");
    }
    cel *temp;
    temp = *lista;
    
    while(temp != NULL){
        printf("\t%d", temp->conteudo);
        temp = temp->seg;
    }
}



int insere_lista_fim(Lista *lista, int x){
    if(lista == NULL){ return 0; }
    cel* aux = (cel*) malloc(sizeof(cel));
    if(aux == NULL){ return 0; }
    aux -> conteudo = x;
    aux -> seg = NULL;
    if((*lista) == NULL) { //estou inserindo o primeiro elemento
    *lista = aux;
    } else {
        cel *temp;
        temp = *lista;
        while(temp->seg != NULL){
            temp = temp->seg;
        }
        temp->seg = aux;
    }
    return 1;
}

int main()
{
    Lista *lst;
    lst = cria_lista();
    
    cel c1, c2, c3;
    c1.conteudo = 1;
    c2.conteudo = 2;
    c3.conteudo = 3;
    c1.seg = &c2;
    c2.seg = &c3;
    c3.seg = NULL;
    
    *lst = &c1;
    
    cel* temp = *lst;
    
    insere_lista_fim(lst, 10);
    Buscar(lst, 0);
    
    while(temp != NULL){
        printf("\t%d", temp->conteudo);
        temp = temp->seg;
    }
    
    imprimir(lst);

    //Lista encadeada com remover e deletar
    #include <stdio.h>
#include <stdlib.h>

typedef struct cel{
    int conteudo;
    struct cel *seg;
    
} cel;
typedef struct cel* Lista;

Lista* cria_lista(){
    Lista *li = (Lista*) malloc (sizeof(Lista));
    if(li != NULL){
        *li = NULL;
    }
    return li;
}

int Buscar(Lista *lista, int x){
    if(lista == NULL){ return 0; }
    cel *temp;
    temp = *lista;
    while(temp != NULL){
        if(temp->conteudo == x){
            printf("%d", x);
            return x;
        }
        temp = temp->seg;
    }
    printf("não ta na lista\n");
}

int imprimir(Lista* lista){
    if (lista==NULL){
        printf("Lista não exite\n");
    }
    cel *temp;
    temp = *lista;
    printf("Minha lista: ");
    while(temp != NULL){
        printf("\t%d", temp->conteudo);
        temp = temp->seg;
    }
}



int insere_lista_fim(Lista *lista, int x){
    if(lista == NULL){ return 0; }
    cel* aux = (cel*) malloc(sizeof(cel));
    if(aux == NULL){ return 0; }
    aux -> conteudo = x;
    aux -> seg = NULL;
    if((*lista) == NULL) { //estou inserindo o primeiro elemento
    *lista = aux;
    } else {
        cel *temp;
        temp = *lista;
        while(temp->seg != NULL){
            temp = temp->seg;
        }
        temp->seg = aux;
    }
    return 1;
}

void libera_lista(Lista* lista){
    if(lista != NULL){
        cel* aux;
        while(*lista != NULL){//apagando todos os nós um a um
            aux = *lista;
            *lista = (*lista)->seg; //*lista = aux->seg;
            free(aux);
        }
        free(lista);//apaga a lista
    }
}

int remove_lista(Lista* lista, int x){
    if (lista == NULL){return 0;}
    if (*lista == NULL){return 0;}
    cel *ant, *aux = *lista;
    while(aux != NULL && aux -> conteudo != x){
        ant = aux;
        aux = aux -> seg;
    }
    if (aux == NULL){return 0;}//se não tem o elemento na lista
    if (aux == *lista){//se for o primeiro
        *lista = aux->seg;
    } else{
        ant->seg = aux->seg;
    }
    free(aux);
    return 1;
}

int main()
{
    Lista *lst;
    lst = cria_lista();
    
    cel c1, c2, c3;
    c1.conteudo = 1;
    c2.conteudo = 2;
    c3.conteudo = 3;
    c1.seg = &c2;
    c2.seg = &c3;
    c3.seg = NULL;
    
    *lst = &c1;
    
    cel* temp = *lst;
    
    insere_lista_fim(lst, 10);
    Buscar(lst, 1);
    
    remove_lista(lst, 3);

    
    imprimir(lst);
       
}
    
    
}
