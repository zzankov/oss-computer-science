#include <stdio.h>
#include <stdbool.h>

int findString (char *source, char *search)
{
    int i = 0;
    _Bool match;
    while (*source)
    {
        match = true;
        for (int j = 0; search[j]; j++)
            if (source[j] != search[j])
                match = false;

        if (match)
            return i;
        i++;
        source++;
    }

    return -1;
}

void removeString(char *text, int start, int characters)
{
    text += start;
    while (text[characters]) {
        *text = text[characters];
        text++;
    }
       
    *text = '\0';
}

void insertString (char source[], const char insert[], int start)
{
    int i = 0, j = 0;
    char temp[100];
    
    while (source[start + i])
    {
        temp[i] = source[start + i];
        i++;
    }
    temp[i] = '\0';

    i = 0;
    while (insert[i]) 
    {
        source[start + i] = insert[i];
        i++;
    }

    while (temp[j])
        source[i++ + start] = temp[j++];
    source[i + start] = '\0';
}

bool replaceString(char source[], char s1[], char s2[])
{
    int findString (char *source, char *search);
    void removeString(char *text, int start, int characters);
    void insertString (char source[], const char insert[], int start);
    int strLen(char *str);
    int s1_pos;
    s1_pos = findString(source, s1);
    if (s1_pos != -1) {
        removeString(source, s1_pos, strLen(s1));
        insertString(source, s2, s1_pos);
    } 
    return s1_pos != -1;
}

int strLen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

int main (int argc, char *argv[])
{
    char text[] = "He is 1 ugly bastard!";
    replaceString(text, "1", "one");
    printf ("%s\n", text);
    bool stillFound;
    do {
        stillFound = replaceString(text, " ", "");
        printf ("%s\n", text);
    }
    while (stillFound);

    return 0;
}