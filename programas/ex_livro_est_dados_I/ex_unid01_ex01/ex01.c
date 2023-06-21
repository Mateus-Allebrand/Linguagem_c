#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    

    ptr = (int *) malloc(sizeof(int)*10);
     
    *ptr = 42;
    printf("Endereco: %p\nValor: %d\n", ptr, *ptr);
    
    return(0);
}