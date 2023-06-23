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
    
    int n;
    printf("Digite o tamanho da sequencia de DNA: ");
    scanf("%d", &n);

    Queue* queue = createQueue();
    Stack* stack = createStack();
    

    printf("Digite a sequencia de DNA (composta por nucleotídeos A, C, T e G):\n");
    for (int i = 0; i < n; i++) {
        char nucleotide;
        scanf(" %c", &nucleotide);
        enqueue(queue, nucleotide);
        
    }
    
    // Criar uma cópia da fila original
Queue* queueCopy = createQueue();
Node* current = queue->front;
while (current != NULL) {
    enqueue(queueCopy, current->nucleotide);
    current = current->next;
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

// Imprimir a fila original e a pilha
printf("Fila original:\n");
printQueue(queueCopy);
printf("Dupla fita do DNA:\n");
printStack(stack);

    return 0;
}