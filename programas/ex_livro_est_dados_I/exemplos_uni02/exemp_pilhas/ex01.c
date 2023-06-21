#include<stdio.h>
#include<stdlib.h>


#define tam 5

struct tpilha
{
    int dados[tam];
    int ini;
    int fim;
};

struct tpilha pilha;
int op;

// Função mostrar
void pilha_mostrar(){
    int i;
    printf("[ ");
    for(i=0; i<tam;i++){
        printf("%d ",pilha.dados[i]);
    };
    printf("] \n\n ");
    }
// Função entrar
void pilha_entrar(){
    if (pilha.fim == tam){
        printf("Pilha esta cheia.\nImpossivel empilhar novo elemento!");
        system("pause");
    }else{
    printf("Digite o numero que deseja introduzir na pilha: ");
    scanf("%d",&pilha.dados[pilha.fim]);
    pilha.fim++;
    }
    }
    
    // Função desemplihar
void pilha_sair(){
    if(pilha.fim == pilha.ini){
        printf("Pilha vazia!\n");
        system("pause");
    }else{
    pilha.dados[pilha.fim -1] = 0;
    pilha.fim--;
    }
    }


    // Menu
    int menu(){
        printf("========== Menu ===========\n Op [1] => Adcionar na pilha \n Op [2] => Retirar da pilha \n Op [0] => Sair \n ===========================\n");
    }

int main(){
    int op = 1;
    pilha.ini = 0;
    pilha.fim = 0;
    while (op != 0){
        system("cls");
        pilha_mostrar();
        menu();
        scanf("%d",&op);
    switch (op){
        case 1:
        pilha_entrar();
        break;

        case 2:
        pilha_sair();
        break;
    }
    }
    return(0);
}