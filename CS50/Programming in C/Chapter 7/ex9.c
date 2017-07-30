#include <stdio.h>

int gcd(int a, int b) {
    if (a % b != 0)
        return gcd(b, a % b);
    else
        return b;
}

int lcm (int a, int b) {
    int gcd(int a, int b);
    return a * b / gcd(a,b);
}

int main (int argc, char *argv[])
{
    int lcm (int a, int b);
    int gcd (int a, int b);

    printf ("lcm(%i, %i) = %i\n", 10, 15, lcm(10, 15));

    return 0;

}