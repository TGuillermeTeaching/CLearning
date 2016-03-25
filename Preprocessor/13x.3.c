// Playing with preprocessors

#include <stdio.h>

#define TRUE 1
#define FALSE 0

#define MIN(x, y)( (x) < (y) ?(x):(y) )
#define MAX(x, y)( (x) > (y) ?(x):(y) )
#define MAX3(x, y, z) MAX(MAX(x,y), (z))
#define IS_UPPER_CASE(w) ( ((w) >= 'A') && ((w) <= 'Z') )
#define IS_LOWER_CASE(w) ( ((w) >= 'a') && ((w) <= 'z') )
#define IS_ALPHABETIC(w) ( IS_UPPER_CASE(w) ? (1) : IS_LOWER_CASE(w) ? (1) : (0) )

// Testing the macro
int main (void)
{
    int x, y, z, min_val, max_val;
    char w;

    // printf("Enter two values:");
    // scanf("%i %i", &x, &y);

    // min_val = MIN(x,y);

    // printf("Lower value is %i.\n", min_val);

    // printf("Enter one more value:");
    // scanf("%i", &z);

    // max_val = MAX3(x,y,z);

    // printf("Higher value is %i.\n", max_val);    

    printf("Enter a character:");
    scanf("%c", &w);

    if(IS_ALPHABETIC(w)) {
        printf("%c is an alphabetic character.\n",w);
    } else {
        printf("%c is an alphabetic character.\n",w);
    }

    return 0;
}