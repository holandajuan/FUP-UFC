#include <stdio.h>
#include <stdlib.h>

/*
ALGORITMO VISUAL
    DECLARE preco,novo_preco NUMERICO
    DECLARE classificacao CHAR
    ESCREVA "informe o preco"
    LEIA preco
    SE preco <= 50 ENTAO
        novo_preco <- preco * 1.05
    SENAO SE 50 < preco <= 100 ENTAO
        novo_preco <- preco * 1.10
    SENAO SE preco > 100 ENTAO
        novo_preco <- preco * 1.15

    SE novo_preco <= 80 ENTAO
        classificao <- "D"
    SENAO SE 80 < novo_preco <= 120 ENTAO
        classificacao <- "C"
    SENAO SE 120 < novo_preco <=200 ENTAO
        classificacao <- "B"
    SENAO SE novo_preco > 200 ENTAO
        classificacao <- "A"

    ESCREVA "Novo preco R$ ", novo_preco
    ESCREVA "Classificacao ", classificacao

*/

int main()
{
    float preco;
    char classificacao;
    printf("informe o preco: R$ ");
    scanf("%f", &preco);

    if(preco > 100){
        preco *= 1.15;
    }else if(preco > 50){
        preco *= 1.10;
    }else{
        preco *= 1.05;
    }

    if(preco > 200){
        classificacao = 'A';
    }else if(preco > 120){
        classificacao = 'B';
    }else if(preco > 80){
        classificacao = 'C';
    }else{
        classificacao = 'D'; 
    }

    printf("Novo preco R$ %f\nClassificacao %c", preco, classificacao);

    return 0;
}