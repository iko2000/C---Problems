#include <stdio.h>


int main () {

    int arr[5] = {1, 4, 5 ,6, 8};
   
    int *p = arr;
   

    int twod[2][2] = {{3,4}, {10,15}};

    int **q = &twod;

    // reversing them.

    for(p = &arr[5-1]; p >= arr;  p--){

        printf("Reversed array: %d", *p);
    }

    printf("Two demensonal array %d", **q);



    return 0;
}