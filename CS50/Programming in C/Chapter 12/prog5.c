#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{

#if OS == 1
	printf("MAC OS\n");
#elif OS == 2
	printf("Windows\n");
#elif OS == 3
	printf("Linux\n");
#else
	printf("OS not recognized!\n");
#endif
}