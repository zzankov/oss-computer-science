#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
#ifdef UNIX
	printf ("YAY!\n");
#else
	printf ("NAY!\n");
#endif

	return 0;
}