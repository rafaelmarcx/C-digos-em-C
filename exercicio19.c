#include <stdio.h>

int main(){

    int sexo;
    char nome[50];
    int total_h = 0;
    int total_m = 0;

    for (int i = 0; i < 56; i++) {
        printf("Insira o nome: " , i + 1);
        scanf("%s" , &nome);
        printf("Insira o sexo, 1 para homem e 2 para mulher: ");
        scanf(" %d" , &sexo);

        if(sexo == 1){
            printf("%s e homem \n." , nome);
            total_h++;}
            else if(sexo == 2){
                printf("%s e mulher. \n" , nome);
                total_m++;}
            else{
                printf("Sexo invalido."); }

         printf("Total de homens: %d \n", total_h);
         printf("Total de mulheres: %d \n", total_m);

         }
         return 0;
    }
   


    

      
    
