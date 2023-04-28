#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Dados três valores A, B e C, construa um programa para verificar se estes valores
podem ser valores dos lados de um triângulo, e se for, classificá-los (imprimi-los)
segundo os ângulos. (Triângulo Retângulo = 90º, Triângulo Obtusângulo> 90º ,
Triângulo Acutângulo < 90º)
*/

int main() 
{   
    int a,b,c;
    float cosA,cosB,cosC;
    printf("digite tres valores para os lados de um triangulo e veja se ele existe: ");
    scanf("%d %d %d", &a,&b,&c);

    if (abs(b-c) && a<b+c){
        printf("Existe\n");

        cosA = (pow(a,2) - pow(b,2) - pow(c,2))/-(2*b*c);
        cosB = (pow(b,2) - pow(a,2) - pow(c,2))/-(2*b*c);
        cosC = (pow(c,2) - pow(b,2) - pow(a,2))/-(2*b*c);

        if (!cosA || !cosB || !cosC)
            printf("TRIANGULO RETANGULO");
        else if (cosA < 0 || cosB < 0 || cosC < 0)
            printf("TRIANGULO OBTUSANGULO");
        else 
            printf("TRIANGULO OCUTANGULO");
    }else
        printf("nao existe");
    
    return 0;

}