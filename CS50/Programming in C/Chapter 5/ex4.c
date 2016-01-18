// Printing calculator

# include <stdio.h>

int main(void)
{
    double      num, accum;
    char        op;
    
    printf ("THIS IS A PRINTING CALCULATOR\n");
    printf ("IT TAKES ARGUMENTS IN THE FORM\n\n");
    printf ("      number operator      \n\n");
    printf (" Acceptable operators are: \n");
    printf ("    +    -    /    S    E    \n");
    printf ("Where S sets an accumulator and \n");
    printf ("E ends the calculation\n\n");
    printf ("Begin Calculations\n");
    
    do {
        scanf  ("%lf %c", &num, &op);
        //printf ("num = %lf\n", num);
        //printf ("op = %c\n", op);
        if ( op != 'S' && op != 'E')
            printf ("Please begin by setting an accumulator with the S operator\n");
    } while ( op != 'S' && op != 'E');
    
    while ( op != 'E' ) {
        switch ( op ) {
            case 'S':
                accum = num;
                printf ("= %.6lf\n", accum);
                break;
            
            case '-':
                accum -= num;
                printf ("= %.6lf\n", accum);
                break;
                
            case '+':
                accum += num;
                printf ("= %.6lf\n", accum);
                break;
                
            case '*':
                accum *= num;
                printf ("= %.6lf\n", accum);
                break;
                
            case '/':
                if (num == 0)
                    printf ("Division by 0\n");
                else {
                    accum /= num;
                    printf ("= %.6lf\n", accum);
                }
                break;
                
            default:
                printf ("Unknown operator\n");
                printf ("= %.6lf\n", accum);
        }
        //printf ("= %.6lf\n", accum);
        scanf  ("%lf %c", &num, &op);
    }
    printf ("End of Calculations.\n");
}
