/*	Program to print each of the numbers of a user input integer using words
	for each of the digit.													 */

# include <stdio.h>

int main(void)
{

	signed long long int i = 1000000000000000000;
	
	while ( i > 100 ) {
		printf ("%lli\n",i);
		i /= 10;
	}
	
	for (i; i > 0; i /= 5)
	    printf("%lli\n",i);
	
	return 0;
}
