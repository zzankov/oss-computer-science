#include <stdio.h>
#include <math.h>

typedef struct 
{
	float x;
	float y;
} Point;

double distance (Point p1, Point p2)
{
	double diffx, diffy;
	diffx = p1.x - p2.x;
	diffy = p1.y - p2.y;

	return sqrt(diffx * diffy + diffy* diffy);
}

int main (int argc, char *argv[])
{
	Point p1, p2;
	p1 = (Point){0.0, 0.0};
	p2 = (Point){2.0, 2.0};
	printf ("%lf\n", distance(p1, p2));

	return 0;
}