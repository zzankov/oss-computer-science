# include <stdio.h>

void substring(const char source[], int start, int count, char result[])
{
    int i;
    for ( i = 0; i < count; i++ )
        result[i] = source[start + i];
    result[i] = '\0';
}

int main (void)
{
    char result[50];
    void substring(const char source[], int start, int count, char result[]);

    substring("character", 4, 3, result);
    printf ("%s\n", result);
    return 0;
}
