// Program to illustrate using pointers and functions
#include <stdio.h>

void test(int *intPtr)
{
    *intPtr = 100;
}

int main (int argc, char *argv[])
{
    void test(int *intPtr);
    int i = 50, *p = &i;

    printf ("Before the call to test i = %i\n", i);

    test(p);
    printf ("After the call to test i = %i\n", i);

    return 0;
}