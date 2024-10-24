/*
Name: Syed Anwer
Section: BAI-1A
Roll No: 24k-0033
Section 2 Q: Write a program to take a 2D array input from the user and display its transpose.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the length: ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){  //take input from user 
        for(int j=0;j<n;j++){    //nested loop is required to take input from user in a 2D array
            printf("\nEnter Element[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }//end for inner loop 1
    }//end for no way

    printf("\nEntered elements are:\n");
    for(int i=0;i<n;i++){       //to display the result 
        for(int j=0;j<n;j++){    //nested loop to display 2D array
            printf("%d\t",arr[i][j]);
        }
        printf("\n");  //to display in a matrix sequence.
    }//end for

    printf("\nAfter transpose:\n");
    for(int i=0;i<n;i++){       //to display the result 
        for(int j=0;j<n;j++){    //nested loop to display 2D array
            printf("%d\t",arr[j][i]);  //Simple rows will become coloum
        }
        printf("\n");    //to display in a matrix sequence.
    }//end for
    return 0;
}//end main