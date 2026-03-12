#include <stdio.h>
#include <stdlib.h>

#define ORDEM 4

typedef struct _b_tree{
    int qtd_chaves;
    int chaves[ORDEM - 1];         
    struct _b_tree *filho[ORDEM];
    int posorigem[ORDEM - 1];
} NO_B_TREE;

typedef NO_B_TREE * B_TREE;


int main()
{
    NO_B_TREE * no = (NO_B_TREE*) malloc(sizeof(NO_B_TREE));
    
    no -> chaves[0] = 1;
    
    return 0;
}
