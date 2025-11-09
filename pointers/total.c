#include <stdio.h>


int main () {

    int arr[] = { 1, 5, 10, 5, 30};
    int sum = 0, *p;
    for(p = &arr[0]; p < &arr[(sizeof(arr) / sizeof(arr[0]))]; p++ ){

            printf("Middle element: %d\n", *p);
            sum += *p;
    }
  printf("Total: %d\n", sum);



    return 0;
}