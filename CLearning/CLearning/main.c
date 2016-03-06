/* Some comments
    on multiple lines*/

#include <stdio.h>
#include <math.h>

int main(void) {
    
    long double result = (3.31e-8L * 2.01e-7L) / (7.16e-6L+2.01e-8L);
    printf("Results = %Lf\n", result);
    
    return 0 ;
}
