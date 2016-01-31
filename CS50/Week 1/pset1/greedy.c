# include <math.h>
# include <cs50.h>
# include <stdio.h>

int main(void)
{
    float   change;
    int     cents, coins = 0;

    printf ("O hai! ");

    do {
        printf ("How much change is owed?\n");
        change = GetFloat();
    } while ( change < 0);
    
    cents = roundf(change * 100);

    coins += cents / 25;
    cents %= 25;

    coins += cents / 10;
    cents %= 10;

    coins += cents / 5;
    cents %= 5;

    coins += cents;

    printf ("%i\n", coins);
} 
