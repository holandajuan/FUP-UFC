#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Dados três valores A, B e C, construa um programa para verificar se estes valores
podem ser valores dos lados de um triângulo, e se for um triângulo retângulo,
determinar (imprimir) os seus ângulos internos
*/

int main()
{

    int a, b, c;
    double angA, angB, angC;
    printf("informe valores para os lados de um triangulo para verificar se ele existe: ");
    scanf("%d %d %d", &a, &b, &c);

    if (abs(b - c) < a && a < b + c)
    {
        printf("Triangulo existe\n");f

        angA = acos((pow(a, 2) - pow(b, 2) - pow(c, 2)) / -(2 * b * c)) * 180 / M_PI;
        angB = acos((pow(b, 2) - pow(a, 2) - pow(c, 2)) / -(2 * a * c)) * 180 / M_PI;
        angC = acos((pow(c, 2) - pow(b, 2) - pow(a, 2)) / -(2 * b * a)) * 180 / M_PI;

        if (angA == 90 || angB == 90 || angC == 90)
        {
            printf("angulo a: %.2lf\n", angA);
            printf("angulo b: %.2lf\n", angB);
            printf("angulo c: %.2lf\n", angC);
        }
        else
            printf("o triangulo existe mas nao é retangulo");
    }
    else
        printf("triangulo nao existe");
    return 0;
}