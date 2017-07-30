/*  The following perfectly valid C program was written without much 
    attention paid to its format. As you will observe, the program is not
    very readable. (And believe it or not, it is even possible to make this
    program significantly more unreadable!) Using the programs presented in
    this chapter as examples, reformat the program so that it is more readable.
    The type the program into the computer and run it.
    
        #include <stdio.h>
        int main(void){
        int n,two_to_the_n;
        printf("TABLE OF POWERS OF TWO\n\n");
        printf(" n     2 to the n\n");
        printf("---    ----------\n");
        two_to_the_n=1;
        for(n=0;n<=10;++n){
        printf("%2i    %i\n",n,two_to_the_n);
        two_to_the_n*=2;}
        return 0;}
        
                                                                             */
                                                                             
#include <stdio.h>

int main (int argc, char *argv[])
{

    printf ("TABLE OF POWERS OF TWO\n\n");
    printf (" n \t2 to the n\n");
    printf ("---\t----------\n");
    
    for (int n = 0, two_to_n = 1; n <= 10; two_to_n *= 2)
        printf("%2i\t%10i\n", n++, two_to_n);

    return 0;
}