#include <stdio.h>

void transposeMatrix(int nRows, int nCols, 
    double matrix[nRows][nCols], double t[nCols][nRows]) {
    
    for (int i = 0; i < nRows; ++i)
        for (int j = 0; j < nCols; j++)
            t[j][i] = matrix[i][j];
}

void printMatrix(int nRows, int nCols, double matrix[nRows][nCols]) {
    for (int i = 0; i < nRows; ++i) {
        for (int j = 0; j < nCols; j++)
            printf ("%.2f\t", matrix[i][j]);
        printf ("\n");
    }
}

int main (int argc, char *argv[])
{
    void printMatrix(int nRows, int nCols, 
        double matrix[nRows][nCols]);
    void transposeMatrix(int nRows, int nCols, 
        double matrix[nRows][nCols], double t[nCols][nRows]);

    double matrix[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };
    double t[5][4] = {0};

    printf ("Original matrix:\n");
    printMatrix(4, 5, matrix);
    transposeMatrix(4, 5, matrix, t);
    printf ("\nTransposed matrix:\n");
    printMatrix(5, 4, t);

    return 0;
}