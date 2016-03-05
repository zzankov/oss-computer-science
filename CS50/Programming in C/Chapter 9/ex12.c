# include <stdio.h>
# include <stdbool.h>

float strToFloat (const char numeric_string[])
{
    int i = 0, j = 0, intValue;
    float result = 0;
    bool negative = false, post_dec = false;

    // check if the number is negative
    if ( numeric_string[i] == '-' ) {
        negative = true;
        i = 1;
    }

    // convert string to number
    while ( (numeric_string[i] >= '0' && numeric_string[i] <= '9') ||
            numeric_string[i] == '.' ) 
    {
        if (post_dec)
            j++;

        if (numeric_string[i] != '.')
        {
            intValue = numeric_string[i] - '0';
            result = result * 10 + intValue;
        }
        else if (numeric_string[i] == '.')
            post_dec = true;
        i++;
    }

    for ( i = 0; i < j; i++ )
        result /= 10;

    if ( negative )
        result *= -1;
    return result;
}

int main(void)
{
    int strToInt (const char numericString[]);
    printf ("%f\n", strToFloat("245"));
    printf ("%f\n", strToFloat("100") + 25);
    printf ("%f\n", strToFloat("13x5"));
    printf ("%f\n", strToFloat("-405"));
    printf ("%.4f\n", strToFloat("-405.8908"));
    printf ("%.4f\n", strToFloat("-867.6921"));
    return 0;
}
