// Printing calculator

#include <stdio.h>

int main (int argc, char *argv[])
{
    float number, result;
    char operator;
    printf ("Begin Calculations\n");

    do {
        scanf ("%f %c", &number, &operator);

        switch (operator) {
            case '+':
                result += number;
                break;
            case '-':
                result -= number;
                break;
            case '*':
                result *= number;
                break;
            case '/':
                if (number == 0)
                    printf ("Division by 0.\n");
                else
                    result /= number;
                break;
            case 'S':
                result = number;
                break;
            case 'E':
                break;
            default:
                printf("Unknown operator.\n");
        }
        printf ("= %f\n", result);
    } while (operator != 'E');

    printf ("End of Calculations.\n");
    
    return 0;
}