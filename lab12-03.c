/** lab12-03.c
 * =========================================================== 
 * Name: Benjamin Tat
 * Section: T6
 * Project: 12.6 Lab 12 - Floyd's Triangle
 * Purpose: In this lab, you will create a function called 
 *          floydsTriangle() that will print a series of 1's 
 *          and 0's in a triangle pattern. 
 * =========================================================== */
#include <stdio.h>
#include "lab12functs.h"

int main() {
    int inputValue;

    printf("Give me an integer: ");
    scanf("%d", &inputValue);
    
    floydsTriangle(inputValue);

    return 0;
}