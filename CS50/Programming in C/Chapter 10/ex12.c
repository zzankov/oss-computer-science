# include <stdio.h>

int main(void)
{
    char *message = "Programming in C is fun\n";
    char message2[] = "You said it\n";
    char *format = "x = %i\n";
    int x = 100;

    printf ("/*** Set 1 ***/\n");
    printf ("---------------\n");
    printf ("Programming in C is fun\n");
    printf ("%s", "Programming in C is fun\n");
    printf ("%s", message);
    //printf (message); // I think this will be invalid
    printf ("\n");

    printf ("/*** Set 2 ***/\n");
    printf ("---------------\n");
    printf ("You said it\n");
    printf ("%s", message2);
    //printf (message2);  // this will most certainly be invalid; will not comp
    printf ("%s", &message2[0]); // will only print 'Y'
    printf ("\n");

    printf ("/*** Set 3 ***/\n");
    printf ("---------------\n");
    printf ("said it\n");
    //printf (message2 + 4); // invalid
    printf ("%s", message2 + 4); // will only print ' ' but valid
    printf ("%s", &message2[4]); // same as above 
    printf ("\n");

    printf ("/*** Set 4 ***/\n");
    printf ("---------------\n");
    printf ("x = %i\n", x);
    printf (format, x); // invalid
    printf ("\n");
    
    return 0;
}
