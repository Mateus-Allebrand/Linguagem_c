#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct NO{
    int dado;
    struct NO* prox;
}NO;

typedef struct FILA{
    NO *ini;
    NO *fim;
}FILA;


// inicializando a fila
void inicializafila(FILA *f){
    f->ini =NULL;
    f->fim=NULL;
};



// função Inserir na fila 
void inserir_fila(int dado, FILA *f){
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
int desenfileirar_fila(FILA *f){
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
        printf("fila vazia\n");
        }
};

// função Imprimir a fila 
void imprimir_fila(FILA *f){
    NO *ptr= f->ini;
    if (ptr != NULL){
        while(ptr != NULL){
            printf("%d ",ptr->dado);
            ptr = ptr->prox;
        }
    }else{
        printf("Fila vazia\n");
        return;
    }
};
// função Inserir na pilha 
// função Imprimir a pilha

int main(){
    FILA *f1 = (FILA*) malloc(sizeof(FILA));
    if (f1 == NULL){
        printf("Erro de alocacao!\n");
        exit(-1);
    }else{
        inicializafila(f1);

        inserir_fila(10,f1);
        inserir_fila(20,f1);
        inserir_fila(30,f1);
        imprimir_fila(f1);

        printf("desenfilerado %d\n",desenfileirar_fila(f1));
        imprimir_fila(f1);

        printf("desenfilerado %d\n",desenfileirar_fila(f1));
        imprimir_fila(f1);

        printf("desenfilerado %d\n",desenfileirar_fila(f1));
        imprimir_fila(f1);
       
       

       
        
    }



    return(0);
}