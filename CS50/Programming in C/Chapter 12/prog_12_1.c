#include <stdio.h>

#define YES 1
#define NO 0

int isEven (int number)
{
    int answer;

    if (number % 2 )
        answer = NO;
    else
        answer = YES;

    return answer;
}

int main (int argc, char *argv[])
{
    int isEven (int number);

    if (isEven(17) == YES)
        printf("yes ");
    else
        printf("no ");

    if (isEven(20) == YES)
        printf("yes\n");
    else
        printf("no\n");
    
    return 0;
}