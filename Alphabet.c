/*WAP to print all english alphabet using pointers*/

#include<stdio.h>

void alphabet(char *ch);

int main(){

    char ch='a';
    char *c=&ch;
    alphabet(c);
    return 0;
}
void alphabet(char *ch){

    for(int i=1;i<=26;i++){
        printf("%c\t",*ch);
        (*ch)++;
    }
}