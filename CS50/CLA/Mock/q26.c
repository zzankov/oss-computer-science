# include <stdio.h>
# include <string.h>

int main(void)
{
    char tt[20] = "0123456789";

    strcat (tt + 11, "123");

    printf ("%d\n", strlen(tt) - tt[8] + '0');

    return 0;
}
