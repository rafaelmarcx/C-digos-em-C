#include <stdio.h>

int main(){
    
    int idade;


    for(int i = 0; i < 3; i++) {
        printf("Insira a idade: \n" , i + 1);
        scanf("%d" , &idade );

        if(idade >= 18) {
            printf("Essa pessoa e maior de idade. \n");  }
            
            else{
            printf("Essa pessoa e menor de idade. \n");}
           
    }
    return 0;
    









}