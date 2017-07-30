#include <stdio.h>

int main (int argc, char *argv[])
{
    void scalarMultiply (int nRows, int nCols, 
        int matrix[nRows][nCols], int scalar);
    void displayMatrix (int nRows, int nCols, 
        int matrix[nRows][nCols]);
    int sampleMatrix[3][5] = 
        {
            {7, 16, 55, 13, 12},
            {12, 10, 52, 0, 7},
            {-2, 1, 2, 4, 9}
        };

    printf ("Original matrix:\n");
    displayMatrix(3, 5,  sampleMatrix);

    printf ("\nMultiply by 2:\n");
    scalarMultiply(3, 5, sampleMatrix, 2);
    displayMatrix(3, 5,  sampleMatrix);

    printf ("\nThen multiplied by -1:\n");
    scalarMultiply(3, 5, sampleMatrix, -1);
    displayMatrix(3, 5,  sampleMatrix);

    return 0;
}

void scalarMultiply (int nRows, int nCols, 
    int matrix[nRows][nCols], int scalar) {
    for (int i = 0; i < nRows; ++i)
        for (int j = 0; j < nCols; ++j)
            matrix[i][j] *= scalar;
}

void displayMatrix (int nRows, int nCols,
    int matrix[nRows][nCols]) {
    for (int i = 0; i < nRows; ++i) {
        for (int j = 0; j < nCols; ++j)
            printf ("%5i ",matrix[i][j]);
        printf ("\n");
    }
}