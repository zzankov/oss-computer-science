# include <stdio.h>

int main(void)
{
    int mx[4][5] = { {1, 2, 3, 4, 5}, 
        { 6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}, 
        {16, 17, 18, 19, 20 }
    };

    void transposeMatrix( int nRows, int nCols, int matrix[nRows][nCols] ); 

    printf ("\nThe original matrix: \n");

    for ( int i = 0; i < 4; i++ )
    {
        for ( int j = 0; j < 5; j++ )
            printf ("%5i\t", mx[i][j]);
        printf ("\n");
    }

    printf ("\nThe transposed matrix: \n");

    transposeMatrix(4, 5, mx);

    return 0;
}


void transposeMatrix( int nRows, int nCols, int matrix[nRows][nCols] )
{
    for ( int i = 0; i < nCols; i++ )
    {
        for ( int j = 0; j < nRows; j++ )
            printf ("%5i\t", matrix[j][i]);
        printf ("\n");
    }
}
