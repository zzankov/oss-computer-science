# include <stdio.h>

int main(void)
{
    int i = 5, j = i - 4 * i;

    switch (j) {
        default: j = 2;
        case 1: j--; break;
        case 2: j++;
        case 0: j--; break;
    }

    printf ("%d\n", j++);

    return 0;
}
