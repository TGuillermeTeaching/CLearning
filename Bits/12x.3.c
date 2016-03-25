// Is this machine doing logical or arithmetic shifts?

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


int main (void)
{
    unsigned int int_size (unsigned int value);
    int value_test, size;

    printf("Enter a value: ");
    scanf("%i", &value_test);

    size = int_size(value_test);

    printf("%i is composed of %i bits.\n", value_test, size);

    return 0;
}