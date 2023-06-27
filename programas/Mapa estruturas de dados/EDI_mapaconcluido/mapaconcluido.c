///////////////////////////////////////////////////////////////////////////////////////////////////
//                      CURSO: BACHARELADO EM ENGENHARIA DE SOFTWARE                             //
//                                                                                               //
// Mapa de Estrutura de Dados I                                                                 //
//                                                                                               //
// Programador: Mateus Allebrand                                                                 //
//                                                                                               //
// Login: 22214027-5                                                                             //
//                                                                                               //
///////////////////////////////////////////////////////////////////////////////////////////////////
//OBS.: PARA NÂO HAVER ERRO => as letras das nucleotides devem ser escritas em Letras maiúsculas //
//      Maneira correta => ACGT       //        Maneira errada =>acgt //                         //
//      Grato!!                                                                                  //
///////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura do nó da fila
typedef struct Node {
    char nucleotide;
    struct Node* next;
} Node;

// Definição da estrutura da fila
typedef struct Queue {
    Node* front;
    Node* rear;
} Queue;

// Definição da estrutura do nó da pilha
typedef struct StackNode {
    char nucleotide;
    struct StackNode* next;
} StackNode;

// Definição da estrutura da pilha
typedef struct Stack {
    StackNode* top;
} Stack;

// Função para criar uma fila vazia
Queue* createQueue() {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

// Função para criar uma pilha vazia
Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}

// Função para inserir um nucleotídeo na fila
void enqueue(Queue* queue, char nucleotide) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->nucleotide = nucleotide;
    newNode->next = NULL;

    if (queue->front == NULL) {
        queue->front = newNode;
        queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

// Função para remover um nucleotídeo da fila
char dequeue(Queue* queue) {
    if (queue->front == NULL) {
        printf("A fila esta vazia.\n");
        return '\0';
    }

    Node* temp = queue->front;
    char nucleotide = temp->nucleotide;
    queue->front = queue->front->next;
    free(temp);

    if (queue->front == NULL) {
        queue->rear = NULL;
    }

    return nucleotide;
}

// Função para inserir um nucleotídeo na pilha
void push(Stack* stack, char nucleotide) {
    StackNode* newNode = (StackNode*)malloc(sizeof(StackNode));
    newNode->nucleotide = nucleotide;
    newNode->next = stack->top;
    stack->top = newNode;
}

// Função para imprimir a fila
void printQueue(Queue* queue) {
    printf("Fila: ");
    Node* current = queue->front;
    while (current != NULL) {
        printf("%c ", current->nucleotide);
        current = current->next;
    }
    printf("\n");
}

// Função para imprimir a pilha
void printStack(Stack* stack) {
    printf("Pilha: ");
    StackNode* current = stack->top;
    while (current != NULL) {
        printf("%c ", current->nucleotide);
        current = current->next;
    }
    printf("\n");
}


void menu_mostrar() {
    printf("=======================================");
    printf("\n   -=-=-=-=-= => MENU <= =-=-=-=-=-=\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("      [1] => Inserir na fila \n");
    printf("      [2] => Excluir da fila\n");
    printf("      [3] => Mostrar fila \n");
    printf("      [4] => Mostrar pilha\n");
    printf("      [5] => Excluir da pilha\n");
    printf("      [0] => Sair\n");
    printf("\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}

int main() {
    int i;
    int op =1;
    int n;
    
    Queue* queue = createQueue();
    Stack* stack = createStack();
    Queue* queueCopy = createQueue();
    while (op !=0){
    menu_mostrar();
    scanf("%D",&op);
     switch (op)
     {
     case 1:
            printf("Digite o tamanho da sequencia de DNA: ");
            scanf("%d", &n);   

        printf("Digite a sequencia de DNA (composta por nucleotídeos A, C, T e G):\n");
        for (int i = 0; i < n; i++) {
            char nucleotide;
            scanf(" %c", &nucleotide);
            enqueue(queue, nucleotide);
            enqueue(queueCopy, nucleotide); // Adicionar à queueCopy

        }
        



    // Passar a fila original para a pilha
    while (queue->front != NULL) {
        char nucleotide = dequeue(queue);
        switch (nucleotide) {
            case 'A':
                push(stack, 'T');
                break;
            case 'T':
                push(stack, 'A');
                break;
            case 'C':
                push(stack, 'G');
                break;
            case 'G':
                push(stack, 'C');
                break;
            default:
                printf("Nucleotideo invalido encontrado: %c\n", nucleotide);
                break;
        }
    }
    printf("\nOBS.:Removemos para a dupla fita do DNA e convertemos a sequencia de nucleotideos.\n");
    printf("\n============ # RESULTADO # ============\n\n");
    // Imprimir a fila original e a pilha
    printf("Fila original:\n");
    printQueue(queueCopy);
    printf("\n");
    printf("Dupla fita do DNA:\n");
    printStack(stack);
    printf("\n\n");
            break;
        case 2:
            for (i=0;i<n;i++){
            dequeue(queueCopy);
        }
            printf("\nConteudo da Fila: \n\n");
            printQueue(queueCopy);
            printf("\n\n");
            break;
        case 3://Mostrar fila
        printf("\nConteudo da Fila: \n\n");
        printQueue(queueCopy);
        printf("\n");
        break;
        
        case 4: //Mostrar pilha
        printf("\n");
        printf("\nConteudo da Pilha: \n\n");
        printStack(stack);
        printf("\n");
        break;

        case 5: //excluir da  pilha
         for (i=0;i<n;i++){
            dequeue(stack);
        }
        printf("\n");
        printf("\nConteudo da Pilha: \n\n");
        printStack(stack);
        printf("\n");
        break;

        default:
            break;
            
        }
        

        }
    printf("\n      ========== FIM! ========== \n\n");
    return 0;
}