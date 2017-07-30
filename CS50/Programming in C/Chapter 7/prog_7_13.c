#include <stdio.h>

int main (int argc, char *argv[])
{
    void scalarMultiply (int matrix[3][5], int scalar);
    void displayMatrix (int matrix[3][5]);
    int sampleMatrix[3][5] = 
        {
            {7, 16, 55, 13, 12},
            {12, 10, 52, 0, 7},
            {-2, 1, 2, 4, 9}
        };

    printf ("Original matrix:\n");
    displayMatrix (sampleMatrix);

    printf ("\nMultiplied by 2:\n");
    scalarMultiply (sampleMatrix, 2);
    displayMatrix (sampleMatrix);

    printf("\nThen multiplied by -1:\n");
    scalarMultiply (sampleMatrix, -1);
    displayMatrix(sampleMatrix);

    return 0;
}

void displayMatrix (int matrix[3][5]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j)
            printf ("%5i ", matrix[i][j]);
        printf ("\n");
    };
}

void scalarMultiply(int matrix[3][5], int scalar) {
    for (int i = 0; i < 3; ++i) 
        for (int j = 0; j < 5; ++j)
            matrix[i][j] *= scalar;
}