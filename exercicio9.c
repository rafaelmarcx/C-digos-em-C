#include <stdio.h>

int main (){
    float valor_dep, valor_rend;

    printf("Insira o valor depositado: \n ");
    scanf("%f", &valor_dep);

    valor_rend = valor_dep+(valor_dep*0.007);

    printf("O valor depositado mais o rendimento do mes foi de: \n %f" , valor_rend);

    return 0;
}