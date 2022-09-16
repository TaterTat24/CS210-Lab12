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
    int inputValue;
    int factorial;

    printf("Give me an integer: ");
    scanf("%d", &inputValue);

    factorial = numFactorial(inputValue);
    printf("The factorial of %d is %d.\n", inputValue, factorial);

    return 0;
}