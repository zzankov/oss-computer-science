/*  Program to calculate the 200th triangular number
    Introduction to the for statement               */
#include <stdio.h>

int main (int argc, char *argv[])
{
    int triangularNumber = 0;

    for(int n = 1; n <= 200; n++, triangularNumber += n)
        ;
    
    printf ("The 200th Triangular number is %i\n", triangularNumber);

    return 0;
}