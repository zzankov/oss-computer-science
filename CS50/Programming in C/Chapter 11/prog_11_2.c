# include <stdio.h>

int main(void)
{
    unsigned int w1 = 0525u, w2 = 0707u, w3 = 0122u;
    printf ("\nIn integer terms\n");
    printf ("----------------\n");
    printf ("word1 = %i, word2 = %i, word3 = %i\n", w1, w2, w3);
    printf ("w1 & w2 = %i, w1 | w2 = %i, w1 ^ w2 = %i\n", 
            w1 & w2, w1 | w2, w1 ^ w2);
    printf ("~w1 = %i, ~w2 = %i, ~w3 = %i\n", ~w1, ~w2, ~w3);
    printf ("w1 ^ w1 = %i, w1 & ~w2 = %i, w1 | w2 | w3 = %i\n", 
            w1 ^ w1, w1 & ~w2, w1 | w2 | w3);
    printf ("w1 | w2 & w3 = %i, w1 | w2 & ~w3 = %i\n", 
            w1 | w2 & w3, w1 | w2 & ~w3);
    printf ("~(w1 & ~w2) = %i, ~(~w1 | ~w2) = %i\n", 
            ~(w1 & ~w2), ~(~w1 | ~w2));
    printf ("Swapping out two numbers\n");
    printf ("w1 = %i, w2 = %i\n", w1, w2);
    printf ("w1 = w1 ^ w2 = %i\n", w1 ^ w2);
    w1 ^= w2;
    printf ("w2 = w2 ^ w1 = %i\n", w2 ^ w1);
    w2 ^= w1;
    printf ("w1 = w1 ^ w2 = %i\n", w1 ^ w2);
    w1 ^= w2;
    printf ("w1 = %i, w2 = %i\n", w1, w2);

    printf ("\nIn octal numbers\n");
    printf ("------------------\n");
    printf ("word1 = %o, word2 = %o, word3 = %o\n", w1, w2, w3);
    printf ("w1 & w2 = %o, w1 | w2 = %o, w1 ^ w2 = %o\n", 
            w1 & w2, w1 | w2, w1 ^ w2);
    printf ("~w1 = %o, ~w2 = %o, ~w3 = %o\n", ~w1, ~w2, ~w3);
    printf ("w1 ^ w1 = %o, w1 & ~w2 = %o, w1 | w2 | w3 = %o\n", 
            w1 ^ w1, w1 & ~w2, w1 | w2 | w3);
    printf ("w1 | w2 & w3 = %o, w1 | w2 & ~w3 = %o\n", 
            w1 | w2 & w3, w1 | w2 & ~w3);
    printf ("~(w1 & ~w2) = %o, ~(~w1 | ~w2) = %o\n", 
            ~(w1 & ~w2), ~(~w1 | ~w2));
    printf ("Swapping out two numbers\n");
    printf ("w1 = %o, w2 = %o\n", w1, w2);
    printf ("w1 = w1 ^ w2 = %o\n", w1 ^ w2);
    w1 ^= w2;
    printf ("w2 = w2 ^ w1 = %o\n", w2 ^ w1);
    w2 ^= w1;
    printf ("w1 = w1 ^ w2 = %o\n", w1 ^ w2);
    w1 ^= w2;
    printf ("w1 = %o, w2 = %o\n", w1, w2);

    return 0;
}
