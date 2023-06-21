#include<stdio.h>
#include<stdlib.h>

int main(){
int dado = 0;

printf("dado = %d \n", dado);
printf("\nQual valor tu quer atribuir ao dado \?");
scanf("%d",&dado);
dado ++;
printf("\ndado = %d",dado);

dado *= 8;
printf("\ndado = %d",dado);

dado /= 2;
printf("\ndado = %d",dado);

return(0);

}