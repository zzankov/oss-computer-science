# include <stdio.h>

void readLine (char *buffer)
{
    do
        *buffer = getchar(); 
    while (*buffer++ != '\n');
    *--buffer = '\0';
}

int main (void)
{
    char text[81];
    printf ("Type in your text.\n");

    readLine(text);

    printf ("You wrote: '%s'\n", text);

    return 0;
}
