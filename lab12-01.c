/** lab12-01.c
 * =========================================================== 
 * Name: Benjamin Tat
 * Section: T6
 * Project: 12.4 Lab 12 - Factorial
 * Purpose: In this lab, you will create a function called 
 *          numFactorial() that calculates the factorial of a 
 *          number. As a reminder, the factorial of n is defined 
 *          as the product of the numbers from 1 to n.
 * =========================================================== */
#include <stdio.h>
#include "lab12functs.h"

int main() {
    int integer;
    int factorial;

    printf("Give me an integer: ");
    scanf("%d", &integer);

    
    factorial = numFactorial(integer);
    printf("The factorial of %d is %d.\n", integer, factorial);

    return 0;
}