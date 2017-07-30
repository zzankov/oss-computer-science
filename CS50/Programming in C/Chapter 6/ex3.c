#include <stdio.h>

int main (int argc, char *argv[])
{
	int ratingCounters[11], response;

	// initialize array
	for (int i = 1; i <= 10; i++)
		ratingCounters[i] = 0;

	printf("Enter your responses\n");

	do {
		scanf("%i", &response);

		if ( (response < 1 || response > 10) && response != 999)
			printf ("Bad response: %i\n", response);
		else if (response != 999)
			++ratingCounters[response];

	} while (response != 999);

	printf ("\n\nRating\tNumber of Responses\n");
	printf ("------\t-------------------\n");
	for (int i = 1; i <= 10; ++i)
		printf("%4i\t%10i\n", i, ratingCounters[i]);
	
	return 0;
}