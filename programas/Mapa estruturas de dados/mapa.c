#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct NO{
    int dado;
    struct NO *prox;
}NO;

typedef struct FILA{
    NO *ini;
    NO *fim;
}FILA;










// função Inserir na fila 
void inserir_fila(char dado, FILA *f){
    NO *ptr = (NO*) malloc(sizeof(NO));
    if (ptr == NULL){
        printf("Erro de alocacao\n");
    }else{
        ptr->dado = dado;
        ptr->prox = NULL;
        if (f->ini == NULL){
            f->ini = ptr;
        }else{
            f->fim->prox = ptr;
        }
        f->fim = ptr;
    }
    return;
};
// função Excluir da fila 
int desenfileirar-fila(FILA *f){
    NO *ptr= f->ini;
    int dado;
    if (ptr != NULL){
        f->ini = ptr->prox;
        ptr->prox = NULL;
        dado = ptr->dado;
        free(ptr);
        if(f->ini ==NULL){
            f->fim = NULL;
        }
        return dado;
    }else{
        printf("fila vazia\n")
        return;
        }
};

// função Imprimir a fila 
void imprimir_fila(){
    NO *ptr= f->ini;
    if (ptr != NULL){
        while(ptr != NULL){
            printf("%d",ptr->dado);
            ptr = ptr->prox;
        }
    }else{
        printf("Fila vazia\n")
        return;
    }
};
// função Inserir na pilha 
// função Imprimir a pilha