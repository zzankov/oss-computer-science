# include <stdio.h>

int main(void)
{
    float a = 123.456;
    printf("%f\n", a);
    
    float b = 0001;
    printf("%f\n", b);

    long long int c = 0Xab05;
    printf("%ll#x\n", c);
    
    //long double d = 0x10.5;   //invalid
    //printf("%lf\n", d);
    
    //ong double e = 0X0G1;     //invalid
    //printf("%lf\n", e);
    
    long int f = 123L;
    printf("%li\n", f);

    long double g = 0Xab05;
    printf("%Lg\n", g);

    long int h = 0L;
    printf("%li\n", h);

    float i = -597.25;
    printf("%f\n", i);
    
    return 0;
}
