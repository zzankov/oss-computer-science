# include <stdio.h> 
int main(void)
{
    int i = -1, j = 1;
    
    for ( i++; i++; i++ )
        j++;

    printf ("%d\n", i + j);

    return 0;
}
