#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

#define N 20

char word[N] = "olá, mundo";
char beaut[N] = "bonito";
printf("\n word =");
puts(word);
printf("\n beaut =");
puts(beaut);

strcat(word,beaut);
printf("\nword =");
puts(word);

}
