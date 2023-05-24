#include<stdio.h>

    int main(){
    float v[5];
    int i;

    for (i=0; i<5; i++){
        printf("Digite um valor: \n");
        scanf("%f", &v[i]);
    }
    for (i=0; i<5; i++){
        printf("\n%.2f \n",v[i]);
    }

}