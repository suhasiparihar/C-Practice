
/*
Wap to calculate the sum, product and average of 2 numbers and print the result in main.
Demonstrating how pointer can be used to return more than 1 value.
*/

#include<stdio.h>

void calc(int a, int b, int *sum, int *prod, float *avg){

    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}

int main(){

    int a=5,b=7;
    int sum,prod;
    float avg;

    calc(a,b,&sum,&prod,&avg);

    printf("Sum: %d\nProd: %d\nAvg: %f",sum,prod,avg);

    return 0;
}