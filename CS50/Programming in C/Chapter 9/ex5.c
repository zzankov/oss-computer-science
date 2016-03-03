# include <stdio.h>

int findString (const char source[], const char search[])
{
    int match, j = 0;
    for ( int i = 0; source[i]; i++ ) {
        while ( search[j] ) {
            match = 1;
            if ( search[j] != source[i + j] ) {
                match = 0;
                break;
            }
            j++;
        }
        if ( match )
            return i;
    }
    return -1;
}

int main (void)
{
    int index, findString (const char source[], const char search[]);
    char str1[100], str2[100];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    index = findString(str1, str2);

    printf ("The index is %i\n", index);

    return 0;
}
