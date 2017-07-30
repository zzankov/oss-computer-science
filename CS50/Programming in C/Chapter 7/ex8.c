#include <stdio.h>

int main (int argc, char *argv[])
{
    double a, b, c;
    double squareRoot (double x);
    double discriminant (double a, double b, double c);
    double roots (double a, double b, double c, _Bool x);

    printf ("Type in values for a, b and c: ");
    scanf ("%lf %lf %lf", &a, &b, &c);

    if (discriminant(a, b, c) < 0)
        printf ("The roots of the equation are imaginary\n");
    else
        printf ("The roots of the equation are x1 = %.4f, x2 = %.4f\n",
            roots(a, b, c, 0), roots(a, b, c, 1));

    return 0;
}

double squareRoot (double x) {
    const double epsilon = 0.000000001;
    static double guess = 1;
    guess = (x / guess + guess) / 2.0;

    if ((float)(guess * guess - x) >= epsilon)
        return squareRoot(x);
    else
        return guess;
}

double discriminant(double a, double b, double c) {
    return b * b - 4 * a * c;
}

double roots (double a, double b, double c, _Bool x) {
    double rts[2];
    double squareRoot(double x);
    double discriminant(double a, double b, double c);

    if (x)
        return (-b + squareRoot(discriminant(a, b, c))) / 2*a;
    else
        return (-b - squareRoot(discriminant(a, b, c))) / 2*a;
}