#include <stdio.h>

int main(){

    float valor_produto, parcelas;

    printf("Insira o valor do produto: \n ");
    scanf("%f" , &valor_produto);

    parcelas = valor_produto/5;

    printf("O valor das parcelas sera de: \n %f ", parcelas);

    return 0;
}