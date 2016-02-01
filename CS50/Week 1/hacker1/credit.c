# include <math.h>
# include <cs50.h>
# include <stdio.h>

int diglen(long long int num)
{
    int length = 0;

    while ( num != 0 )
    {
        num /= 10;
        length++;
    }

    return length;
}

int main(void)
{
    // declarations
    unsigned long long int cardNum;
    int i, checksum = 0, len, rem;
    string cardType;
    
    // user input for credit card
    do {
        printf ("Number: ");
        cardNum = GetLongLong();
    } while ( cardNum < 1 );

    // get length
    len = diglen(cardNum);

    // initiate loop through number
    for ( i = 1; i <= len; i++ )
    {
        // take every other digit, multiply by 2 and add each digit of result
        // to checksum
        if ( i % 2 == 0 ) 
        {
            rem = (cardNum % 10) * 2 ;
            if ( rem < 10 )
                checksum += rem;
            else
                while ( rem != 0 )
                {
                    checksum += rem % 10;
                    rem /= 10;
                }
        // take remaining digit and add to checksum
        } else
            checksum += cardNum % 10; 

        // move onto next digit of the number
        cardNum /= 10;

        // once down to the first 2 digits of the number make checks in order
        // to determine what type of card the person may have
        if ( i == len - 2 )
        {
            if ( len == 15 && (cardNum == 34 || cardNum == 37) )
                cardType = "AMEX";
            else if ( len == 16 && (cardNum == 51 || cardNum == 52 || 
                        cardNum == 53 || cardNum == 54 || cardNum == 55) )
                cardType = "MASTERCARD";
            else if ( (len == 13 || len == 16) && cardNum / 10 == 4 )
                cardType = "VISA";
            else 
                cardType = "INVALID";
        }
    }

    // if the checksum is not equally divisible by 10 then invalid cardNum
    if ( checksum % 10 != 0 )
        cardType = "INVALID";

    printf ("%s\n", cardType);

    return 0;
}
