#include<stdio.h>
int main(){

    float nota[5] ={7.5, 8.5, 4.9, 4.6,7.9};
    int i;
    float s = 0;

    for (i = 0; i < 5;i++){
        s += nota[i];
    
}
    s /= 5;
    printf("Media = %.2f",s);
    }
   