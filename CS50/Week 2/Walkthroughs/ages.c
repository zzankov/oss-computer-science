# include <stdio.h>
# include <cs50.h>

int main(void)
{
    int n;
    do
    {
        printf("Number of people in room: ");
        n = GetInt();
    } while ( n < 1 );

    int ages[n];

    for (int i = 0; i < n; i++){
        printf ("Age of person %i: ", 1 + i);
        ages[i] = GetInt();
    }

    printf ("Time passes...\n");
    for (int i = 0; i < n; i++)
        printf ("A year from now, person %i will be %i years old.\n",
                i + 1, ages[i] + 1);

    return 0;
}
