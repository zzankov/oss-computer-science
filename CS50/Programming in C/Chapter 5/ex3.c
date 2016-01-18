# include <stdio.h>

int main(void)
{
    int     value1, value2;
    
    printf ("Please give me two integer values: ");
    scanf  ("%i%i", &value1, &value2);
    
    if ( value2 == 0 )
        printf ("Division by zero\n");
    else
        printf ("%i divided by %i is %.3f.\n", value1, value2, (float) value1 / value2);
    
    return 0;
}
