# include <stdio.h>
struct S {
    int S[3];
};

void f(struct S S) {
    S.S[0] = S.S[1] + S.S[2] - 4;
}

int main(void) {
    struct S S = { {1, 4, 2} };
    f(S);
    printf ("%d\n", S.S[1] * S.S[0]);

    return 0;
}
