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



int main(){
    setlocale(LC_ALL,"Portuguese");
    
struct dados cliente;
strcat(cliente.nome,"Mateus");
cliente.idade = 27;
cliente.peso = 70;

printf(" %s \n %d \n %f", cliente.nome, cliente.idade, cliente.peso);





}