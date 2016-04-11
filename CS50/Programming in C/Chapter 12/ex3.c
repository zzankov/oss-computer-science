# include <stdio.h>
# define MIN(X,Y)   ((X)<(Y) ? (X) : (Y))
int main(void)
{
    int x, y;
    printf ("give me an integer x: ");
    scanf  ("%i", &x);
    printf ("give me an integer y: ");
    scanf  ("%i", &y);

    printf ("MIN(X,Y) = %i\n", MIN(x,y));
    return 0;
}
