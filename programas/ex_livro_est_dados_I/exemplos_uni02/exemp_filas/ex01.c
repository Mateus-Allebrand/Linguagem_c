#include<stdio.h>
#include<stdlib.h>


#define tam 5

// Estrutura fila
struct tfila
{
    int dados[tam];
    int ini;
    int fim;
};

// variaveis globais
struct tfila fila;
int op;

// função fila entrar
void fila_entrar(){
    if (fila.fim == tam){
        printf("Fila esta cheia!\nImpossivel incluir mais itens!");
    }else{
        printf("Digite o numero que quer incluir na fila: ");
        scanf("%d",&fila.dados[fila.fim]);
        fila.fim++;
    }
}

// função mostrar fila
void fila_mostrar(){
    int i;
    printf("[ ");
    for(i=0;i<tam;i++){
        printf("%d ",fila.dados[i]);
        }
    printf("] \n\n");
    
}

// fila sair
void fila_sair(){
    if (fila.fim == fila.ini){
        printf("Fila esta vazia!\nimpossivel retirar itens dela");
        system("pause");
    }else{
        int i;
        for(i=0;i<tam;i++){
            fila.dados[i] = fila.dados[i+1];
        }
        fila.dados[fila.fim] = 0;
        fila.fim--;
    }
}

// menu de opcoes

void menu(){
    printf("========== MENU ========== \n  Op [1] => Incluir item \n  Op [2] => Excluir item \n  Op [0] => Sair\n==========================\n");  
}

// programa principal
int main(){
    int op = 1;
    fila.ini = 0;
    fila.fim = 0;
    while (op != 0){
        fila_mostrar();
        menu();
        scanf("%d",&op);
        switch (op)
        {
        case 1: 
            fila_entrar();
            break;
        
        case 2:
            fila_sair();
            break;
        }
    }
    return(0);
}

