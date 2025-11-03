#include <stdio.h>


int main () {

    int arr[5] = {1, 2, 2, 3, 5};

    int size = sizeof(arr) / sizeof(arr[0]);
     printf("Size of array %d\n", size);

    int digits = 0;
    for (int i = 0; i < 5; i++){
       

        for(int j = 0; j < 5; j++){
           
            if(arr[i] == arr[j] && i != j){
              printf("Repeated number %d\n", arr[i]);

            }
        }

    }


    return 0;
}