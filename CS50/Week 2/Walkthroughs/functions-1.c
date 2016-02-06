# include <stdio.h>
# include <cs50.h>

int GetPositiveInt(void);

int main(void)
{
    int n = GetPositiveInt();
    printf ("Thanks for the %i!\n", n);
}

int GetPositiveInt()
{
    int n;

    do {
        printf ("Number: ");
        n = GetInt();
    } while ( n <= 0 );

    return n;
}
