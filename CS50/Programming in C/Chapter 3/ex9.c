# include <stdio.h>

int Next_multiple(int i, int j)
{
    int result;
    result = i + j - i % j;
    
    return result;
}

int main(void)
{
    printf("Example from exercise 8: \n");
    printf("For i = 256 and j = 7 the next multiple is %i.\n\n", 
        Next_multiple(256, 7));
    
    printf("Examples from exercise 9: \n");
    printf("For i = 365 and j = 7 the next multiple is %i.\n", 
        Next_multiple(365, 7));
        
    printf("For i = 12258 and j = 23 the next multiple is %i.\n", 
        Next_multiple(12258, 23));
        
    printf("For i = 996 and j = 4 the next multiple is %i.\n", 
        Next_multiple(996, 4));
        
    return 0;
}
