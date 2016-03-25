// bits stuff

#include <stdio.h>

// bits counter
unsigned int int_size (unsigned int value)
{
    int           size = 0;

    // set the bits to 1s
    value = ~0;

    // count the number of bits
    while ( value ) { // while bits in value are 1
       ++size; // add 1 to size counter
       value >>= 1; // shift bit to right
    }

    return size;
}


// Rotating bits
unsigned int rotate (unsigned int value, int n)
{
    unsigned int int_size (unsigned int value);
    unsigned int result, bits, byte_size;

    // determining the byte size
    byte_size = int_size(value);

    //scale down the shift count to a defined range
    if (n > 0) 
        n = n % byte_size;
    else
        n = -(-n % byte_size);

    if (n == 0)
        result = value;
    else if (n > 0) { // left rotate
        bits = value >> (byte_size - n);
        result = value << n | bits;
    }
    else { // right rotate
        n = -n;
        bits = value << (byte_size - n);
        result = value >> n | bits;
    }

    return result;
}

int main (void)
{
    unsigned int rotate (unsigned int value, int n);
    unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;

    printf("%x rotate %i bits = %x\n", w1, 8, rotate(w1, 8));
    printf("%x rotate %i bits = %x\n", w1, -16, rotate(w1, -16));
    printf("%x rotate %i bits = %x\n", w2, 4, rotate(w2, 4));
    printf("%x rotate %i bits = %x\n", w2, -2, rotate(w2, -2));
    printf("%x rotate %i bits = %x\n", w1, 0, rotate(w1, 0));
    printf("%x rotate %i bits = %x\n", w1, 44, rotate(w1, 44));

    return 0;
}