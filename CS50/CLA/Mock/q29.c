# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct S {
    char *S;
};

int main(void) {
    struct S *S = malloc(sizeof(struct S));
    S -> S = "123\0""45678";
    printf ("%d\n", strlen(S -> S + 5) + S -> S[3]);
    free(S);

    return 0;
}
