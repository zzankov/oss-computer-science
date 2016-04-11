# include <stdio.h>
# define MAX(X,Y) ((X)>(Y)?(X):(Y))
# define MAX3(X,Y,Z) (MAX((MAX((X),(Y))),(MAX((Y),(Z)))))

int main(void)
{
    int a, b, c;

    printf ("Give me integer x: ");
    scanf  ("%i", &a);
    printf ("Give me integer y: ");
    scanf  ("%i", &b);
    printf ("Give me integer z: ");
    scanf  ("%i", &c);

    printf ("MAX3(X,Y,Z) = %i\n", MAX3(a,b,c));

    return 0;
}
