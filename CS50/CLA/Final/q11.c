#include <stdio.h>

int main(void) {
    	int X = 1, Y = 2, Z;
    
    	Z = X / Y * --X * Y++;

	printf("%d\n", X);

	return 0;

}
