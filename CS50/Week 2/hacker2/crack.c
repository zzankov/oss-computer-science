# include <stdio.h>
# include <ctype.h>
# include <cs50.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

# define _XOPEN_SOURCE

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
    int i, stop = 1;
    char salt[2];           // the salt argument of the crypt funtion
    char *key = argv[1];    // get from the CLI arguments vector
    char buff[255];         // buffer to read a line from the dictionary
    char buff2[255];
    char dummy[8];
    char brute[9];          // string to be assigned printable chars
    char *path = "/usr/share/dict/words";   // path to dictionary
    char *mode = "r";       // dictionary file mode set to read only
    FILE *dict;             // file pointer to dictionary
    _Bool found = 0;        // password cracked
    
    // assign salt
    for ( i = 0; i < 2; i++ )
        salt[i] = argv[1][i];
    salt[i] = '\0';

    // loop through dictionary and encrypt each word using the salt until
    // a match to the key is found.
    // This first check is done in an attempt to guess the password where it is
    // simply a word present in the dictionary (a lot of people do use words
    // generally found in dictionaries as their password). If this approach
    // does not work a more structured check is done.
    dict = fopen(path, mode);
    while ( fgets(buff, 255, (FILE*)dict) && !feof( dict ) && !ferror( dict ) )
    {
        buff[strlen(buff) - 1] = '\0';
        if ( strcmp(key, crypt(buff, salt)) == 0 )
        {
            found = 1;
            printf ("%s\n", buff); 
            break;
        }

        if ( strlen(buff) < 8 ) {
            for ( i = 0; i < (8 - strlen(buff)); i++ )
                stop *= 10; 

            for ( i = 0; i < stop; i++ )
            {
                snprintf(dummy, 8, "%i", i);
                strcpy(buff2, buff);
                strcat(buff2, dummy);
                //printf ("%8s\tlen = %i\n", buff2, strlen(buff2));
                if ( strcmp(key, crypt(buff2, salt)) == 0 )
                {
                    found = 1;
                    printf ("%s\n", buff2);
                    break;
                }
            }
            stop = 1;
        }
    };
    fclose (dict);

    // if the initial scan through the dictionary does not work try if any
    // combination of integers from 0 to 99999999 is a valid password
    if ( !found )
        for ( i = 0; i <= 99999999; i++ )
        {
            snprintf(buff, 255, "%i", i);
            //printf ("%s\n", buff);
            if ( strcmp(key, crypt(buff, salt)) == 0 ) {
                found = 1;
                printf ("%s\n", buff);
                break;
            }
        }
    // if the password was not found in the dictionary, generate an 8 character
    // string containing combinations of Printable ASCII Characters and run the
    // crypt function on the string comparing it to the argument passed to the
    // call of this program.
    // This will be achieved through a 8 nested loops starting from a string of
    // all SPACE characters (32) and ending at a string of all ~ characters
    // which is the highest ASCII Printable Character
    for ( i = 0; i < 8; i++ )
        brute[i] = ' ';     // assign all space characters
    brute[0] = '\0';

    found = 1;              // temporary disable the function below

    if ( !found )
        while ( *brute <= '~' ) {
            while ( *(brute + 1) <= '~' ) {
                while ( *(brute + 2) <= '~' ) {
                    while ( *(brute + 3) <= '~' ) {
                        while ( *(brute + 4) <= '~' ) {
                            while ( *(brute + 5) <= '~' ) {
                                while ( *(brute + 6) <= '~' ) {
                                    while ( *(brute + 7) <= '~' ) {
                                        if (strcmp(key, crypt(brute, salt)) == 0) { 
                                            printf ("%s\n", brute);
                                            break;
                                        }
                                        printf ("%s\n", brute);
                                        *(brute + 7) += 1;
                                    }
                                    *(brute + 6) += 1;
                                    *(brute + 7) = ' '; 
                                }
                                *(brute + 5) += 1;
                                *(brute + 6) = ' '; 
                                *(brute + 7) = ' '; 
                            }
                            *(brute + 4) += 1;
                            *(brute + 5) = ' '; 
                            *(brute + 6) = ' '; 
                            *(brute + 7) = ' '; 
                        }
                        *(brute + 3) += 1;
                        *(brute + 4) = ' '; 
                        *(brute + 5) = ' '; 
                        *(brute + 6) = ' '; 
                        *(brute + 7) = ' '; 
                    }
                    *(brute + 2) += 1;
                    *(brute + 3) = ' '; 
                    *(brute + 4) = ' '; 
                    *(brute + 5) = ' '; 
                    *(brute + 6) = ' '; 
                    *(brute + 7) = ' '; 
                }
                *(brute + 1) += 1;
                *(brute + 2) = ' '; 
                *(brute + 3) = ' '; 
                *(brute + 4) = ' '; 
                *(brute + 5) = ' '; 
                *(brute + 6) = ' '; 
                *(brute + 7) = ' '; 
            }
            (*brute) += 1;
        }

    return 0;
}
