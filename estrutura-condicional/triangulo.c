#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("Digite tres lados de um suposto triangulo para verificar se ele existe: ");
    scanf("%d %d %d", &a, &b, &c);
    if(abs(b - c) < a && a < b + c){
        printf("EXISTE!\n");
        //CALCULO O COS DOS ANGULOS POR MEIO DA LEI DOS COSSENOS
        float cosA = (pow(a,2) - pow(b,2) - pow(c,2))/-(2*b*c);
        float cosB = (pow(b,2) - pow(c,2) - pow(a,2))/-(2*c*a);
        float cosC = (pow(c,2) - pow(a,2) - pow(b,2))/-(2*a*b);
        //Quando cos(lado) for 0, significa que eh FALSEY e que é retângulo, ou seja, 
        //quando for !FALSE, ele deve entrar na condição
        if(!cosA || !cosB || !cosC){
            printf("TRIANGULO RETANGULO!\n");
        }else if(cosA < 0 || cosB < 0 || cosC < 0){
            printf("TRIANGULO OBTUSANGULO\n");
        }else{
            printf("TRIANGULO ACUTANGULO\n");
        }
    }else{
        printf("NAO EXISTE!\n");
    }
    return 0;
}