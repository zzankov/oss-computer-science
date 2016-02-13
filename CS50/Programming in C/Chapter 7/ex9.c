# include <stdio.h>

int gcd (int u, int v)
{
    int temp;
    while ( v != 0 ){
        temp = u % v;
        u = v;
        v = temp;
    }
    return u;
}

int lcm (int u, int v)
{
    if ( u < 0 || v < 0 )
        return -1;
    else
        return (u * v / gcd (u, v));
}

int main (void)
{
    int u, v;

    printf ("Provide values for 'u' and 'v': ");
    scanf  ("%i%i", &u, &v);

    printf ("The least common multiple is %i.\n", lcm (u, v));
}
