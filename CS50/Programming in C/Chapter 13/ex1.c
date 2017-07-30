#include <stdio.h>

typedef int (*FunctionPtr)();

int gimme10(void) {
    return 10;
}

int main (int argc, char *argv[])
{
    FunctionPtr g = gimme10;

    printf ("%i\n", g());

    return 0;
}