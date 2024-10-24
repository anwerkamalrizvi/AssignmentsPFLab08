/*
Name: Syed Anwer
Section: BAI-1A
Roll No: 24k-0033
Section 3 Q: Create a 3D array representing 2 pages of a 3x3 matrix. Initialize it and find the sum of all the
elements on each page.
*/

#include <stdio.h>

int main() {
    int n=3;  //given length 3
    int arr[n][n][n];   //layers, coloum and rows
    //layers must be 2 as given so. 
    for(int i=0;i<2;i++){  //so actually we will take 1 inner nested with one more nested inner for 3D array  
        for(int j=0;j<n;j++){   //i, j, k for layer, coloum and rows
            for(int k=0;k<n;k++){
                printf("\nEnter element[%d][%d][%d]: ",i,j,k);
                scanf("%d",&arr[i][j][k]);
            }//end for inner inner
        }//end for inner
    }//end for real outer

    //To display the result array:
    printf("\nYou entered: \n");
    int sum=0; //to calculate the sum of the entered array
    for(int i=0;i<2;i++){    
        for(int j=0;j<n;j++){   //i, j, k for layer, coloum and rows
            for(int k=0;k<n;k++){
                printf("%d\t",arr[i][j][k]);
                //to calculate the sum,
                sum = sum + arr[i][j][k];
            }//end for inner inner
            printf("\n"); //Just for sequence as we are required to display a square matrix so we use \n for both inner and the outer
        }//end for inner
        printf("\n");
    }//end for real outer
    //Display the sum
    printf("\n\tTotal sum is %d\n",sum);
    return 0;
}