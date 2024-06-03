#include<stdio.h>

void swap(int *a, int *b);

int main(){

    int a=5,b=7;
    printf("Initial Value: A: %d,\t B: %d\t", a,b);
    swap(&a,&b);
    printf("Swapped Values: A: %d,\t B: %d\t",a,b);
    return 0;
}

void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}