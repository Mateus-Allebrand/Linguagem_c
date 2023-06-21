#include<stdio.h>

#define NO 20
int main(){
void foo(struct NO* r){
    if(r){
      printf("%d \t", r->val); //visita o nó atual
      foo(r->esquerda);
      foo(r->direita);
    }
}
return(0);
}