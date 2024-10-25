/*Name: Syed Anwer
Section: BAI-1A
Roll No: 24k-0033
Generate a pattern of odd numbers in decreasing order starting from a user-specified number using nested loops.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter any integer: ");
    scanf("%d",&n);
    int arr[n];
    int j;
    printf("\nOdd numbers: ");
    for(int i=n;i>0;i--){
        int flag =1;
        for(j=0;j<n;j++){
            if(i%2!=0){
                arr[j] = i;
                flag=1;
                break;
            }
            else{
                flag=0;
                break;
            }
           
        }
        if(flag==1){
        printf("\t%d",arr[j]);
    }   
    }//endfor
  
    return 0;
}
