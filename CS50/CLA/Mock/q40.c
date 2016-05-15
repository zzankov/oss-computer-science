# include <stdio.h>

int main(void){
    double a = 5.5, *b = &a, **c = &b, ***d = &c;

    printf ("d = %g\n", ***d);

    return 0;
}
