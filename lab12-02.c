/** lab12-02.c
 * =========================================================== 
 * Name: Benjamin Tat
 * Section: T6
 * Project: 12.5 Lab 12 - Prime Numbers
 * Purpose: In this lab, you will create a function called 
 *          isPrime() that that determines if a given number 
 *          is prime. As a reminder, a prime if it is only 
 *          divisible by itself and 1.
 * =========================================================== */
#include <stdio.h>
#include "lab12functs.h"

int main() {
    int inputValue;

    printf("Give me an integer: ");
    scanf("%d", &inputValue);

    if (isPrime(inputValue) == 1) {
        printf("%d is a prime number.\n", inputValue);
    }
    else {
        printf("%d is not a prime number\n", inputValue);
    }
    
    return 0;
}