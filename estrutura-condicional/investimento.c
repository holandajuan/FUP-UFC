#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tipo_investimento;
    float valor;

    puts("TIPO    DESCRICAO             RENDIMENTO MENSAL");
    puts("1       Poupanca              10%%");
    puts("2       Fundo de renda fixa   15%%");

    puts("informe o valor e o tipo de investimento, nessa ordem, separados por espaco: ");
    scanf("%f %d", &valor, &tipo_investimento);

    switch (tipo_investimento)
    {
        case 1:
            valor *= 1.10;
            break;
        case 2:
            valor *= 1.15;
            break;
        default:
            printf("valor invalido");
    }
    printf("Rendimento Mensal R$ %.2f", valor);
    return 0;

}