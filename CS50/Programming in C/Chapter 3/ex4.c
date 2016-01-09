# include <stdio.h>

int main(void)
{
    float C, F = 27.0;
    
    C = (F - 32) / 1.8;
    
    printf ("%g degrees Fahrenheit (F) is %g degrees Celsius (C).\n", F, C);
    
    return 0;
}
