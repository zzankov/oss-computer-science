// Program to generate the first 15 Fibonacci numbers
# include <stdio.h>

int main(void)
{
	int     i;
    unsigned long long int      a = 0, b = 1, c = a + b;
    
    printf ("%llu   %llu   %llu   ", a, b, c);
	
	for ( i = 3; i < 15; ++i ) {
        a = b;
        b = c;
        c = a + b;
        printf ("%llu   ", c);
    }
    
    printf ("\n");

	return 0;
}
