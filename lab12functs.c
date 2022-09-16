/** lab12functs.c
 * =========================================================== 
 * Name: Benjamin Tat
 * Section: T6
 * Project: Iteration (for)
 * Purpose: 
 * =========================================================== */
#include <stdio.h>

int numFactorial(int inputValue) {
    int runningSum = 1;
    int i;
    for (i = 1; i <= inputValue; i++) {
        runningSum = runningSum * i;
    }
    return runningSum;
}

int isPrime(int inputValue) {
    int i;
    int j;
    int prime = 1;

    for (i = 1; i <= inputValue; i++) {
        for (j = 1; j <= inputValue; j++) {
            if (i * j == inputValue) {
                if (((i != inputValue) && (j != inputValue)) && ((i != 1) || (j != 1))) {
                    prime = 0;
                }
            }
        }
    }
    return prime;
}

void floydsTriangle(int inputValue) {
    int i;
    int j;
    for (i = 1; i <= inputValue; i++) {
        for (j = 1; j <= i; j++) {
            if (i % 2 == 1) {
                if (j % 2 == 1) {
                    printf("1");
                }
                else {
                    printf("0");
                }
            }
            else {
                if (j % 2 == 0) {
                    printf("1");
                }
                else {
                    printf("0");
                }
            }
        }
        printf("\n");
    }
}