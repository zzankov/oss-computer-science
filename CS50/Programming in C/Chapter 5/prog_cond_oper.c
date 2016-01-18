// testing out the conditional operator

# include <stdio.h>

int main(void)
{
    int     maxValue;
    float   value1, value2;
    
    printf ("Please give me 2 values: ");
    scanf  ("%f%f", &value1, &value2);
    
    printf ("Sign of %.4f is %i.\n", value1, ( value1 < 0 ) ? -1 : ( value1 == 0 ) ? 0 : 1);
    printf ("Sign of %.4f is %i.\n", value2, ( value2 < 0 ) ? -1 : ( value2 == 0 ) ? 0 : 1);
    
    printf ("The larger of %.4f and %.4f is %.4f.\n", value1, value2, ( value1 > value2 ) ? value1 : value2 );  
    
    return 0;
}
