#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int t;
    int i;
    int *vet1;
    int *vet2;

    printf("Digite o tamanho do vetor que voce deseja: ");
    scanf("%d",&t);

    vet1 = (int *) malloc(sizeof (int) * t);
    vet2 = (int *) malloc(sizeof (int) * (t * 2));
    
    for( i=0; i<t; i++){
        vet1[i] = pow(i,2);
        printf("%d \n",vet1[i]);
    };
    for( i=0; i<(t*2); i++){
        vet2[i] = pow(i,3);
        printf("%d \n",vet2[i]);
    };
    return(0);
    }




   