# include <stdio.h>

int main(void)
{
    int n = 10;
    printf("This is an example of a for-loop.\n");
    printf("We will loop through some prints %d times.\n",  n);
    
    for (int i = 1; i <= n; i++)
    {
        printf("Printing line number %d!\n", i);
    }
    
    printf("\nSee you later!\n\n");
}
