#include <stdio.h>

int main(){

    float custo_fabrica, custo_consumidor, porcentagem_dist, porcentagem_imp;

    printf("Insira o custo de fabrica: \n");
    scanf("%f" , &custo_fabrica);

    porcentagem_dist = (custo_fabrica*0.28);

    porcentagem_imp = (custo_fabrica*0.45);

    custo_consumidor = porcentagem_dist+porcentagem_imp+custo_fabrica;

    printf("O valor final do carro vai ser de: %f \n " ,  custo_consumidor);
    


}