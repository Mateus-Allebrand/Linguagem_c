#include<stdio.h>
#include<stdlib.h>

int main(){
int d = 0;
printf("Digite o numero do dia: ");
scanf("%d",&d);

switch (d)
{
case 1:
    printf("Domingo");
    break;
case 2:
    printf("Segunda");
    break;
case 3:
    printf("Terca");
    break;
case 4:
    printf("Quarta");
    break;
case 5:
    printf("Quinta");
    break;
case 6:
    printf("sexta");
    break;
case 7:
    printf("Sabado");
    break;
default:
    printf("Digito invalido!");
    break;
}

}