/*
* Name: Syed Anwer
* Section: BAI-1A
* Roll No: 24k-0033
* Write a C program that finds the maximum element in a given m x n matrix and its position (row, column).
*/
#include <stdio.h>

int main() {
    int row;   //length
    printf("\nNo. of rows: ");
    scanf("%d",&row); //tell the no of rows
    int col;
    printf("\nNo. of coloum: ");        //Tell no.of coloum
    scanf("%d",&col);
    int arr[row][col];
    for(int i=0;i<row;++i){         //user input
        for(int j = 0; j<col;++j){  //for nested for 2D array
            printf("\nEnter element[%d][%d]: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }//end for nested   
    }//end for outer
    int target=0;
    int index=0,index2=0;
    printf("\nYou entered the matrix: \n   ");
    for(int i=0;i<col;i++){
        printf(" |C%d|",i+1);
    }
    printf("\n");
    for(int i=0;i<row;++i){         //display
        printf("|R%d|",i+1);   
        for(int j = 0; j<col;++j){  //for nested for 2D array
            printf("|%d| ",arr[i][j]);
            if(target<arr[i][j]){
                target=arr[i][j];
                index=i;
                index2=j;
            }
        }//end for nested
        printf("\n");
    }//end for outer
    printf("\nThe biggest element is %d at index[%d][%d] position of row #%d and coloum #%d. ",target,index,index2,index+1,index2+1);
    return 0;
}