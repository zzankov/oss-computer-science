#include <stdio.h>
#include <float.h>

int main (int argc, char *argv[])
{
	printf ("%.7lF\n", FLT_EPSILON);
	printf ("%.16lF\n", DBL_EPSILON);
	printf ("%.19LF\n", LDBL_EPSILON);
	printf ("%.19Lg\n", DEC128_EPSILON);

	return 0;
}