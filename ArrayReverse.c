/*Wap to reverse an array*/

#include<stdio.h>

void arrayReverse(int *arr, int n);
void printArray(int *arr, int n);

int main(){

    int arr[4]={1,2,3,4};

    printArray(arr,4);
    arrayReverse(arr,4);
    printArray(arr,4);

    return 0;
}


void printArray(int *arr, int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void arrayReverse(int *arr, int n){

    // for(int i=0;i<n/2; i++){
    //     int temp;
    //     temp=arr[i];
    //     arr[i]=arr[n-i-1];
    //     arr[n-i-1]=temp;
    // }


    int left=0, right=n-1;

    while(left<=right){
        int temp;
        temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;

        left++;
        right--;
    }
}