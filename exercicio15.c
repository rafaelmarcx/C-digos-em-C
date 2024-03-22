#include <stdio.h>

int main(){
    float receba;

    printf("Insira um numero: \n ");
    scanf("%f" , &receba);

    if(receba>100 && receba<200){
        printf("O numero esta entre 100 e 200. \n");}

    else{
        printf("O numero nao esta entre 100 e 200. \n");
    }

    return 0;


}