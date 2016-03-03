# include <stdio.h>

void removeString (char source[], int start, int chars_num)
{
    int i = 0;
    while ( source[i++] )
        if ( i >= start )
            source[i] = source[i + chars_num];

    while (source[i]) 
        source[i++] = '\0';
}

int main(void)
{
    // prototype
    void removeString (char source[], int start, int chars_num);
    char text[] = "the wrong son";
    printf ("text = %s\n", text);
    removeString(text, 4, 6);
    printf ("removeString(text, 4, 6) = %s\n", text); 
    return 0;
}
