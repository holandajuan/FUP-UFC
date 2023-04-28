#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    int a,b,c;
    float delta,x1,x2;

    printf("\ninforme os coeficientes a b c, nessa ordem, separados por espaco: ");
    scanf("%d %d %d", &a, &b, &c);

    delta = pow(b,2) - 4*a*c;
    if (delta>=0){
        x1 = (-b + sqrt(delta))/ (2*a);
        x2 = (-b - sqrt(delta))/ (2*a);
    }
    if (delta>0)
        printf("x1 = %.2f\nx2 = %.2f", x1, x2);
    else if (delta==0)
        printf("x1 = x2 = %.2f", x1);
    else if (delta<0)
        printf("Nao existe raizes reais para esta equacao");

    return 0;
}