#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

struct dados
{
    char nome[50];
    int idade;
    float peso;
};

#define Tam 3

int main(){
    
    int i;
    
struct dados cliente[3];

for (i=0; i<Tam; i++ ){
    printf("Nome: \n");
    scanf("%s ", &cliente[i].nome);
    fflush(stdin);

    printf("idade:\n ");
    scanf("%d", &cliente[i].idade);
    fflush(stdin);
        
    printf("peso:");
    scanf("%f ", &cliente[i].peso);
    fflush(stdin);
}

system("cls");

for  (i=0; i<3; i++ ){
printf(" dados da pessoa numero %d",i + 1);
printf("Nome: %s \nIdade %d \nPeso: %.2f", cliente[i], cliente[i] , cliente[i]);
printf("\n");
}

}