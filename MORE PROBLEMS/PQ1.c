/*
Name: Syed Anwer
Section: BAI-1A
Roll No: 24k-0033
Problem Q1: Write a C program that takes a square matrix as input and prints its diagonal elements.
*/
#include <stdio.h>

int main() {
    int n;
    //Input size of array
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];   //2D array of size n 

    //Take the input from user
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("\nElement [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    //Display the diagonal elements
    printf("\nNon-zero diagonal elements: ");
    for (int i =0; i<n; i++) {
        //Conditions to check and identify the diagonals
        if (matrix[i][i] != 0) {
            printf("%d ", matrix[i][i]);
        }//end if #1
        if (i != n -i - 1 && matrix[i][n - i-1] != 0) {
            printf("%d, ", matrix[i][n-i-1]);
        }//end if #2
    }//end for #2

    printf("\n");
    return 0;
}//end main function
