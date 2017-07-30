#include <stdio.h>

#define typename(x) _Generic((x),                                                 \
        _Bool: "_Bool",                  unsigned char: "unsigned char",          \
         char: "char",                     signed char: "signed char",            \
    short int: "short int",         unsigned short int: "unsigned short int",     \
          int: "int",                     unsigned int: "unsigned int",           \
     long int: "long int",           unsigned long int: "unsigned long int",      \
long long int: "long long int", unsigned long long int: "unsigned long long int", \
        float: "float",                         double: "double",                 \
  long double: "long double",                   char *: "pointer to char",        \
       void *: "pointer to void",                int *: "pointer to int",         \
      default: "other")

int main (int argc, char *argv[])
{
	float f = 1.00;
	short int i = 100;
	long int l = 500L;
	double d = 15.00;

	printf ("%s\t%g\n", typename(f + i),f + i);								// float 	101.0
	printf ("%s\t%g\n", typename(l / d),l / d);								// double 	33.33333
	printf ("%s\t%g\n", typename(i / l + f), i / l + f);					// float 	1.00
	printf ("%s\t%li\n", typename(l * i), l * i);							// long int 50000
	printf ("%s\t%g\n", typename(f / 2), f / 2);							// float 	0.5
	printf ("%s\t%g\n", typename(i / (d + f)), i / (d + f));				// double 	6.25
	printf ("%s\t%g\n", typename(l / (i * 2.0)), l / (i * 2.0));			// double 	2.5
	printf ("%s\t%g\n", typename(l + i / (double) l), l + i / (double) l);	// double	500.2

	return 0;
}