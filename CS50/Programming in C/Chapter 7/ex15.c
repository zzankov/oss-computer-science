// Program to convert a positive integer to another base
# include <stdio.h>

// global variables
int       convertedNumber[64];
long int  numberToConvert;
int       base;
int       digit = 0;

// function to get the number and base required for the program
void getNumberAndBase (void)
{
    printf ("Number to be converted? ");
    scanf  ("%li", &numberToConvert);
    printf ("Base? ");
    scanf  ("%i", &base);
    while ( base < 2 || base > 16 ) {
        printf ("Bad base - must be between 2 and 16\n");
        printf ("Base? ");
        scanf ("%i", &base);
    }
}

// function to convert the number from one base 10 to a different base
void convertNumber (void)
{
    do {
        convertedNumber[digit] = numberToConvert % base;
        ++digit;
        numberToConvert /= base;
    } while ( numberToConvert != 0 );
}

// function to display the converted number (inverse print)
void displayConvertedNumber (void)
{
    const char  baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6',
          '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int nextDigit;
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
    getNumberAndBase();
    convertNumber();
    displayConvertedNumber();

    // end program with a 0 exit to indicate no errors
    return 0;
}
