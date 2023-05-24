#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

#define num 20

char teste[num];
int i = 0;

printf("Digite alguma coisa: ");
gets(teste);

puts(teste);
i = strlen(teste);
printf("\nTem %d caracteres a string %s",i,teste);




}