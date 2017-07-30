// Modified program to generate Prime numbers

#include <stdio.h>
#include <stdbool.h>

int main (int argc, char *argv[])
{
	int primes[50], primeIndex = 2;
	bool isPrime;

	primes[0] = 2;
	primes[1] = 3;

	for ( int p = 5; p <= 50; p = p + 2) {
		isPrime = true;

		for ( int i = 1; isPrime && p / primes[i] >= primes[i]; i++)
			if ( p % primes[i] == 0 )
				isPrime = false;

		if (isPrime) {
			primes[primeIndex] = p;
			++primeIndex;
		}
	}

	for ( int i = 0; i < primeIndex; ++i)
		printf ("%i ", primes[i]);

	printf ("\n");

	return 0;

}