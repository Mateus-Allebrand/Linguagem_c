#include<stdio.h>
#include<stdlib.h>



//Estrutura No
struct no{
    int dado;
    struct no *proximo;
};

typedef no *ptr_no;

ptr_no lista;

//Criando lista encadeada
lista =(ptr_no) malloc(sizeof (no));
lista->dado = 0;
lista->proximo = NULL;

//Funçao lista mostrar
void lista_mostrar(ptr_no lista){
    system("cls");
    while (lista->proximo != NULL){
        printf("%d, ",lista->dado);
        lista = lista->proximo;
    }
    printf("%d, ",lista->dado);
};


int main(){
    lista_mostrar();

    
    return(0);
}