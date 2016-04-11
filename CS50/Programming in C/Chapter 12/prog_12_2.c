/* Function to calculate the area and circumference of a circle and the volume
 * of a sphere of a given radius */
# include <stdio.h>
# define PI 3.141592654
double circumference (double r)
{
    return 2 * PI * r;
}

double area (double r)
{
    return PI * r * r;
}

double volume (double r)
{
    return 4.0 * PI * r * r * r / 3.0;
}

int main(void)
{
    double area (double r), circumference (double r), volume (double r);
    printf ("radius = 1: %.4f   %.4f    %.4f\n", area(1.0), circumference(1.0),
            volume(1.0));
    printf ("radius = 4.98: %.4f    %.4f    %.4f\n", area(4.98),
            circumference(4.98), volume(4.98));
    return 0;
}
