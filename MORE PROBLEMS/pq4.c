/*
Name: Syed Anwer
Section: BAI-1A
Roll No: 24k-0033
Implement a C program to find the transpose of a given m x n matrix. Print the transposed matrix.*/
#include <stdio.h>

int main() {
    int row,col;
    //enter rowx and coloum of matrix
    printf("Rows of matrix: ");
    scanf("%d",&row);
    printf("Coloum of matrix: ");
    scanf("%d",&col);

    //one for original user defined and other for transpose
    int arr[col][row];
    int tra[row][col];

    //enter elements
    for(int i=0;i<col;++i){
        for(int k=0;k<row;++k){
            printf("Enter Col[%d] Row[%d]: ",i+1,k+1);
            scanf("%d",&arr[i][k]);
            tra[k][i] = arr[i][k];
        }
    }

    //display the entered array
    printf("\nYou entered:\n");
    for(int i=0;i<col;++i){
        for(int k=0;k<row;++k){
            printf("%d ",arr[i][k]);
        }
        printf("\n");
    }
        //Display tranpose
        printf("\nTranspose: \n");
        for(int i=0;i<row;++i){
            for(int k=0;k<col;++k){
                printf("%d ",tra[i][k]);
            }
            printf("\n");
        }

    return 0;
}