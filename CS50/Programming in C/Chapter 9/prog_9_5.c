// Program to illustrate the %s scanf format charaters
#include <stdio.h>

int main (int argc, char *argv[])
{
    char s1[81], s2[81], s3[81];

    printf ("Enter text:\n");

    scanf ("%80s%80s%80s", s1, s2, s3);

    printf ("\ns1 = %s\ns2 = %s\ns3 = %s\n", s1, s2, s3);
    return 0;
}