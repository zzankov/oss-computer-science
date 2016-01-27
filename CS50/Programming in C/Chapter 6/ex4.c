# include <stdio.h>

int main(void)
{
    float sum = 0, nums[10] = {0};
    int i;

    printf ("Please give me 10 numbers:\n");

    for ( i = 0; i < 10; ++i )
        scanf ("%f", &nums[i]);
    
    for ( i = 0; i < 10; ++i )
        sum += nums[i];

    printf ("%f\n", sum / i);
    
    return 0;

}
