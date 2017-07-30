#include <stdio.h>
#include <ctype.h>

#define ISLOWER(c) ((c) >= 'a' && (c) <= 'z')
#define ISUPPER(c) ((c) >= 'A' && (c) <= 'Z')
#define ISALPHA(c) (ISLOWER((c)) || ISUPPER((c)))
#define ISDIGIT(c) ((c) >= '0' && (c) <= '9')
#define ISSPECIAL(c) !(ISALPHA((c)) || ISDIGIT((c)))

int main (int argc, char *argv[])
{
	printf ("Testing for upper case: \n");
	printf ("ISUPPER(%c) = %i\n", 'F', ISUPPER('F'));
	printf ("ISUPPER(%c) = %i\n", 'f', ISUPPER('f'));
	printf ("isupper(%c) = %i\n", 'F', isupper('F'));
	printf ("isupper(%c) = %i\n", 'f', isupper('f'));

	printf ("\nTesting for alphabetic characters: \n");
	printf ("ISALPHA(%c) = %i\n", 'F', ISALPHA('F'));
	printf ("ISALPHA(%c) = %i\n", '5', ISALPHA('5'));
	printf ("isalpha(%c) = %i\n", 'F', isalpha('F'));
	printf ("isalpha(%c) = %i\n", '5', isalpha('5'));
	
	printf ("\nTesting for digits: \n");
	printf ("ISDIGIT(%c) = %i\n", 'F', ISDIGIT('F'));
	printf ("ISDIGIT(%c) = %i\n", '5', ISDIGIT('5'));
	printf ("isdigit(%c) = %i\n", 'F', isdigit('F'));
	printf ("isdigit(%c) = %i\n", '5', isdigit('5'));

    return 0;
}