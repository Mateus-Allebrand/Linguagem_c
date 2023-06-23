#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 100

struct tpilha {
    char dados[tam][tam];
    int topo;
};

struct tfila {
    char dados[tam][tam];
    int ini;
    int fim;
};

struct tfila fila;
struct tpilha pilha;
struct tpilha pilha_empilhados;

void inserir_fila() {
    if (fila.fim == tam) {
        printf("A fila está cheia!\n");
        system("pause");
    } else {
        printf("Digite a string a ser inserida: ");
        scanf(" %[^\n]", fila.dados[fila.fim]);
        fila.fim++;
    }
}

void excluir_fila() {
    if (fila.ini == fila.fim) {
        printf("A fila está vazia.\n");
        system("pause");
    } else {
        int i;
        for (i = 0; i < fila.fim - 1; i++) {
            strcpy(fila.dados[i], fila.dados[i + 1]);
        }
        fila.fim--;
    }
}

void inserir_pilha() {
    if (pilha.topo == tam) {
        printf("A pilha está cheia!\n");
        system("pause");
    } else {
        printf("Digite o valor a ser inserido na pilha: ");
        scanf(" %[^\n]", pilha.dados[pilha.topo]);
        pilha.topo++;
    }
}

void empilhar_elementos() {
    int i;
    for (i = fila.ini; i < fila.fim; i++) {
        if (pilha.topo == tam) {
            printf("A pilha está cheia, impossível empilhar todos os elementos da fila!\n");
            system("pause");
            return;
        }
        strcpy(pilha.dados[pilha.topo], fila.dados[i]);
        pilha.topo++;

        // Adiciona o elemento empilhado também na pilha dos empilhados
        strcpy(pilha_empilhados.dados[pilha_empilhados.topo], fila.dados[i]);
        pilha_empilhados.topo++;
    }
}

void imprimir_fila() {
    if (fila.ini == fila.fim) {
        printf("Fila vazia\n\n");
        return;
    }
    int i;
    printf("Fila: ");
    for (i = fila.ini; i < fila.fim; i++) {
        printf("%s ", fila.dados[i]);
    }
    printf("\n\n");
}

void imprimir_pilha() {
    if (pilha.topo == 0) {
        printf("Pilha vazia\n\n");
        return;
    }
    int i;
    printf("Pilha: ");
    for (i = pilha.topo - 1; i >= 0; i--) {
        printf("%s ", pilha.dados[i]);
    }
    printf("\n\n");
}

void imprimir_fila_e_pilha() {
    printf("Elementos na fila e na pilha:\n");

    if (fila.ini == fila.fim) {
        printf("Fila vazia\n");
    } else {
        int i;
        printf("Fila: ");
        for (i = fila.ini; i < fila.fim; i++) {
            printf("%s ", fila.dados[i]);
        }
        printf("\n");
    }

    if (pilha.topo == 0) {
        printf("Pilha vazia\n");
    } else {
        int i;
        printf("Pilha: ");
        for (i = pilha.topo - 1; i >= 0; i--) {
            printf("%s ", pilha.dados[i]);
        }
        printf("\n");
    }

    printf("\n");
}

void imprimir_fila_e_pilha_empilhados() {
    printf("Elementos na fila e na pilha (incluindo empilhados):\n");

    if (fila.ini == fila.fim) {
        printf("Fila vazia\n\n");
    } else {
        int i;
        printf("Elementos na fila:\n");
        for (i = fila.ini; i < fila.fim; i++) {
            printf("%s\n", fila.dados[i]);
        }
        printf("\n");
    }

    if (pilha.topo == 0) {
        printf("Pilha vazia\n\n");
    } else {
        int i;
        printf("Elementos na pilha:\n");
        for (i = pilha.topo - 1; i >= 0; i--) {
            printf("%s\n", pilha.dados[i]);
        }
        printf("\n");
    }

    if (pilha_empilhados.topo == 0) {
        printf("Pilha de elementos empilhados vazia\n\n");
    } else {
        int i;
        printf("Elementos na pilha de elementos empilhados:\n");
        for (i = pilha_empilhados.topo - 1; i >= 0; i--) {
            printf("%s\n", pilha_empilhados.dados[i]);
        }
        printf("\n");
    }
}

void menu_mostrar() {
    printf("Escolha uma opção:\n");
    printf("1 - Inserir na fila\n");
    printf("2 - Excluir da fila\n");
    printf("3 - Empilhar elementos da fila\n");
    printf("4 - Mostrar fila e pilha\n");
    printf("5 - Mostrar fila, pilha e pilha de elementos empilhados\n");
    printf("6 - Inserir valor na pilha\n");
    printf("0 - Sair\n");
    printf("\n");
}

int main() {
    int op;
    fila.ini = 0;
    fila.fim = 0;
    pilha.topo = 0;
    pilha_empilhados.topo = 0;

    do {
        system("cls");
        //imprimir_fila_e_pilha_empilhados();
        imprimir_fila_e_pilha();
        menu_mostrar();
        scanf("%d", &op);

        switch (op) {
            case 1:
                inserir_fila();
                break;
            case 2:
                excluir_fila();
                break;
            case 3:
                empilhar_elementos();
                break;
            case 4:
                imprimir_fila_e_pilha();
                system("pause");
                break;
            case 5:
                imprimir_fila_e_pilha_empilhados();
                system("pause");
                break;
            case 6:
   				inserir_pilha();
   			break;    
        }
    } while (op != 0);

    return 0;
}


