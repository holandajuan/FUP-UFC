#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saldo_medio, credito;

    printf("informe o saldo medio: R$ ");
    scanf("%f", &saldo_medio);

    if (saldo_medio > 400)
    {
        credito = saldo_medio * 0.3;
        printf("Saldo medio R$ %.2f\ncreditoR$ %.2f", saldo_medio, credito);
    }
    else if (saldo_medio >300 && saldo_medio <= 400)
        {
        credito = saldo_medio * 0.25;
        printf("Saldo medio R$ %.2f\ncredito R$ %.2f", saldo_medio, credito);
    }
    else if (saldo_medio > 200 && saldo_medio <= 300)
    {
        credito = saldo_medio * 0.20;
        printf("Saldo medio R$ %.2f\ncredito R$ %.2f", saldo_medio, credito);
    }
    else if (saldo_medio <= 200)
    {
        credito = saldo_medio * 0.10;
        printf("Saldo medio R$ %.2f\ncredito R$ %.2f", saldo_medio, credito);
    }

    return 0;
}