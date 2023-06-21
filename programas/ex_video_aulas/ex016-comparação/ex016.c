#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
#define num 20
char csaida[num] = "exit";
char com[num];
int ok;

printf("continuar ? ");
gets(com);

ok = strcmp(csaida,com);

if (ok == 0){
    printf("Mensagem igual!");
}
else{
    printf("Mensagem diferente");
}  
 
}