/*
* Name: Syed Anwer
* Section: BAI-1A
* Roll No: 24k-0033
* Write a C program to multiply two matrices of size 3x3 and display the result matrix.
*/ 
#include <stdio.h>

int main() {
    const int n=3;  //example:
    int arr[3][3]; //= {{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3]; //= {{1,2,3},{4,5,6},{7,8,9}}; 
    printf("\tMATRIX 1:");
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            printf("\nElement[%d][%d]: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }//end for nested
    }//end for inner
  
    
    printf("\tMATRIX 2:");
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            printf("\nElement[%d][%d]: ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }//end for nested
    }//end for inner
    printf("\nMatrix 1: \n");
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            printf("%d ",arr[i][j]);
        }//end for nested
        printf("\n");
    }//end for inner

    printf("\nMatrix 2: \n");
     for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            printf("%d ",arr2[i][j]);
        }//end for nested
        printf("\n");
    }//end for inner
    int count=0,counterforwarehouse=0, store=0, sum=0, p=0,temp=0;
    int warehouse[n][n];
    for(int i=0;i<9;++i){
        for(int j=0;j<n;++j){           //example of resultant matrix element: 0,0
            store= arr[count][j]*arr2[j][temp];   //suppose arr[0][0] = 1 and arr2[0][0] = 1 so store[0][0] = 1 | element of both is 1 next 0,1*1,0 = 1*1  | element of both is 1, next: j++ 0,2*2,0 = 1*1 = 1
            sum = sum + store;     //sum =sum +1 = 1 for 0,0 | sum = sum(1) + 1=2 | sum = sum(2) + 1    
            //For checking the values for dryrun: //printf("\nI am j %d",j);  //printf("\nI am i %d",i);  //printf("\nI am count %d",count);  //printf("\nI am sum %d",sum);
        }//end for nested
        temp++;
        if(temp==3){
            temp=0;
            count++;
        }
        p+=1;  //p increases from 1 to n
        for(int s=0;s<n;s++){
            for(int t=counterforwarehouse;t<p;t++){
                warehouse[s][t]=sum;
                break;
            }  
        }//end for
        counterforwarehouse++; //printf("\nI am sum: %d",sum);         
        sum=0;                          //reset sum to 0 again to continue adding other elements!
    }//end for inner
    printf("\nResultant Matrix is:\n");
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            printf("%d ",warehouse[i][j]);
        }//end for nested
        printf("\n");
    }//end for inner
    return 0;
}//end main no way