#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, novo_salario;

    printf("informe seu salario: R$ ");
    scanf("%f", &salario);

    novo_salario = salario * 1.3;

    if (salario >= 900)
        printf("salario nao recebe reajuste");

    else 
        printf("salario com reajuste R$ %.2f", novo_salario);
}