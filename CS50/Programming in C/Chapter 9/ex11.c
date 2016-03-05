# include <stdio.h>
# include <stdbool.h>

int strToInt (const char numeric_string[])
{
    int i = 0, intValue, result = 0;
    bool negative = false;
    if ( numeric_string[i] == '-' ) {
        negative = true;
        i = 1;
    }

    while ( numeric_string[i] >= '0' && numeric_string[i] <= '9' )
    {
        intValue = numeric_string[i] - '0';
        result = result * 10 + intValue;
        i++;
    }

    if ( negative )
        result *= -1;
    return result;
}

int main(void)
{
    int strToInt (const char numericString[]);
    printf ("%i\n", strToInt("245"));
    printf ("%i\n", strToInt("100") + 25);
    printf ("%i\n", strToInt("13x5"));
    printf ("%i\n", strToInt("-405"));

    return 0;
}
