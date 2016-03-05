# include <stdio.h>

int intlen(int number)
{
    int i = 1;
    while (number != 0)
    {
        i++;
        number /= 10;
    }
    return i - 1;
}
void intToStr(int source, char result[])
{
    int i;
    i = intlen(source);
    result[i] = '\0';

    do
    {
        result[--i] = (source % 10) + '0';
        source /= 10;
    } while (source != 0);
}

int main (void)
{
    int src = 2054301;
    char rslt[100];
    printf("number = %i\n", src);
    intToStr(src, rslt);
    printf("string = %s\n", rslt);

    return 0;
}
