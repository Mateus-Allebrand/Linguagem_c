#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>

#define  TAM 3

struct tipo_pessoa{
    char nome[50];
    int idade;
    float peso;

};

struct tipo_pessoa lista[TAM];

int main(){
    setlocale(LC_ALL,"Portuguese");

    
    int i;
    for (i=0; i<TAM; i++){
        printf("Insira os dados (%d):\n", i +1);
        puts("Nome: ");
        scanf("%49[^\n]s",&lista[i].nome);
        fflush(stdin);

        puts("Idade: ");
        scanf("%d",&lista[i].idade);
        fflush(stdin);

        puts("peso: ");
        scanf("%f",&lista[i].peso);
        fflush(stdin);
    }

    system("cls");

    puts("Seus dados: \n");
    for (i=0; i<TAM; i++){
        printf("\n.......... Pessoa %d...........",i +1);
        printf("\nNome: %s", lista[i].nome);
        printf("\nIdade: %d", lista[i].idade);
        printf("\nPeso: %.2f", lista[i].peso);
    }
}
