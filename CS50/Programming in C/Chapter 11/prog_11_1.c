# include <stdio.h>

void to_bin(int n)
{
    while (n) {
        if ( n & 1 )
            printf ("1");
        else
            printf ("0");

        n >>= 1;
    }
    printf ("\n");
}
int main(void)
{
    unsigned int word1 = 077u, word2 = 0150u, word3 = 0210u;
    printf ("%o ", word1 & word2);
    printf ("%o ", word1 & word1);
    printf ("%o ", word1 & word2 & word3);
    printf ("\n");

    printf ("----------------------------------------------\n");
    printf ("In binary terms:\n");
    printf ("word1 = %i, and in binary ", word1);
    to_bin(word1);
    printf ("word2 = %i, and in binary ", word2);
    to_bin(word2);
    printf ("word3 = %i, and in binary ", word3);
    to_bin(word3);

    printf ("word1 & word2 = %i or in binary ", word1 & word2);
    to_bin(word1 & word2);
    printf ("word1 & word1 = %i or in binary ", word1 & word1);
    to_bin(word1 & word1);
    printf ("word1 & word2 & word3 = %i or in binary ", word1 & word2 & word3);
    to_bin(word1 & word2 & word3);

    return 0;
}
