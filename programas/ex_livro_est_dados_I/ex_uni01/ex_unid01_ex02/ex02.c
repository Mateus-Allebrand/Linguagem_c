#include<stdio.h>
#include<stdlib.h>

#define tam 3

struct sema{
    char cor[10];
    int id;
};

struct sema s1 = {"Vermelho", 1};
struct sema s2 = {"Amarelo", 2};
struct sema s3 = {"Verde",3 };
struct sema *ptr_s;

int main(){
    ptr_s = &s1;
    printf("\ncor: %s id: %d", (*ptr_s).cor, (*ptr_s).id);

    ptr_s = ptr_s + 1;
    printf("\ncor: %s id: %d", (*ptr_s).cor, (*ptr_s).id);

    ptr_s = ptr_s + 1;
    printf("\ncor: %s id: %d", (*ptr_s).cor, (*ptr_s).id);

    return(0);
}