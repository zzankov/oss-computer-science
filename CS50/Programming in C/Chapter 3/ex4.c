# include <stdio.h>

int main (int argc, char argv[])
{
    float celcius = 27;
	float fahrenheit;

	fahrenheit = celcius * 1.8 + 32;

	printf("%g degrees Celcius is %g degrees Fahrenheit\n", 
		celcius, fahrenheit);
	
	return 0;
}