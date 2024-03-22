#include <stdio.h>

int main(){
    float dolar, cotacao, valor_convertido;

    printf("Insira o valor em dolares: \n");
    scanf("%f" , &dolar);

    printf("Insira a cotacao atual do dolar: \n");
    scanf("%f" , &cotacao );

    valor_convertido = dolar*cotacao;

    printf("O valor convertido em reais e: %f", valor_convertido);

    return 0;
    




}