/* Some comments
    on multiple lines*/

#include <stdio.h>

int main(void) {
    
    //variables
    int number, square;
    
    number = 0;
    
    printf("SQUARE NUMBERS\n");
    printf(" n      n^2\n");
    printf("---   ---------\n");

    
    for (number = 1; number <= 10; ++number ) {
        square = number * number;
        printf("%-2i     %i\n", number, square);
    }
    
    printf("\n");
    
}