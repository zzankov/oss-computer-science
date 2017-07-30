/*	Program to print each of the numbers of a user input integer using words
	for each of the digit.													 */

#include <stdio.h>

int main (int argc, char *argv[])
{
	long long int number, reverse = 0;

	printf ("Give me a number: ");
	scanf ("%lli", &number);

	do {
		reverse = reverse * 10 + number % 10;
		number /= 10;
	} while (number != 0);

	do {
		switch (reverse % 10) {
			case 1:
				printf ("one ");
				break;
			case 2:
				printf ("two ");
				break;
			case 3:
				printf ("three ");
				break;
			case 4:
				printf ("four ");
				break;
			case 5:
				printf ("five ");
				break;
			case 6:
				printf ("six ");
				break;
			case 7:
				printf ("seven ");
				break;
			case 8:
				printf ("eight ");
				break;
			case 9:
				printf ("nine ");
				break;
			case 0:
				printf ("zero ");
				break;
		}

		reverse /= 10;

	} while (reverse != 0);

	printf ("\n");

	return 0;

}