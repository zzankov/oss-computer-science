#include <stdio.h>

char uppercase(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    else
        return c;
}

int main (int argc, char *argv[])
{
    char c;
    do 
    {
        c = getchar();
        printf("%c", uppercase(c));
    } while (c != '=');
    
    return 0;
}