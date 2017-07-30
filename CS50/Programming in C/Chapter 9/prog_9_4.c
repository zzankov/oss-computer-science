// Function to determine if two strings are equal
#include <stdio.h>
#include <stdbool.h>

bool eqStr (const char s1[], const char s2[]) {
    int i = 0;
    bool areEqual;
    while ( s1[i] == s2[i] && s1[i] & s2[i] )
        i++;

    if ( !s1[i] && !s2[i] )
        areEqual = true;
    else
        areEqual = false;
    
    return areEqual;
}

int main (int argc, char *argv[])
{
    bool eqStr (const char s1[], const char s2[]);
    const char stra[] = "string compare test";
    const char strb[] = "string";

    printf ("%i\n", eqStr (stra, strb));
    printf ("%i\n", eqStr (stra, stra));
    printf ("%i\n", eqStr (strb, "string"));

    return 0;
}