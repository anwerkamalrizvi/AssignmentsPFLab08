/*Name: Syed Anwer
Section: BAI-1A
Roll No: 24k-0033
Write a C program that generates a sequence of prime numbers within a given range using nested loops.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter any integer: ");
    scanf("%d",&n);
    int arr[n];
    int j;
    int temp=0;
    for(int i=2;i<n;i++){
        if(n%i!=0){
            temp = (n%i);
            for(j=0;j<n;j++){
                arr[j] = temp;
                break;
            }//end for
            temp=0;
            continue;
        }//end if
        else{
            continue;
        }
    }//end for

    printf("\nThe prime number sequence:\n");
    for(int i=0;i<j;i++){
        printf("%d, ", arr[i]);
    }//end for
    return 0;
}//end main no way