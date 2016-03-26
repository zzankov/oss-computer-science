# include <stdio.h>
# include <stdbool.h>

// function to get a mask for a specific bit (location given by the first
// argument of the function, where 0 is the left-most bit) based on an item
// size given in number of bits (arg_size)
unsigned int get_mask (int bit, int arg_size)
{
    unsigned int mask;

    if (bit < 0)            // ID from right to left
    {
        bit = (-bit % arg_size);
        mask = 1 << bit; 
    }
    else                    // ID from left to right
    {
        bit %= arg_size;
        mask = 1 << (arg_size - bit - 1);
    }
    return mask;
}

// function to test whether a specific bit in a specific number is activated
bool bit_test (unsigned int num, int bit)
{
    return num & get_mask(bit, sizeof(num) * 8);
}

// function to turn bit n on inside a number
unsigned int bit_set (unsigned int num, int bit)
{
    return num | get_mask(bit, sizeof(num) * 8);
}

int main(void)
{
    bool bit_test (unsigned int num, int bit);
    unsigned int bit_set (unsigned int num, int bit);
    int bit_num = 29;

    for ( int i = 0; i < 10; i++ ) {
        printf ("bit_num %i is %i in number %i\n", bit_num, 
                bit_test(i, bit_num), i);
        printf ("if the bit is toggled on the number is %u\n", 
                bit_set(i, bit_num));
    }

    return 0;
}
