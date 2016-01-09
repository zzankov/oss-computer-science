# include <stdio.h>

float power(float a, int b)
{
    int i;
    float result = a;
    for (i = 1; i < b; i++)
        result *= a;
    
    return result;
}

int main(void)
{
    double result;
    result = (3.31 / power(10, 8) * 2.01 / power(10, 7)) / 
        (7.16 / power(10, 6) + 2.01 / power(10,8));
      
    printf ("The result is %g\n.", result);
    printf ("The result is %e\n.", result);
    
    return 0;
}
