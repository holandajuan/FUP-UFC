#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, fx;
    printf("digite um x para calcular sua imagem: ");
    scanf("%f", &x);

    if (x <= 1)
        fx = 1;
    else if (x > 1 && x <= 2)
        fx = 2;
    else if (x > 2 && x <= 3)
        fx = pow(x,2);
    else if (x > 3)
        fx = pow(x,3);
    
    printf("f(x) = %.1f", fx);
}