#include <stdio.h>
#include <stdlib.h>
typedef struct NO {
	int info;
	struct NO *esq;
	struct NO *dir;
} NO;

typedef struct NO *ArvBin;

ArvBin* cria_ArvBin() {
	ArvBin *raiz = (ArvBin*)malloc(sizeof(ArvBin));
	if(raiz!=NULL) {
		*raiz = NULL;
	}
	return raiz;
}

void preOrdem_ArvBin(ArvBin *raiz) {
	if(raiz == NULL ) {
		return;
	}
	if(*raiz!=NULL) {
		printf("%d ", (*raiz)->info);
		preOrdem_ArvBin(&((*raiz)->esq));
		preOrdem_ArvBin(&((*raiz)->dir));
	}
}

void emOrdem_ArvBin(ArvBin *raiz) {
	if(raiz == NULL ) {
		return;
	}
	if(*raiz!=NULL) {
		emOrdem_ArvBin(&((*raiz)->esq));
		printf("%d ", (*raiz)->info);
		emOrdem_ArvBin(&((*raiz)->dir));
	}
}

void posOrdem_ArvBin(ArvBin *raiz) {
	if(raiz == NULL ) {
		return;
	}
	if(*raiz!=NULL) {
		posOrdem_ArvBin(&((*raiz)->esq));
		posOrdem_ArvBin(&((*raiz)->dir));
		printf("%d ", (*raiz)->info);
	}
}


int totalNosArvBin(ArvBin *raiz){
    if(raiz == NULL){return 0;}
    if(*raiz == NULL){return 0;}
    
    int total_esq = totalNosArvBin(&((*raiz) -> esq));
    int total_dir = totalNosArvBin(&((*raiz) -> dir));
    
    return total_esq + total_dir + 1;
}

int alturaNosArvBin(ArvBin *raiz){
    if(raiz == NULL){return -1;}
    if(*raiz == NULL){return -1;}
    
    int alt_esq = alturaNosArvBin(&((*raiz) -> esq));
    int alt_dir = alturaNosArvBin(&((*raiz) -> dir));
    
    if(alt_esq > alt_dir){
        return alt_esq + 1;
    } else {
        return alt_dir + 1;
    }
}


int main()
{
	printf("Inicio\n");
	ArvBin *raiz = cria_ArvBin();


	NO a,b, c, d, e, f, g, h, i;
	NO *converte = &a;

	a.info = 80;
	a.esq = &b;
	a.dir = &c;
	b.info = 60;
	b.esq = &d;
	b.dir = &e;
	c.info = 90;
	c.esq = &f;
	c.dir = &g;
	d.info = 50;
	d.esq = NULL;
	d.dir = NULL;
	e.info = 70;
	e.esq = &h;
	e.dir = NULL;
	h.info = 65;
	h.esq = NULL;
	h.dir = NULL;
	f.info = 85;
	f.esq = NULL;
	f.dir = NULL;
	g.info = 110;
	g.esq = &i;
	g.dir = NULL;
	i.info = 100;
	i.esq = NULL;
	i.dir = NULL;

	raiz = &converte;

	printf("Pre-Ordem:\n");
	preOrdem_ArvBin(raiz);

	printf("\nEm-Ordem:\n");
	emOrdem_ArvBin(raiz);

	printf("\nPos-Ordem:\n");
	posOrdem_ArvBin(raiz);

    printf("\nTOTAL DE NOS:\n");
	printf("%d", totalNosArvBin(raiz));
	printf("\nALTURA:\n");
	printf("%d", alturaNosArvBin(raiz));

	return 0;
}
