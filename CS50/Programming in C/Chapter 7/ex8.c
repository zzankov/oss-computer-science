# include <stdio.h>

int main (void)
{
    void solve_quadratic (void);
    solve_quadratic();
}

void solve_quadratic (void)
{
    double a, b, c, epsilon = 0.00001;
    double x[2];
    double squareRoot (double x, double epsilon);

    printf ("Please provide coefficients 'a', 'b' and 'c': ");
    scanf  ("%lf%lf%lf", &a, &b, &c);

    if ( (b * b - 4 * a * c) < 0 )
        printf ("The roots of the equation are imaginary.\n");
    else
    {
        x[0] = (-b - squareRoot(b * b - 4 * a * c, epsilon)) / (2 * a);
        x[1] = (-b + squareRoot(b * b - 4 * a * c, epsilon)) / (2 * a);
        printf ("The roots of the equation are:\n");
        printf ("x1 = %lf\n", x[0]);
        printf ("x2 = %lf\n", x[1]);
    }
}

double squareRoot (double x, double epsilon)
{
    double guess = 1.0;
    double absoluteValue (double x);
    while ( absoluteValue ( guess * guess / x - 1 ) >= epsilon )
        guess = ( x / guess + guess ) / 2.0;
    return guess;
}

double absoluteValue (double x)
{
    if ( x < 0 )
        x = -x;
    return x;
}

