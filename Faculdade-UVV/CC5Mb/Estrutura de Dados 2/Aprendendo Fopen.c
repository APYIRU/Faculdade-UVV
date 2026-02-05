#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno
{
    char nome[10];
    float nota;
}aluno;

    FILE *p;
    arquivo = fopen("Testando fopen.txt", "r+");
    if(arquivo == NULL){
        printf("Erro");
    } else {
        printf("Aberto");
    }

int main()
{
    Aluno a1;
    a1 = {"Demolay", 7}
    
    fputs(a1, "Testando fopen.txt");


    return 0;
}
