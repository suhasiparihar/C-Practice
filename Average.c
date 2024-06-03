#include<stdio.h>

int main(){

    int a,b,c;
    printf("Enter 3 number: ");
    scanf("%d %d %d",&a,&b,&c);

    int avg=(a+b+c)/3;

    printf("Average is %d: ",avg);

    return 0;
}