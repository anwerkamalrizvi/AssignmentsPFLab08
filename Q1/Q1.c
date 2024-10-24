/*
Name: Syed Anwer
Section: BAI-1A
Roll No: 24k-0033
Section 1 Q: Write a C program to generate the following pattern:
1
1 2
1 2 3
1 2 3 4
*/

#include <stdio.h>

int main() {

    for(int i=1;i<=4;i++){      //starting from i = 1 to i <= 4 because the output should be end on 4
        for(int j=1;j<=i;j++){   
            printf("%d",j);      //Print j as j = i until j <= i 
        }
        printf("\n");            //Once the j != i, the inner loop exits and outer loop terminates
    }
    return 0;
}