#include<stdio.h>
#include<stdlib.h>

int main(){
#define mensag "Bem vindo!"
int idade = 0;
float altura =0.0;
char nome[50] ="";
    printf("Digite seu nome: \n");
        scanf("%s",&nome);
    printf("Digite sua idade: \n");
        scanf("%d",&idade);
    printf("Digite sua altura: \n");
        scanf("%f",&altura);
        printf("\n");
    printf("Seu nome: %s \nSua idade: %d anos\nSua altura: %.2f", nome, idade, altura);
return(0);
}