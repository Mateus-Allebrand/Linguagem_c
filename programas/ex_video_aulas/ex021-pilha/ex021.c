#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define tam 3  

struct pilha{
   int dados[tam];  
   int primeiro;  
   int ultimo;  
};  

struct pilha p;  

void desempilhar(){  
   p.dados[p.ultimo-1] = 0;  
   p.ultimo--;  
} 

int main(){
    int num,i;
for (i=0;i<10;i++){
  printf("Digite um valor: ");
  scanf("%d",&num);
  p.dados[p.ultimo] = num;
  p.ultimo++;
  if (p.ultimo == tam){
  printf("pilha cheia\n");
  break;
  }
  }
for (i=0;i<tam;i++){
    printf("%d \n",p.dados[i]);
}

for (i=0;i<10;i++){
    desempilhar(p.dados);
    printf("%d \n",p.dados[i]);
    if (p.ultimo == p.primeiro){
     printf("pilha vazia\n");
     break;
    }

}

}
 
