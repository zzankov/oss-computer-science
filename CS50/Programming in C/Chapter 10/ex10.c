#include <stdio.h>

int strComp(char *s1, char *s2)
{
    while (*s1== *s2 && *s1 && *s2)
        s1++, s2++;
    
    if (*s1 < *s2)
        return -1;
    else if (*s1 > *s2)
        return 1;
    else
        return 0;
}

int main (int argc, char *argv[])
{
    char str1[] = "This is a string.";
    char str2[] = "This is another string";

    printf ("'%s' and '%s' compared: %i\n", str1, str2, strComp(str1, str2));
    printf ("'%s' and '%s' compared: %i\n", str1, str1, strComp(str1, str1));
    printf ("'%s' and '%s' compared: %i\n", str2, "Another string", strComp(str2, "Another string"));

    return 0;
}