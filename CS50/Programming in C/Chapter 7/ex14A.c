#include <stdio.h>

int gNums[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

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

    for (int i = 1; i < 13; i++)
        if (prime(gNums[i]))
            printf ("%i ", gNums[i]);

    printf ("\n");

    return 0;
}