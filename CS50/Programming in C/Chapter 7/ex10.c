#include <stdio.h>

_Bool prime(int n) {
    if (n == 2)
        return 1;
    else if (n < 2 || n % 2 == 0)
        return 0;
    else
        for (int i = 3; i * i <= n; i += 2)
            if (n % i == 0)
                return 0;
    return 1;
}

int main (int argc, char *argv[])
{
    _Bool prime(int n);

    for (int i = 1; i < 100; i++)
        if (prime(i))
            printf ("%i ", i);

    printf ("\n");

    return 0;
}