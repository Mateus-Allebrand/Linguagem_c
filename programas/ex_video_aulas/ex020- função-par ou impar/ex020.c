#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Par(num){
    int resp;
    if (num % 2 == 0){
        resp = 0;
        return resp;
        }
    else
       resp = 1;
       return resp;

}

int main(){
    int n,m;
    char resposta[10];

    printf("Digite um numero: ");
    scanf("%d",&n);
    fflush(stdin);

m = Par(n);
 if (m == 0){
  printf(" O numero %d = %s",n,strcpy(resposta,"Par"));
 }
 else
 printf(" O numero %d = %s",n,strcpy(resposta,"Impar"));
}

   