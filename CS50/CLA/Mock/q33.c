# include <stdio.h>

char *f (char *p) {
    return p += 2;
}

char *g (char *p) {
    return --p;
}

int main(void) 
{
    char *s = "ABCDEFGHIJ";
    char p = *f(g(f(s + 1)));

    printf ("%d\n", p - 'A');

    return 0;
}
