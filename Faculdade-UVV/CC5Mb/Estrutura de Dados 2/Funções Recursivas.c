#include <stdio.h>

int multi_aux(int a, int b, int valor)
{
    if(a == 0 || b == 0){ return valor; }
    valor += a;
    
    return multi_aux(a, b - 1, valor);
}

int multi(int a, int b){
    return multi_aux(a,b,0);
}

int main()
{
    printf("%d", multi(4,3));
    return 0;
}