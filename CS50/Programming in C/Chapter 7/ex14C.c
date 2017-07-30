#include <stdio.h>

double gMatrix[4][5] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15},
    {16, 17, 18, 19, 20}
};
double gT[5][4] = {0};

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

    printf ("Original matrix:\n");
    printMatrix(4, 5, gMatrix);
    transposeMatrix(4, 5, gMatrix, gT);
    printf ("\nTransposed matrix:\n");
    printMatrix(5, 4, gT);

    return 0;
}