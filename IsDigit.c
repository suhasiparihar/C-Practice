#include<stdio.h>

int main(){

    char ch;
    printf("Enter Character: ");
    scanf("%c",&ch);
    int chInt=(int)ch;
    if(chInt>=48 && chInt<=57){

        printf("Is Digit");
    }
    else{
        printf("Not a Digit");
    }
    return 0;
}