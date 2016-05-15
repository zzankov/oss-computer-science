# include <stdio.h>
# include <string.h>

struct S {
    char S[8];
};

int main(void)
{
    struct S S = {'a', 'b', 'c', 'd'};
    printf ("sizeof(S.S) = %i, strlen(S.S) = %i, S.S[4] = %i\n",
            sizeof(S.S), strlen(S.S), S.S[4]);

    printf ("%d\n", sizeof(S.S) - strlen(S.S) + S.S[4]);

    return 0;
}
