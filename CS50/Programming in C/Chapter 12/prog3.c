#include <stdio.h>

#define STR(x) #x
#define printint(x) printf(#x " = %i\n", x)

#define printx(n) printint(x ## n)

int main (int argc, char *argv[])
{
	int num = 6;
	int xnum = 10;
	printint(num);

	printx(num);

	return 0;
}