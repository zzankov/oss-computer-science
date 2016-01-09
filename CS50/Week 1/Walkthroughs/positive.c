# include <stdio.h>
# include <cs50.h>

int main(void)
{
    int n;
    do
    {
        printf("Please give me a positive int: ");
        n = GetInt();
    }
    while (n < 1);
    printf("Thank you for the positive int!\n");
}
