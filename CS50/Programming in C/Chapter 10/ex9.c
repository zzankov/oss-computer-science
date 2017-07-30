#include <stdio.h>

void readLine(char *buffer)
{
    do 
        *buffer = getchar();
    while (*buffer++ != '\n');
    *--buffer = '\0';
}

int main (int argc, char *argv[])
{
    void readLine(char *buffer);
    char buffer[81];

    printf ("Enter your text:\n");
    readLine(buffer);
    printf ("You entered: '%s'\n", buffer);

    return 0;
}