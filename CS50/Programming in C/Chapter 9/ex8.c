# include <stdio.h>

// function to find a string location
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

// function to remove a substring
void removeString (char source[], int start, int chars_num)
{
    int i = 0;
    while ( source[i++] ) {
        if ( i >= start ) {
            source[i] = source[i + chars_num];
        }
    }

    while (source[i]) 
        source[i++] = '\0';
}

// function to add a substring
void insertString (char source[], const char insert[], int start)
{
    int i = 0, j = 0; 
    char temp[100];

    while ( source[i + start] ) {
        temp[i] = source[i + start];
        i++;
    }

    temp[i] = '\0';
    i = 0;
    
    while ( insert[i] ) { 
        source[i + start] = insert[i];
        i++;
    } 

    while ( temp[j] )
        source[i++ + start] = temp[j++];
}

// function to replace a string
void replaceString(char source[], const char to_replace[],
        const char substitute[])
{
    int start;
    int i = 0;
    while (to_replace[i])
        i++;

    start = findString(source, to_replace); 

    if ( start != -1 ) {
        removeString(source, start, i);
        insertString(source, substitute, start);
    }
}

int main(void)
{
    char text1[100] = "This is 1 sick SOB!";
    char text2[100] = "SELECT * Tashaci FROM Maina.com";

    printf ("text = '%s'\n", text1);
    replaceString(text1, "1", "one");
    printf ("new text = '%s'\n", text1);

    printf ("text = '%s'\n", text2);
    replaceString(text2, "*", "");
    printf ("new text = '%s'\n", text2);

    return 0;
}
