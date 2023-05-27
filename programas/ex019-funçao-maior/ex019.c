#include<stdio.h>
#include<stdlib.h>

float maior(float n1, float n2){
    if (n1 > n2)
        return n1;
    else 
        return n2;
}

int main(){
    float nu1, nu2, m;

    printf("Digite um numero \n");
        scanf("%f",&nu1);
    printf("Digite um numero \n");
        scanf("%f",&nu2);

m = maior(nu1,nu2);

    printf("\nO maior numero entre %.2f e %.2f = %.2f ", nu1, nu2, m);

}