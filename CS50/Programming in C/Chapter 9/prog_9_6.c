#include <stdio.h>

int main (int argc, char *argv[])
{
    char line[81];
    void readLine (char buffer[]);

    for ( int i = 0; i < 3; i++) {
        readLine(line);
        printf ("%s\n\n", line);
    }

    return 0;
}

void readLine (char buffer[]) {
    char c;
    int i = 0;

    do {
        c = getchar();
        buffer[i] = c;
        ++i;
    } while (c != '\n');

    buffer[i - 1] = '\0';
}