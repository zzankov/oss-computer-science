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
    float poli, x = 2.55;
    
    poli = 3 * power(x, 3) - 5 * power(x, 2) + 6;
    
    printf("%g\n", poli);
    
    return 0;
}


