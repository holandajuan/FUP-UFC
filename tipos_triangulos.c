#include <stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c;
    printf("digite possiveis valores para os lados de um triangulo: ");
    scanf("%d %d %d", &a,&b,&c);

    if (a+b<c || a+c<b || b+c<a)
        printf("valores nao formam um triangulo");
    else if(a==b || a==c || b==c)
        printf("TRIANGULO ISOSCELES");
    else if (a!=b && a!=c && b!=c)
        printf("TRIANGULO ESCALENO");
    else if (a==b && b==c && a==c)
        printf("TRIANGULO EQUILATERO");
}