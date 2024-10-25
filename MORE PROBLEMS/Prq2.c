/*Name: Syed Anwer
Section: BAI-1A
Roll No: 24k-0033
Write a C program that generates a sequence of prime numbers within a given range using nested loops.
*/

#include <stdio.h>

int main() {
    int s, n, i, j;

    // Input range 
    printf("Enter the starting number of the range: ");
    scanf("%d", &s);
    printf("Enter the ending number of the range: ");
    scanf("%d", &n);

    printf("Prime numbers between %d and %d are:\n", s, n);

    //nested for as requirement and to identify whether its prime or not...
    for (i = s; i <= n; i++) {
        int Prime = 1; // Assume the number is prime
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                Prime = 0; // Number is not prime false!
                break;     // Exit the inner loop if a divisor is found used break
            }//end if
        }//emd for

        //If Prime is 1, then the number is therefor prime
        if (Prime == 1 && i > 1) { // Also check if i is greater than 1
            printf("%d\t ", i);
        }//end if
    }//end for outer 
    printf("\n");
    return 0;
}//end main no way
