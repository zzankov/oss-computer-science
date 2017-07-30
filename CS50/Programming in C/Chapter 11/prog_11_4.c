#include <stdio.h>

int main (int argc, char *argv[])
{
    unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;
    unsigned int rotate(unsigned int value, int n);
    char fmt[] = "%x\n";
    printf (fmt, rotate(w1, 8));
    printf (fmt, rotate(w1, -16));
    printf (fmt, rotate(w2, 4));
    printf (fmt, rotate(w2, -2));
    printf (fmt, rotate(w1, 0));
    printf (fmt, rotate(w1, 44));

    return 0;
}

unsigned int rotate(unsigned int value, int n)
{
    unsigned int result, bits;
    int int_size = sizeof(unsigned int) * 8;
    
    // scale down the shift count to a defined range
    if (n > 0)
        n %= int_size;
    else
        n = -(-n % int_size);

    if ( n == 0 )
        result = value;
    else if (n > 0) {       // left rotate
        bits = value >> (int_size - n);
        result = value << n | bits;
    }
    else {                  // right rotate
        n = -n;
        bits = value << (32 - n);
        result = value >> n | bits;
    }

    return result;
}

