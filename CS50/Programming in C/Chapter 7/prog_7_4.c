#include <stdio.h>

void calculateTriangularNumber (int n) {
    int triNum = 0;

    for (int i = 1; i <= n; ++i)
        triNum += i;

    printf ("Triangular number %i is %i\n", n, triNum);
}

int main (int argc, char *argv[])
{
    calculateTriangularNumber(10);
    calculateTriangularNumber(20);
    calculateTriangularNumber(30);

    return 0;
}