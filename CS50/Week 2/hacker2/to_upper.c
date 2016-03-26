# include <stdio.h>
# include <ctype.h>

void to_upper (char *s)
{
    while (*s) {
        *s = toupper(*s);
        s++;
    }
}

int main(void)
{
    char str[] = "pederast";
    printf ("%s is for ", str);
    to_upper(str);
    printf ("%s\n", str);

    return 0;
}
