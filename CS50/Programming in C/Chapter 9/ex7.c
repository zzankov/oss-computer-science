# include <stdio.h>

void insertString (char source[], const char insert[], int start)
{
    int i = 0, j = 0;
    char temp[100];
    while (insert[i]) {
        temp[i] = source[start + i];
        source[start + i] = insert[i];
        i++;
    }
    temp[i] = '\0';

    while (temp[j])
        source[i++ + start] = temp[j++];
}

int main(void)
{
    // prototype
    void insertString (char source[], const char insert[], int start);
    char text[50] = "the wrong son";
    printf ("text = %s\n", text);
    insertString(text, "per", 10);
    printf ("insertString(text, \"per\", 10) = %s\n", text); 
    return 0;
}
