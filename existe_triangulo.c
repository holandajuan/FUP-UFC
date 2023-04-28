#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
ALGORITMO
    DECLARE a,b,c REAIS
    ESCREVA "informe os tres lados de um triangulo"
    LEIA a b c
    SE a + b < c OU a + c < b OU b + c < a ENTAO
        ESCREVA "valores digitados nao podem formar um triangulo" 
    SENAO 
        ESCREVA "valores digitados podem formar um triangulo"
FIMDOLGORITMO        
*/

int main()
{   
    int a,b,c;
    printf("informe tres valores inteiro e veja se eles podem formar um triangulo: ");
    scanf("%d %d %d", &a,&b,&c);

    if (a+b<c || a+c<b || b+c<a)
        printf("nao podem formar um triangulo");
    else
        printf("podem formar um triangulo");

    return 0;
}