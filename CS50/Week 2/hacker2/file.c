# include <stdio.h>
# include <string.h>

int main(void)
{
    char *path = "/usr/share/dict/words";
    char *mode = "r";
    FILE *dict;
    char buff[255];
    int i = 0;

    dict = fopen(path, mode);

    while ( fgets (buff, 255, (FILE*)dict) && !feof(dict) && !ferror(dict) )
    {
        i++;
        //fgets (buff, 255, (FILE*)dict);
        printf ("%i: %s\n", i, buff);
    }; 

    fclose ( dict );

    return 0;
}
