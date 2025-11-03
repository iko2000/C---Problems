#include <stdio.h>




int main () {

    int i = 10;

    int array[] = {5,6,9,2,1,5};

    int *p = &array[2];
    int *q = &array[5];

    printf("Value of total of them : %ld\n", q - p); 
    printf("Value at q: %d\n", *q); 

    return 0;
}