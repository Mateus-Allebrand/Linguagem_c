#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define tam 5

// Estrutura livro
struct tlivro{
    int cod;
    char nome[50];
    char autor[50];
};


// Estrutura fila
struct tpilha
{
    struct tlivro dados[tam];
    int ini;
    int fim;
    
};
  
// variaveis globais 
struct tpilha pilha;

// função entrar na fila
void pilha_entrar(){
    if (pilha.fim == tam){
        printf("pilha cheia!\nImpossivel adicionar mais livros");
        system("pause");
    }else{
        printf("Digite o codigo do livro: \n");
        scanf("%d", &pilha.dados[pilha.fim].cod);
        printf("Digite o nome do livro: \n");
        scanf("%s", &pilha.dados[pilha.fim].nome);
        printf("Digite o nome do autor do livro: \n");
        scanf("%s", &pilha.dados[pilha.fim].autor);
        pilha.fim++;
    }
};

// Reirar da pilha
void pilha_sair(){
    if (pilha.fim == pilha.ini){
        printf("Pilha Vazia!\nSem livros na pilha!");
        system("pause");
    }else{
        pilha.dados[pilha.fim - 1].cod = 0;
        strcpy(pilha.dados[pilha.fim-1].nome,"");
        strcpy(pilha.dados[pilha.fim-1].autor,"");
        pilha.fim--;
    }
};


// mostrar conteudo da pilha
void pilha_mostrar(){
    int i;
    printf("[ ");
    for (i=0;i<tam;i++){
        printf("%d ",pilha.dados[i].cod);
    }
    printf("] \n\n");
};



// programa principal
int main(){
    pilha_entrar();
    
    pilha_mostrar();

    pilha_sair();
    
    
    pilha_mostrar();

    return(0);
}

