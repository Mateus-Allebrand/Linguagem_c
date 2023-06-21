#include<stdio.h>
#include<stdlib.h>
int main(){
#define msg "    => CALCULADORA <=     "
#define ms2 "#### => RESULTADO: <= #####"
float n1, n2, div,mult, som, sub;

    printf("\n %s \n",msg);
    printf("\nDigite o primeiro numero: \n");
        scanf("%f",&n1);
    printf("\nDigite o segundo numero: \n");
        scanf("%f",&n2);

som = n1 + n2;
sub = n1 - n2;
mult = n1 * n2;
div = n1 / n2;
    
    printf("%s \n",ms2);
    printf("\nResultado da soma entre %.2f e %.2f = %.2f", n1,n2, som);
    printf("\nResultado da subtracaoo entre %.2f e %.2f = %.2f", n1,n2, sub);
    printf("\nResultado da multiplicacaoo entre %.2f e %.2f = %.2f", n1,n2, mult);
    printf("\nResultado da divisao entre %.2f e %.2f = %.2f", n1,n2, div);

return(0);
}