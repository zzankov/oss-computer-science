# include <stdio.h>
int main(void)
{
    char s[20] = "?";
    FILE *f = fopen("fopen","w");
    int i = fputs("789",f);
    fclose(f);
    f = fopen("fopen","r");
    fgets(s + 1, 3, f);

    //printf ("%s\n", s);
    printf ("%c\n", s[2] - s[3]);
    fclose(f);

    return 0;
}
