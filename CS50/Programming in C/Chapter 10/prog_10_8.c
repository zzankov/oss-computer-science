# include <stdio.h>
void test (int *intPtr)
{
    *intPtr = 100;
}

int main(void)
{
    void test (int *intPtr);
    int i = 50, *p = &i;

    printf ("Before the call to test i = %i and p = %i\n", i, *p);
    test(p);
    printf ("After the call to test i = %i and p = %i\n", i, *p);

    return 0;
}
