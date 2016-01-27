# include <stdio.h>

int main(void)
{
    int M[4][5] = { 10, 5, -3, 17, 82, 9, 0, 0, -7, 32,
                    20, 1, 0, 14, 0, 0, 8, 7, 6};

    int i, j;
    
    for ( i = 0; i <= 3; i++ ) {
        for ( j = 0; j <= 4; j++ )
            printf ("%2i    ", M[i][j]);

        printf ("\n");
    }  
}
