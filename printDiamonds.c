/*
challenge: write a function to print a "diamond" on the stdout
input: one odd integer - 1, 3, 5, ... (you don't have to validate, in the interest of time)
output: a printout of a "diamond" on stdout

1:
*

3:
 *
***
 *
 
5:
  *
 ***
*****
 ***
  *

*/

#include <stdio.h>

void printDiamond(int currStars, int maxStars);
void printStars(int stars, int max);

int main(void) {
    int stars = 0;

    printf("Input one odd integer: ");
    scanf("%d", &stars);
    printDiamond(1, stars);

    return 1;
}

// print diamond recursively
void printDiamond(int currStars, int maxStars) {
    if (currStars == maxStars) {
        printStars(currStars, maxStars);
    } else {
        printStars(currStars, maxStars);
        printDiamond(currStars + 2, maxStars);
        printStars(currStars, maxStars);
    }
}

// print stars
void printStars(int stars, int max) {
    int spaces = (max - stars) / 2;
   
    for (int i =0; i<spaces; i++) {
        printf(" ");
    }
    for (int j=0; j < stars; j++) {
        printf( "*");
    }
    printf("\n");
}