#include <stdio.h>

void removeString(char *text, int start, int characters)
{
    text += start;
    while (text[characters]) {
        *text = text[characters];
        text++;
    }
       
    *text = '\0';
}

int main (int argc, char *argv[])
{
    char str[] = "the wrong son";
    printf("%s\n", str);
    removeString(str, 4, 6);
    printf("%s\n", str);

    return 0;
}