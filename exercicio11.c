#include <stdio.h>

int main(){

    float preco_custo, acrescimo, valor_venda;

    printf("Insira o preço de custo do produto: \n");
    scanf("%f" , &preco_custo);

    printf("Insira o acrescimo: \n");
    scanf("%f" , &acrescimo);

    valor_venda = preco_custo+acrescimo;

    printf("O produto sera vendido pelo preço de: \n %f " , valor_venda);

    return 0;


}