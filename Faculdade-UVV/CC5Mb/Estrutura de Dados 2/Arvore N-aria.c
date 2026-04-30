#include <stdio.h>
#include <stdlib.h>
//Arvore N-aria

typedef struct naria{
    int valor;
    struct naria *prim;
    struct naria *prox;
    
}no_naria;

typedef no_naria * ArvNaria;

ArvNaria inicArvNaria(){
    return NULL;
}

ArvNaria criarArvNaria(no_naria no){
    ArvNaria nova = ArvNaria* malloc(sizeof(no_naria));
    
}



int main()
{
    ArvNaria minhaArvore = inicArvNaria();
    printf("Hello World");

    return 0;
}
