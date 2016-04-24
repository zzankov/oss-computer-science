# include <stdio.h>
# define SIZE   70
int main( int argc, char *argv[])
{
    FILE *in1, *in2;
    char buff1[SIZE], buff2[SIZE];

    // check for correct number of arguments
    if ( argc != 3 )
    {
        printf ("Incorrect number of arguments!\n");
        return 1;
    }

    // try to open file 1
    if ( !(in1 = fopen(argv[1], "r")) )
    {
        printf ("Could not open file %s for reading.\n", argv[1]);
        return 2;
    }

    // try to open file 2
    if ( !(in2 = fopen(argv[2], "r")) )
    {
        printf ("Could not open file %s for reading.\n", argv[2]);
        return 2;
    }

    // go through file printing in an alternating way
    while (!feof(in1) || !feof(in2))
    {
        if (fgets(buff1, SIZE, in1))
            fputs(buff1, stdout);

        if (fgets(buff2, SIZE, in2)) 
            fputs(buff2, stdout);
    }

    fclose(in1);
    fclose(in2);

    return 0;
}
