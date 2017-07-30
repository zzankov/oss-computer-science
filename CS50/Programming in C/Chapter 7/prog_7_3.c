#include <stdio.h>

void printMessage(void) {
    printf ("Programming is fun!\n");
}

int main (int argc, char *argv[])
{
    for ( int i = 0; i < 5; i++ )
        printMessage();

    return 0;
}