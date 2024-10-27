/*              بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
* Name: Syed Anwer
* Section: BAI-1A
* Roll No: 24k-0033
Write a C program to generate a diamond shape pattern using nested loops. The program
should take the number of rows for the upper half of the diamond as input from the user.
*/
#include <stdio.h>

int main() {
    int n; 
    printf("Enter length: "); 
    scanf("%d",&n);
    int count=0;
    int counter=0;
    for(int i=n;i>0;i--,count++){
        for(int j=0;j<2*i-2;j++){
            printf(" ");
        }
        for(int k=0;k<count;k++){
            printf("* ");
            printf("  ");
        }
        
        printf("*");
        printf("\n");
    }
    int count2=1;
    for(int i=n-1;i>0;i--){
        for(int sp=0;sp<2*count2-2;sp++){
                printf(" ");
        }count2++;
        for(int k=count-1;k>0;k--){
            printf("  ");
            printf("* ");
              
       
        }
        count--;
        
        printf("\n");
    }
    return 0;
}