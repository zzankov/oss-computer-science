#include <stdio.h>

int main (int argc, char *argv[])
{
    float myFloats[10], sum = 0;
    

    for (int i = 0; i < 10; i++) {
        printf ("Give me a float: ");
        scanf ("%f", &myFloats[i]);
    }

    for (int i = 0; i < 10; i++)
        sum += myFloats[i];
    
    printf ("The average of your floats is %f\n", sum / 10);

    return 0;
}