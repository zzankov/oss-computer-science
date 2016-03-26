# include <stdio.h>

// function to get the size of an integer in bits on the specific system
int int_size(void)
{
    return sizeof(int) * 8;
}

// function to rotate the bits of an integer
unsigned int rotate(unsigned int value, int n)
{
    unsigned int result, bits;
    int intsize;
    intsize = int_size();

    // scale down the shift count to an int size
    if ( n > 0 )
        n %= intsize;
    else
        n = -(-n % intsize);

    if ( n == 0 )
        result = value;
    else if ( n > 0 )           // left rotate
    {
        bits = value >> (intsize - n);
        result = value << n | bits;
    }
    else                            // right rotate
    {
        n = -n;
        bits = value << (intsize - n);
        result = value >> n | bits;
    }
    return result;
}

int main(void)
{
    unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u; 
    unsigned int rotate(unsigned int value, int n);
    printf ("%x\n", rotate(w1, 8));
    printf ("%x\n", rotate(w1, -16));
    printf ("%x\n", rotate(w2, 4));
    printf ("%x\n", rotate(w2, -2));
    printf ("%x\n", rotate(w1, 0));
    printf ("%x\n", rotate(w1, 44));

    return 0;

}
