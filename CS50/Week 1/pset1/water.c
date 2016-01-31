# include <cs50.h>
# include <stdio.h>

int main(void)
{
    int     mins;

    printf ("minutes: ");
    mins = GetInt();
    printf ("bottles: %i\n", 192 * mins / 16);
}
