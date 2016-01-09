# include <stdio.h>
# include <cs50.h>

int main(void)
{
    printf("Please give me an int: ");
    int x = GetInt();
    
    if (x > 0) 
    {
        printf("You picked a positive integer!\n");
    }
    else if (x == 0)
    {
        printf("You picked zero!\n");
    }
    else
    {
        printf("You picked a negative integer!\n");
    }
}
