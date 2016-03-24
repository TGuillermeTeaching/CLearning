// // Function to insert a new entry in a list
// // arguments: a pointer to the ist entry of struct entry) and a pointer to the place in the list after which to insert the value

# include <stdio.h>

// sorting an array (pointer version)
// void sort (int  *a, int  n)
// {
//    int  *aptr1, *aptr2, temp;

//    for ( aptr1 = a;  aptr1 < a + n - 1;  ++aptr1 )
//        for ( aptr2 = aptr1 + 1;  aptr2 < a + n;  ++aptr2 )
//            if ( *aptr1 > *aptr2 ) {
//               temp = *aptr1;
//               *aptr1 = *aptr2;
//               *aptr2 = temp;
//            }
// }

void sort (int *array, int n)
{
    int *array_pointer1, *array_pointer2, temp;

    for (array_pointer1 = array; array_pointer1 < array + n - 1; ++array_pointer1)
        for (array_pointer2 = array_pointer1 + 1; array_pointer2 < array + n; ++array_pointer1)
            if(*array_pointer1 > *array_pointer2) {
                temp = *array_pointer1;
                *array_pointer1 = *array_pointer2;
                *array_pointer2 = temp;
            }
}


int main (void)
{   
    void sort (int *array, int n);
    int i, values_pointer;
    int values[16] = {34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};

    printf("Before sorting:\n");
    for (i = 1; i < 16; ++i)
        printf("%i ", values[i]);
    printf("\n");

    sort(values, 16);

    printf("After sorting:\n");
    for (i = 1; i < 16; ++i)
        printf("%i ", values[i]);
    printf("\n");

    return 0;
}