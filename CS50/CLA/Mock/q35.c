# include <stdio.h>

struct S {
    int S[3];
};

void f(struct S *S) {
    S -> S[2] = 6 * S->S[0] + S->S[1];
}

int main(void)
{
    struct S S = { { 1, 2} }, *P = &S;
    f(P);

    printf ("%d\n", S.S[2] / S.S[0]);

    return 0;
}
