# include <stdio.h>
int main(void)
{
    void scalarMultiply (int matrix[3][5], int scalar);
    void displayMatrix (int matrix[3][5]);
    int simpleMatrix[3][5] = 
        {
            {  7, 16, 55, 13, 12 },
            { 12, 10, 52,  0,  7 },
            { -2,  1,  2,  4,  9 }
        };

    printf ("Original matrix:\n");
    displayMatrix (simpleMatrix);

    scalarMultiply (simpleMatrix, 2);
    printf ("\nMultiplied by 2:\n");
    displayMatrix (simpleMatrix);

    scalarMultiply (simpleMatrix, -1);
    printf ("Then multiplied by -1:\n");
    displayMatrix (simpleMatrix);

    return 0;
}

// function to multiply a 3 x 5 array by a scalar
void scalarMultiply (int matrix[3][5], int scalar)
{
    int row, column;
    for ( row = 0; row < 3; ++row )
        for ( column = 0; column < 5; ++ column )
            matrix[row][column] *= scalar;
}

void displayMatrix (int matrix[3][5])
{
    int row, column;
    for ( row = 0; row < 3; row++ ) {
        for ( column = 0; column < 5; column++ )
            printf ("%5i", matrix[row][column]);
        printf ("\n");
    }
}
