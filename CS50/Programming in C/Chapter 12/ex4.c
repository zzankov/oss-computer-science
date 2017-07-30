#include <stdio.h>

#define MAX(x,y) ((x) < (y) ? (y) : (x))
#define MAX3(x,y,z) (MAX(MAX((x),(y)),(z)))

int main (int argc, char *argv[])
{
    int a = 5, b = 6, c = 9;
    printf ("MAX3(%i,%i,%i) = %i\n", a, b, c, MAX3(a, b, c));

    return 0;
}