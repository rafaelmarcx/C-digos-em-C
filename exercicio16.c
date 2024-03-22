#include <stdio.h>

int main(){

    float nota1, nota2, nota3, media;

    printf("Insira a primeira nota: \n");
    scanf("%f" , &nota1);

    printf("Insira a segunda nota: \n" );
    scanf("%f" , &nota2);

    printf("Insira a terceira nota: \n" );
    scanf("%f" , &nota3);

    media = nota1+nota2+nota3/3;

    if(media>=7){
    printf("O aluno foi aprovado. \n");}
    else if(media <=5){
        printf("O aluno foi reprovado. \n");}
    else {
        printf("O aluno ficou de recuperacao. \n");}


    return 0;



}