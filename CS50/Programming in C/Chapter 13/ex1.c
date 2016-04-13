# include <stdio.h>

typedef int (*FunctionPtr)();

int gimme5(void)
{
    return 5;
}
int main(void)
{
    FunctionPtr g = gimme5;

    printf ("Gimme 5!\n%i\n", gimme5());
    printf ("Gimme 5!\n%i\n", g());

    return 0;
}
