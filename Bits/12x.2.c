// Is this machine doing logical or arithmetic shifts?

#include <stdio.h>

// shifting function
int shift (int value, int n)
{
    if (n > 0) // perform a left shift
        value <<= n;
    else       // perform a right shift
        value >>= -n;

    return value;
}

int main (void)
{
    int w1 = -1100, w2 =0444u;
    int shift (int value, int n);
    int shifter;
    shifter = -5;

    printf("%o shifted to %i = %o (or %o)\n", w1, shifter, shift(w1, shifter), w1 >> 1 );

    if(shift(w1, shifter) < 0)
        printf("Machine performs arithmetic shifts\n");
    else 
        printf("Machine performs logical shifts\n");
    return 0;
}