#include <stdio.h>

int main (int argc, char *argv[])
{
	int ratingCounters[11], response;

	// initialize array
	for (int i = 1; i <= 10; i++)
		ratingCounters[i] = 0;

	printf("Enter your responses\n");

	for (int i = 1; i <= 20; ++i) {
		scanf ("%i", &response);

		if ( response < 1 || response > 10 )
			printf ("Bad response: %i\n", response);
		else
			++ratingCounters[response];
	}

	printf ("\n\nRating\tNumber of Responses\n");
	printf ("------\t-------------------\n");
	for (int i = 1; i <= 10; ++i)
		printf("%4i\t%10i\n", i, ratingCounters[i]);
	
	return 0;
}