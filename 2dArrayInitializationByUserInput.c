#include<stdio.h>
#include<stdlib.h>

int main(){

    int rows,cols;
    printf("Enter no. of rows: ");
    scanf("%d",&rows);

    printf("Enter no. of columns: ");
    scanf("%d",&cols);

    int* matrix=(int*)malloc(rows*cols*sizeof(int));

    if(matrix==NULL){
        printf("Memory Allocation Failed\n");
    }

    //initialization of matrix
    printf("Enter matrixvalues one by one:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",matrix+i*cols+j);
        }
    }
    
    //print matrix
    printf("Enter matrixvalues one by one:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d\t",*(matrix+i*cols+j));
        }
        printf("\n");
    }

    free(matrix);
    return 0;
}