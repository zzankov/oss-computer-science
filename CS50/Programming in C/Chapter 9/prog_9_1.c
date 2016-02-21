// Function to cancatenate two character strings
# include <stdio.h>

void concat (char result[], const char str1[], int n1,
        const char str2[], int n2)
{
    int i, j;
    // copy str1 into result
    for ( i = 0; i < n1; i++ )
        result[i] = str1[i];

    // copy str2 into result
    for ( j = 0; j < n2; j++ )
        result[i + j] = str2[j];
}

int main(void)
{
    // prototype function    
    void concat (char result[], const char str1[], int n1,
            const char str2[], int n2);
    const char s1[5] = { 'T', 'e', 's', 't', ' ' };
    const char s2[6] = { 'w', 'o', 'r', 'k', 's', '!' };
    char s3[11];
    int  i;

    concat(s3, s1, 5, s2, 6);
    for ( i = 0; i < 11; ++i )
        printf ("%c", s3[i]);
    printf ("\n");

    return 0;
}
