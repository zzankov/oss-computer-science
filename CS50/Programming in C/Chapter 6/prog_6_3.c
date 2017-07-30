// Program to generate the first 15 Fibonacci numbers
#include <stdio.h>

int main (int argc, char *argv[])
{
	int Fibonacci[15];

	Fibonacci[0] = 0;		// by definition
	Fibonacci[1] = 1;		// ditto

	for ( int i = 2; i < 15; i++)
		Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];

	for ( int i = 0; i < 15; ++i)
		printf ("%i\n", Fibonacci[i]);
	
	return 0;
}