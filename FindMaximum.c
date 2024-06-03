/*Wap to find maximum of two no.s using ponters*/

#include<stdio.h>

int maximum(int *a, int *b);

int main(){
    int a=9,b=11;

    printf("Maximum is %d", maximum(&a,&b));

    return 0;
}

int maximum(int *a, int *b){
    int max= (*a)>(*b)?*a:*b;
    return max;
}