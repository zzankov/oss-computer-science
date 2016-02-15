// Program to convert a positive integer to another base
# include <stdio.h>

// global variables
long int  numberToConvert, temp;
int       convertedNumber[64];
int       base;
int       digit = 0;
_Bool     end;

// function to get the number and base required for the program
void getNumberAndBase (void)
{
    base = 0; 
    numberToConvert = 0;

    printf ("Number to be converted? ");
    scanf  ("%li", &numberToConvert); // get number to convert
    end = (numberToConvert == 0);
    if (end)
        return;
    printf ("Base? ");
    scanf  ("%i", &base); // get base 

    // so long as the base is invalid the user will be prompted to give a valid
    // base
    while ( base < 2 || base > 16 ) {
        printf ("Bad base - must be between 2 and 16\n");
        printf ("Base? ");
        scanf ("%i", &base);
    }
}

// function to convert the number from one base 10 to a different base
void convertNumber (void)
{
    // follow algorithm to convert number:
    // 1) get modulo of base
    // 2) (int) divide number by base
    // 3) repeat until the nuber reaches 0
    if (end)
        return;

    digit = 0;

    for ( int i = 0; i < 64; i++ )
        convertedNumber[i] = 0;

    do {
        convertedNumber[digit] = numberToConvert % base;
        ++digit;
        numberToConvert /= base;
    } while ( numberToConvert != 0 );
}

// function to display the converted number (inverse print)
void displayConvertedNumber (void)
{
    // set constant array to be read according to the converted number
    const char  baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6',
        '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int nextDigit;

    if (end)
        return;

    // print converted number in an inverse order
    printf ("Converted number: ");
    for ( --digit; digit >= 0; digit-- ) {
        nextDigit = convertedNumber[digit];
        printf ("%c", baseDigits[nextDigit]);
    }
    printf ("\n");
}

// main function
int main (void)
{
    void getNumberAndBase (void), convertNumber (void), 
         displayConvertedNumber (void);

    // convert as many numbers as the user likes until he types in the number
    // zero as the number to be converted.
    do {
        getNumberAndBase();
        convertNumber(); 
        displayConvertedNumber(); 
    } while (!end); // use 0 as an exit number

    // end program with a 0 exit to indicate no errors
    return 0;
}
