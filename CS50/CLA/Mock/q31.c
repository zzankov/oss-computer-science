# include <stdio.h>

int fun(int *t) {
    return *(t+3);
}

int main(void)
{
    int arr[] = {3, 2, 1, 0};
    printf ("%d\n", fun(arr - 2));

    return 0;
}
