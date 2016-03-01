# include <stdio.h>

int strToInt (const char numeric_string[])
{
    int i, intValue, result = 0;
    for ( i = 0; numeric_string[i] >= '0' && numeric_string[i] <= '9'; ++i )
    {
        intValue = numeric_string[i] - '0';
        result = result * 10 + intValue;
    }
    return result;
}

int main(void)
{
    int strToInt (const char numericString[]);
    printf ("%i\n", strToInt("245"));
    printf ("%i\n", strToInt("100") + 25);
    printf ("%i\n", strToInt("13x5"));

    return 0;
}
