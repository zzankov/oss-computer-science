/*	Program to print each of the numbers of a user input integer using words
	for each of the digit.													 */

# include <stdio.h>

int main(void)
{
	signed long long int num;
	signed long long int i = 1000000000000000000;
	int digit;
	_Bool isZero = 0;
	
	printf ("Please give me a positive integer: ");
	scanf  ("%llu", &num);
	
	if ( num < 0 ) {
		num = -num;
		printf ("The number you have given me is negative. ");
		printf ("%llu will be used instead.\n", num);
	} else if ( num == 0 ) {
		isZero = 1;
	}
	
	if ( isZero ) {
		printf ("zero\n");
	}
	else {
		while ( (num / i) == 0 ) {
			i /= 10;
		}
	
		for ( i ; i > 0; i /= 10) {
			digit = num / i;
			
			switch ( digit ) {
			    
			    case 0:
			        printf ("zerp");
			        break;
			        
			    case 1:
			        printf ("one");
			        break;
			        
			    case 2:
			        printf ("two");
			        break;
			        			        
			    case 3:
			        printf ("three");
			        break;
			        			        
			    case 4:
			        printf ("four");
			        break;
			        			        
			    case 5:
			        printf ("five");
			        break;
			        			        
			    case 6:
			        printf ("six");
			        break;
			        			        
			    case 7:
			        printf ("seven");
			        break;
			        			        
			    case 8:
			        printf ("eight");
			        break;
			        
			    case 9:
			        printf ("nine");
			        break;
			}
			
		    printf (" ");
			num %= i;
		}
	}
	
	printf ("\n");
	
	return 0;
}
