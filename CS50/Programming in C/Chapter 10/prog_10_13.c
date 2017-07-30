#include <stdio.h>

void copyString ( char *to, char *from)
{
    for ( ; *from; *to++ = *from++)
        ;
    *to = '\0';
}

int main (int argc, char *argv[])
{
    void copyString( char *to, char *from);
    char str1[] = "A string to be copied.";
    char str2[50];

    copyString(str2, str1);
    printf ("%s\n", str2);

    copyString(str2, "So is this.");
    printf ("%s\n", str2);

    return 0;
}