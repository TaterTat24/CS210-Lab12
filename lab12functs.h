/** lab12functs.h
 * =========================================================== 
 * Name: Benjamin Tat
 * Section: T6
 * Project: Iteration (for)
 * Purpose: 
 * =========================================================== */
#ifndef LAB12FUNCTS_H
#define LAB12FUNCTS_H

/**
* @brief numFactorial() calculates the factorial of a number.
* @param inputValue what the user wants to find the factorial of.
* @return integer - factorial number
* @pre N/A
* @post N/A
*/
int numFactorial(int inputValue);

/**
* @brief isPrime() determines if a given number is prime.
* @param inputValue the number that is to be determined to be prime
* @return 1 if prime number, 0 if not prime number.
* @pre N/A
* @post N/A
*/
int isPrime(int inputValue);

/**
* @brief floydsTriangle() prints a series of 1's and 0's in a triangle pattern
* @param inputValue - the height of the triangle.
* @return N/A
* @pre N/A
* @post N/A
*/
void floydsTriangle(int inputValue);

#endif