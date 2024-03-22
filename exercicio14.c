#include <stdio.h>

int main(){

    float valor1, valor2;

    printf("Insira um valor: \n");
    scanf("%f" , &valor1);

    printf("Insira o segundo valor: \n");
    scanf("%f" , &valor2);

    if(valor1>valor2){
        printf("O %.2f e maior que %.2f" , valor1, valor2 );
    }
    else{
        printf("O %.2f e maior que %.2f" , valor2, valor1);
    }

    return 0;
}