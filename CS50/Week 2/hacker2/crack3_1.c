# include <stdio.h>
# include <ctype.h>
# include <cs50.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

# define _XOPEN_SOURCE

void to_upper (char *s)
{
    while (*s) {
        *s = toupper(*s);
        s++;
    }
}

// function to iteratively increase a string with printable ASCII characters
void inc (char *p)
{
    int i;
    for ( i = 0; i < 8 && p[i] == 122; i++ )
        if ( i >= 8 )
            exit(printf("Not found\n"));
    if ( !p[i] )
        p[i] = 97;
    else p[i]++;
    while (--i >= 0) 
        p[i] = 97;
}

int main (int argc, char *argv[])
{
    // check if correct number and length of arguments was passed
    if ( argc != 2 || strlen(argv[1]) != 13 )
    {
        printf ("\nInvalid argument(s): Only 1 alphanumeric argument of 13 "
                "characters is expected!\n\n");
        return 1;
    }
    // crypt function prototype
    char *crypt(const char *key, const char *salt);

    // declarations
    int i;
    char salt[2];           // the salt argument of the crypt funtion
    char buff[255];         // buffer to read a line from the dictionary
    char d[] = {'a', 0, 0, 0, 0, 0, 0, 0, 0 };
    char d2[9];
    char *path = "/usr/share/dict/words";   // path to dictionary
    char *mode = "r";       // dictionary file mode set to read only
    FILE *dict;             // file pointer to dictionary
    _Bool found = 0;        // password cracked

    // assign salt
    for ( i = 0; i < 2; i++ )
        salt[i] = argv[1][i];
    salt[i] = '\0';

    // loop through dictionary and encrypt each word using the salt until
    // a match to the argv[1] is found.
    // This first check is done in an attempt to guess the password where it is
    // simply a word present in the dictionary (a lot of people do use words
    // generally found in dictionaries as their password). If this approach
    // does not work a more structured check is done.
    dict = fopen(path, mode);
    while ( fgets(buff, 255, (FILE*)dict) && !feof( dict ) && !ferror( dict ) )
    {
        buff[strlen(buff) - 1] = '\0';
        if ( strcmp(argv[1], crypt(buff, salt)) == 0 )
        {
            found = 1;
            printf ("%s\n", buff); 
            break;
        }
    };

    fclose (dict);

    // if the initial scan through the dictionary does not work try if any
    // combination of integers from 0 to 99999999 is a valid password
    //if ( !found ) {
    //    printf ("Checking numbers now\n");
    //    for ( i = 0; i <= 99999999; i++ )
    //    {
    //        snprintf(buff, 255, "%i", i);
    //        if ( strcmp(argv[1], crypt(buff, salt)) == 0 ) {
    //            found = 1;
    //            printf ("%s\n", buff);
    //                break;
    //        }
    //    }
    //}
    // if the password was not found in the dictionary, generate an 8 character
    // string containing combinations of Printable ASCII Characters and run the
    // crypt function on the string comparing it to the argument passed to the
    // call of this program.
    // This will be achieved through a 8 nested loops starting from a string of
    // all SPACE characters (32) and ending at a string of all ~ characters
    // which is the highest ASCII Printable Character

    if ( !found ) {
        printf ("\nDictionary search was not successful. "
                "Attempting brute force now on '%s'.\n", argv[1]);
        while (1) {
            //printf ("%s\n", d);
            strcpy(d2, d);
            to_upper(d2);
            //printf ("%s\n", d2);

            if ( !strcmp(argv[1], crypt(d, salt)) ) 
                exit (printf ("%s = %s\n",argv[1], d));
            else if ( !strcmp(argv[1], crypt(d2, salt)) ) 
                exit (printf ("%s = %s\n",argv[1], d2));
            else
                inc(d);
        }
    }

    printf ("---------------------------------------------------------------"); 

    return 0;
}
