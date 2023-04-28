
#include <stdio.h>
#include <stdlib.h>

/* ALGORITIMO VISUAL
    DECLARE n1,n2,resultado,opcao NUMERICO
    ESCREVA "Digite o primeiro numero: "
    LEIA n1,n2
    ESCREVA "Escolha uma opcao: "
    ESCREVA "1 - MEDIA ENTRE OS NUMEROS DIGITADOS"
    ESCREVA "2 - DIFERENCA DO MAIOR PELO MENOR"
    ESCREVA "3 - PRODUTO ENTRE OS NUMEROS DIGITADOS"
    ESCREVA "4 - DIVISAO DO PRIMEIRO PELO SEGUNDO"
    LEIA opcao
    ESCOLHA opcao
        CASO 1 FACA
            resultado <- (n1 + n2) / 2
            PARE
        CASO 2 FACA
            resultado <- abs(n1 - n2)


*/




int main()
{
    int opcao; // definindo a variável "opcao" como int
    float n1, n2, resultado;
    
    printf("Digite dois valores: ");
    scanf("%f %f", &n1, &n2);

    puts("Escolha uma opcao: ");
    puts("1 - MEDIA ENTRE OS NUMEROS DIGITADOS");
    puts("2 - DIFERENCA DO MAIOR PELO MENOR");
    puts("3 - PRODUTO ENTRE OS NUMEROS DIGITADOS");
    puts("4 - DIVISAO DO PRIMEIRO PELO SEGUNDO");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            resultado = (n1 + n2) / 2.0;
            printf("media: %.2f", resultado);
            break;
        case 2:
            resultado = abs(n1 - n2);
            break;
        case 3:
            resultado = n1 * n2;
    
        case 4:
            if (n2 == 0){
                printf("Indeterminacao");
                exit(1);
            }
            resultado = n1/n2;
            break;
        default: {
            puts("opcao invalida");
            exit(1);
        }
    }
    
    printf("Resultado: %f", resultado);
    return 0;
}
