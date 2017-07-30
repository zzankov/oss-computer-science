#include <stdio.h>

int calculateTriangularNumber (int n) {
    int triNum = 0;

    for (int i = 1; i <= n; ++i)
        triNum += i;

    return triNum;
}

int main (int argc, char *argv[])
{
    printf ("triNum of 10 is %i\n",calculateTriangularNumber(10));
    printf ("triNum of 20 is %i\n",calculateTriangularNumber(20));
    printf ("triNum of 30 is %i\n",calculateTriangularNumber(30));

    return 0;
}