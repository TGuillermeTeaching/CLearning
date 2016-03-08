//
//  GreatestCommonDivisor.c
//  CLearning
//
//  Created by Thomas on 08/03/2016.
//  Copyright © 2016 Thomas. All rights reserved.
//
#include <stdio.h>
#include <math.h>

int main(void) {
    //variables
    int u, v, temp;
    
    //Scanning
    printf("Please type in two positive integers: \n");
    scanf("%i%i", &u, &v);
    
    while(v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }
    
    printf("Their greastest common divisor is %i\n", u);
    
}