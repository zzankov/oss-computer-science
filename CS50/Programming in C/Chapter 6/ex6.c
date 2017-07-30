// Program to generate the first 15 Fibonacci numbers
#include <stdio.h>

int main (int argc, char *argv[])
{
    int f1 = 0, f2 = 1, f3; 
    printf ("%i\n", f1);
    printf ("%i\n", f2);
	for ( int i = 2; i < 15; i++) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        printf ("%i\n", f3);
    }

	return 0;
}