# include <stdio.h>

int main(void)
{
    int i = 3, j = i - 2 * i;

    switch (i - j) {
        case 1: j++;
        case 2: j--;
        case 0: j++; break;
        default: j = 0;
    }

    printf ("%d\n", ++j);

    return 0;
}
