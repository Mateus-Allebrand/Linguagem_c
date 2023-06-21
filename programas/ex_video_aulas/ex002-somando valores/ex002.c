#include <stdio.h>
#include <stdlib.h>

int main(){
int a, b, c;

printf("Digite o primeiro numero: \n");
scanf("%d",&a);
printf("Digite o segundo numero: \n");
scanf("%d",&b);
c = a + b;
printf("O resultado da soma entre os numeros %d e %d = %d", a, b, c);

return(0);
}