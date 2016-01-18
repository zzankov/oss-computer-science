# include <stdio.h>

int main(void)
{
    int     value1, value2;
    
    printf ("Please give me 2 integers: ");
    scanf  ("%i%i", &value1, &value2);
    
    if ( value1 % value2 == 0 )
        printf ("Number %i is evenly divisable by number %i.\n", value1, 
            value2);
    else
        printf ("Number %i is not evenly divisable by number %i.\n",
            value1, value2);
    
    return 0;
}
