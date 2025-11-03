#include <stdio.h>

int *findMiddleElement(int arr[], int length) {
    if (length <= 0) {
        return NULL; // Error: invalid length
    }
    return &arr[length / 2];
}

int main () {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int lenght = sizeof(arr)/sizeof(arr[0]);

    int *mid = findMiddleElement(arr, lenght);
   
    printf("Middle element: %d\n", *mid);


    int i = 10;
    int *p = &i;

    printf("The address of i is: %p\n", &i);



    return 0;
}