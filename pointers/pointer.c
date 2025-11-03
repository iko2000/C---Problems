#include <stdio.h>


int FindMinMax (int arr[], int len, int *min, int *max) {
    if (len <= 0) {
        return -1; // Error: invalid length
    }

    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < len; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }

    return 0; 
}


int main () {

     
    int a[] = {10, 20, 30, 40, 50};
    int min, max;
    int len = sizeof(a)/sizeof(a[0]);
    if (FindMinMax(a, len, &min, &max) == 0) {
        printf("Min: %d, Max: %d\n", min, max);
    } else {
        printf("Error finding min and max.\n");
    }

    return 0;
}