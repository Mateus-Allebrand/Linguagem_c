#include<stdio.h>
#include<stdlib.h>

int main(){
float n1, n2, media;
 printf(" Seja bem vindo!\n");
 printf("Digite a primeira nota: \n");
    scanf("%f",&n1);
 printf("Digite a segunda nota: \n");
    scanf("%f",&n2);
 
 media = (n1 + n2)/2;

 if (media >= 7){
    printf("A media do aluno foi %.2f \nAluno Aprovado",media);
        }
 else{
    if (media >= 5 && media < 7 ){
        printf("A media do aluno foi %.2f \nAluno Em recuperacao",media);
        } 
    else{
        printf("A media do aluno foi %.2f \nAluno Reprovado",media);
        }
        }
    

 return(0);
}