#include<stdio.h>

int main(){
    char nom[25];
    printf("digite alguma coisa na tela: \n");
    scanf("%24[^\n]s",nom);
    printf("resultado: %s ",nom);



}