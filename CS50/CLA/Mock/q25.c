# include <stdio.h>
# include <string.h>

int main(void)
{
    char tt[20] = "9081726354";

    strcpy(tt, tt + 3);

    printf ("%d\n", strlen(tt) - tt[9] + '5');

    return 0;
}
