#include <stdio.h>

#define ISLEAP(y) (!((y) % 4) && ((y) % 100) || !((y) % 400))
#define SQUARE(x) ((x) * (x))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define ISLOWER(c) (((c) >= 'a' && (c) <= 'z'))
#define TOUPPER(c) (ISLOWER(c) ? (c) - 'a' + 'A' : (c))

#define debugPrintf(...) printf("DEBUG:" __VA_ARGS__);

int main (int argc, char *argv[])
{
	debugPrintf ("%i\n", ISLEAP(2014));
	debugPrintf ("%i\n", ISLEAP(2016));
	debugPrintf ("%i\n", ISLEAP(2016 + 16));

	debugPrintf ("%i\n", SQUARE(5));
	debugPrintf ("%i\n", SQUARE(15));

	debugPrintf ("%i\n", MAX(10,12));

	debugPrintf ("%c\n", TOUPPER('a'));

	return 0;
}