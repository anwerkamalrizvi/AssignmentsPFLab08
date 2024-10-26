/*
Name: Syed Anwer
Section: BAI-1A
Roll No: 24k-0033
Write a C program to find the saddle point(s) in a given 3x3 matrix. A saddle point 
is an element that is the smallest in its row and the largest in its column.
*/
#include <stdio.h>
int main() {
    const int n=3;  //length = 3 given
    int arr[n][n];  //3x3 matrix array
    //Enter elements of the array
    for(int i=0;i<n;++i){       //i represents coloum
        for(int j=0;j<n;++j){    //j represents rows
            printf("\nEnter element of coloum[%d] row[%d]: ",i+1,j+1);
            scanf("%d",&arr[i][j]);    //read arr[coloum][row]
        }//end for inner lbop 
    }//end for outer loop
    int target = 0;
    int store = 0;
    
    if(arr[0][0]<arr[0][1]&&arr[0][0]<arr[0][2]){            //col 0 row 0 < col 0 row 1?
        if(arr[0][0]>arr[1][0]&&arr[0][0]>arr[2][0]){
            target = arr[0][0];
        }
        else if(arr[1][0]>arr[2][0]&&arr[1][0]>arr[0][0]){
                printf("\nTrue");
                target = arr[1][0];
                }
        else if(arr[2][0]>arr[1][0]&&arr[2][0]>arr[0][0]){
                printf("\nTrue");
                target = arr[2][0];
            }
    }//end if
    else if(arr[0][1]<arr[0][2]&&arr[0][1]<arr[0][0]){
        if(arr[0][1]>arr[1][0]&&arr[0][1]>arr[2][0]){
            target = arr[0][1];
        }
        if(arr[1][1]>arr[1][0]&&arr[1][1]>arr[2][0]){
            target = arr[1][1];
        }
        if(arr[2][1]>arr[1][0]&&arr[2][1]>arr[2][0]){
            target = arr[2][1];
        }

    }//end if
    else if(arr[0][2]<arr[0][1]&&arr[0][2]<arr[0][0]){
        if(arr[0][2]>arr[1][0]&&arr[0][2]>arr[2][0]){
            target = arr[0][2];
        }
        if(arr[1][2]>arr[1][0]&&arr[1][2]>arr[2][0]){
            target = arr[1][2];
        }
        if(arr[2][2]>arr[1][0]&&arr[2][2]>arr[2][0]){
            target = arr[2][2];
        }

    }//end if
     
    else if(arr[1][0]<arr[1][1]&&arr[1][0]<arr[1][2]){            //col 1 row 0 < col 1 row 2? and < col 1 row 1
        printf("\nYes");
        if(arr[1][0]>arr[2][0]&&arr[1][0]>arr[0][0]){
            printf("\nTrue");
            target = arr[1][0];
        }
    }//end if
    else if(arr[1][1]<arr[1][2]&&arr[1][1]<arr[1][0]){
        if(arr[1][1]>arr[2][1]&&arr[1][1]>arr[0][1]){
            target = arr[1][1];
        }
    }//end if
    else if(arr[1][2]<arr[1][1]&&arr[1][2]<arr[1][0]){
        if(arr[1][2]>arr[2][2]&&arr[1][2]>arr[0][2]){
            target = arr[1][2];
        }
    }//end if

    //Display the matrix
    printf("\nYour entered matrix:\n");
    for(int i=0;i<n;++i){       //i represents coloum
        for(int j=0;j<n;++j){    //j represents rows
            printf("%d ",arr[i][j]);

        }//end for inner lbop 
        printf("\n");
    }//end for outer loop
    printf("\nSaddle point: %d",target);
    return 0;
}





















/*if(arr[n-3][n-3]<arr[n-2][n-3]){                //is arr 0 0 lesser than arr 1 0? col
        if(arr[n-3][n-3]<arr[n-1][n-3]){printf("\n1");            //is arr 0 0 lesser than arr 2 0? coloum...
            if(arr[n-3][n-3]>arr[n-3][n-2]){        //is arr 0 0 greater than arr 0 1? row cond
                if(arr[n-3][n-3]>arr[n-3][n-1]){    //is arr 0 0 greater than arr 0 2? row cond
                        target = arr[n-3][n-3];     //Yes! saddle point found, store in variable target
                }                                   
            }
        }
                                               //arr 2 0 is found greater than 0 0 and 1 0 !
        else if(arr[n-1][n-3]>arr[n-1][n-2]){ printf("\n1");        //is arr 2 0 greater than arr 2 1?
                if(arr[n-1][n-3]>arr[n-1][n-1]){ printf("\n1");   //if yes, is arr 2 0 greater than arr 2 2? target found!
                    target = arr[n-1][n-3];         //Yes arr 2 0 targetted
                }
            }
        
    }
*/