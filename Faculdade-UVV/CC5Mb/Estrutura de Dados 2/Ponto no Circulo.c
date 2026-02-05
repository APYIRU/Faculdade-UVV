#include <stdio.h>
#include <math.h>

typedef struct Circ{
    float raio, a, b;
}Circ;

void Circulo(Circ c){
    int x = 4, y = 4;
    double d = sqrt(pow((x - c.a), 2) + pow((y - c.b), 2));
    if(d > c.raio)
    {
        printf("Ta fora do circulo");
    } else if (d < c.raio)
    {
        printf("Ta dentro do circulo");
    } else
    {
        printf("Ta igual amigão");
    }
}

int main()
{ 
    Circ c;
    c.a = 2;
    c.b = 2;
    c.raio = 5;
    Circulo(c);


    return 0;
}


EVOLUÇÃO

#include <stdio.h>
#include <math.h>

typedef struct Circ{
    float raio, a, b;
}Circ;

void Circulo(Circ c){
    int x = 5, y = 6;
    double d = sqrt(pow((x - c.a), 2) + pow((y - c.b), 2));
    if(d > c.raio)
    {
        printf("Ta fora do circulo");
    } else if (d < c.raio)
    {
        printf("Ta dentro do circulo");
    } else
    {
        printf("Ta igual amigão");
    }
}

int main()
{ 
    Circ c;
    c.a = 2;
    c.b = 2;
    c.raio = 5;
    Circulo(c);


    return 0;
}

