/** lab12functs.c
 * =========================================================== 
 * Name: Benjamin Tat
 * Section: T6
 * Project: Iteration (for)
 * Purpose: 
 * =========================================================== */

int numFactorial(int integer) {
    int runningSum = 1;
    int i;
    for (i = 1; i <= integer; ++i) {
        runningSum = runningSum * i;
    }
    return runningSum;
}