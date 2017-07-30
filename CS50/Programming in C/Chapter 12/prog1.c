#include <stdio.h>

#define kIntSize 32		// *** machine dependent! ***

// Function to rotate an unsigned int left or right

unsigned int rotate (unsigned int value, int n)
{
	unsigned int result, bits;

	/* scale down the shift count to a defined range */

	if (n > 0)
		n %= kIntSize;
	else
		n = -(-n % kIntSize);

	if (n == 0)
		result = value;
	else if ( n > 0 ) {		// left rotate
		bits = value >> (kIntSize - n);
		result = value << n | bits;
	} else {				// right rotate
		n = -n;
		bits = value << (kIntSize - n);
		result = value >> n | bits;
	}

	return result;
}

int main (int argc, char *argv[])
{
	printf ("%i\n", rotate(5,3));

	return 0;
}